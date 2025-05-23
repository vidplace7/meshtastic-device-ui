#include "mesh-pb-constants.h"
//@Ve #include "FSCommon.h"
// #include "configuration.h"
#include <Arduino.h>
#include <assert.h>
#include <pb_decode.h>
#include <pb_encode.h>

/// helper function for encoding a record as a protobuf, any failures to encode are fatal and we will panic
/// returns the encoded packet size
size_t pb_encode_to_bytes(uint8_t *destbuf, size_t destbufsize, const pb_msgdesc_t *fields, const void *src_struct)
{
    pb_ostream_t stream = pb_ostream_from_buffer(destbuf, destbufsize);
    if (!pb_encode(&stream, fields, src_struct)) {
        //@Ve LOG_ERROR("Panic: can't encode protobuf reason='%s'\n", PB_GET_ERROR(&stream));
        assert(
            0); // If this assert fails it probably means you made a field too large for the max limits specified in mesh.options
    } else {
        return stream.bytes_written;
    }
}

/// helper function for decoding a record as a protobuf, we will return false if the decoding failed
bool pb_decode_from_bytes(const uint8_t *srcbuf, size_t srcbufsize, const pb_msgdesc_t *fields, void *dest_struct)
{
    pb_istream_t stream = pb_istream_from_buffer(srcbuf, srcbufsize);
    if (!pb_decode(&stream, fields, dest_struct)) {
        //@Ve LOG_ERROR("Can't decode protobuf reason='%s', pb_msgdesc %p\n", PB_GET_ERROR(&stream), fields);
        return false;
    } else {
        return true;
    }
}

#ifdef FSCom
/// Read from an Arduino File
bool readcb(pb_istream_t *stream, uint8_t *buf, size_t count)
{
    bool status = false;
    File *file = (File *)stream->state;

    if (buf == NULL) {
        while (count-- && file->read() != EOF)
            ;
        return count == 0;
    }

    status = (file->read(buf, count) == (int)count);

    if (file->available() == 0)
        stream->bytes_left = 0;

    return status;
}

/// Write to an arduino file
bool writecb(pb_ostream_t *stream, const uint8_t *buf, size_t count)
{
    File *file = (File *)stream->state;
    // LOG_DEBUG("writing %d bytes to protobuf file\n", count);
    return file->write(buf, count) == count;
}
#endif

bool is_in_helper(uint32_t n, const uint32_t *array, pb_size_t count)
{
    for (pb_size_t i = 0; i < count; i++)
        if (array[i] == n)
            return true;

    return false;
}
