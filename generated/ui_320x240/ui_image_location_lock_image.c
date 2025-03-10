#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_LOCATION_LOCK_IMAGE
#define LV_ATTRIBUTE_IMG_LOCATION_LOCK_IMAGE
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_LOCATION_LOCK_IMAGE
uint8_t img_location_lock_image_map[] = {

    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9a,0xd6,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x79,0xce,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x79,0xce,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xba,0xd6,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x79,0xce,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xde,0xff,0xff,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xff,0xff,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xde,0xdb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xdb,0xde,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xde,0xdb,0xde,0x3c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x3c,0xe7,0xdb,0xde,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x79,0xce,0xff,0xff,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x9a,0xd6,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x9a,0xd6,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xff,0xff,0x79,0xce,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x59,0xce,0x00,0x00,0xba,0xd6,0x5d,0xef,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,
    0x00,0x00,0x79,0xce,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x96,0xb5,0xfb,0xde,0xfb,0xde,0x59,0xce,0x59,0xce,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xff,0xff,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x79,0xce,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0x71,0x8c,0xfb,0xde,0xfb,0xde,0x79,0xce,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x79,0xce,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xdb,0xde,0xba,0xd6,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xba,0xd6,0xdb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x9a,0xd6,0xdb,0xde,0x1c,0xe7,0xdb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xdb,0xde,0x9a,0xd6,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xdb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xba,0xd6,0xba,0xd6,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x9a,0xd6,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,
    0x00,0x00,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x86,0x31,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x5d,0xef,0xdb,0xde,0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,
    0x00,0x00,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xdb,0xde,0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,
    0x00,0x00,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x3c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x55,0xad,0x59,0xce,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x38,0xc6,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x00,0x00,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x9a,0xd6,0xdb,0xde,0xdb,0xde,0x69,0x4a,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xba,0xd6,0x59,0xce,0xdb,0xde,0x79,0xce,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xdb,0xde,0xba,0xd6,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,0xba,0xd6,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xb2,0x94,0xdb,0xde,0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xdb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,0xdb,0xde,0xba,0xd6,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0x79,0xce,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x34,0xa5,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x34,0xa5,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x79,0xce,0x00,0x00,
    0x00,0x00,0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xdb,0xde,0x79,0xce,0x5d,0xef,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x79,0xce,0xff,0xff,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x9a,0xd6,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x9a,0xd6,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,0x79,0xce,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xde,0xdb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x3c,0xe7,0xdb,0xde,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xde,0xdb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xdb,0xde,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xde,0xff,0xff,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x00,0x00,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x79,0xce,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xba,0xd6,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x79,0xce,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x79,0xce,0xfb,0xde,0xdb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xdb,0xde,0xfb,0xde,0x79,0xce,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x20,0x49,0x6a,0x7c,0x7c,0x6a,0x49,0x20,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x46,0xa1,0xde,0xf9,0xff,0xff,0xff,0xff,0xf9,0xdf,0xa2,0x47,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0xa2,0xf3,0xff,0xff,0xfd,0xee,0xe3,0xe3,0xee,0xfd,0xff,0xff,0xf4,0xa2,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0xd4,0xff,0xff,0xe5,0x9d,0x59,0x31,0x21,0x21,0x31,0x59,0x9d,0xe5,0xff,0xff,0xd4,0x44,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x44,0xe2,0xff,0xf8,0x9f,0x2e,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x2e,0x9f,0xf8,0xff,0xe2,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0xd4,0xff,0xf1,0x70,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x70,0xf1,0xff,0xd4,0x28,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x06,0xa2,0xff,0xf8,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x35,0x3a,0x07,0x00,0x70,0xf8,0xff,0xa2,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x46,0xf3,0xff,0x9f,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x23,0x6b,0xbc,0xef,0xf3,0x7f,0x01,0x06,0x9f,0xff,0xf4,0x47,0x00,0x00,0x00,
    0x00,0x00,0x03,0xa1,0xff,0xe5,0x2e,0x00,0x00,0x00,0x00,0x00,0x0f,0x48,0x9a,0xdf,0xff,0xff,0xff,0xff,0xcf,0x10,0x00,0x2e,0xe5,0xff,0xa2,0x03,0x00,0x00,0x00,0x00,0x20,0xde,0xff,0x9d,0x01,0x00,0x00,0x03,0x2a,0x75,0xc5,0xf6,0xff,0xff,0xf8,0xde,0xfb,0xff,0xac,0x05,0x00,0x01,0x9d,0xff,0xdf,0x20,0x00,0x00,
    0x00,0x00,0x49,0xf9,0xfd,0x59,0x00,0x03,0x45,0xa4,0xe6,0xff,0xff,0xff,0xe5,0xa4,0x4d,0x74,0xfd,0xfc,0x5b,0x00,0x00,0x00,0x58,0xfd,0xf9,0x49,0x00,0x00,0x00,0x00,0x6a,0xff,0xee,0x31,0x00,0x48,0xed,0xff,0xff,0xf2,0xc2,0x74,0x2a,0x03,0x04,0xb1,0xff,0xd5,0x1a,0x00,0x00,0x00,0x31,0xee,0xff,0x6b,0x00,0x00,
    0x00,0x00,0x7c,0xff,0xe3,0x21,0x00,0x77,0xff,0xff,0xff,0xb9,0x3b,0x00,0x00,0x00,0x36,0xed,0xff,0x8a,0x00,0x00,0x00,0x00,0x21,0xe2,0xff,0x7c,0x00,0x00,0x00,0x00,0x7c,0xff,0xe3,0x21,0x00,0x33,0xd5,0xff,0xff,0xfd,0xe6,0x98,0x17,0x00,0x85,0xff,0xf0,0x3a,0x00,0x00,0x00,0x00,0x21,0xe2,0xff,0x7c,0x00,0x00,
    0x00,0x00,0x6a,0xff,0xee,0x31,0x00,0x00,0x23,0x74,0xc4,0xf5,0xff,0xff,0x75,0x14,0xd1,0xff,0xb8,0x09,0x00,0x00,0x00,0x00,0x31,0xee,0xff,0x6b,0x00,0x00,0x00,0x00,0x49,0xf9,0xfd,0x59,0x00,0x00,0x00,0x00,0x0f,0x49,0xd1,0xff,0xc5,0x68,0xf9,0xfe,0x65,0x00,0x00,0x00,0x00,0x00,0x58,0xfd,0xf9,0x49,0x00,0x00,
    0x00,0x00,0x20,0xdf,0xff,0x9d,0x01,0x00,0x00,0x00,0x00,0x00,0x70,0xff,0xf6,0xe1,0xff,0xdc,0x20,0x00,0x00,0x00,0x00,0x01,0x9d,0xff,0xdf,0x20,0x00,0x00,0x00,0x00,0x03,0xa2,0xff,0xe5,0x2e,0x00,0x00,0x00,0x00,0x00,0x27,0xe3,0xff,0xff,0xff,0x95,0x00,0x00,0x00,0x00,0x00,0x2e,0xe5,0xff,0xa2,0x03,0x00,0x00,
    0x00,0x00,0x00,0x47,0xf4,0xff,0x9f,0x07,0x00,0x00,0x00,0x00,0x02,0x9f,0xff,0xff,0xf4,0x42,0x00,0x00,0x00,0x00,0x07,0x9f,0xff,0xf4,0x47,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xa2,0xff,0xf8,0x70,0x00,0x00,0x00,0x00,0x00,0x35,0xd2,0xf0,0x94,0x08,0x00,0x00,0x00,0x00,0x6f,0xf8,0xff,0xa2,0x07,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x28,0xd4,0xff,0xf1,0x70,0x07,0x00,0x00,0x00,0x00,0x1d,0x31,0x0a,0x00,0x00,0x00,0x07,0x6f,0xf1,0xff,0xd5,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0xe2,0xff,0xf8,0x9f,0x2e,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x2e,0x9f,0xf8,0xff,0xe2,0x44,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x44,0xd4,0xff,0xff,0xe5,0x9d,0x58,0x31,0x21,0x21,0x31,0x58,0x9d,0xe5,0xff,0xff,0xd5,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0xa2,0xf4,0xff,0xff,0xfd,0xee,0xe3,0xe2,0xee,0xfd,0xff,0xff,0xf4,0xa2,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x47,0xa2,0xdf,0xf9,0xff,0xff,0xff,0xff,0xf9,0xdf,0xa2,0x47,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x20,0x49,0x6b,0x7c,0x7c,0x6b,0x49,0x20,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_image_dsc_t img_location_lock_image = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_RGB565A8,
  .header.flags = 0,
  .header.w = 30,
  .header.h = 30,
  .header.stride = 60,
  .data_size = sizeof(img_location_lock_image_map),
  .data = img_location_lock_image_map,
};

