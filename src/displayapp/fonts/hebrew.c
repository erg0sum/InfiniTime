/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef HEBREW
#define HEBREW 1
#endif

#if HEBREW

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+058A "֊" */
    0x7f, 0xf0,

    /* U+05B0 "ְ" */
    0x40, 0x60,

    /* U+05B1 "ֱ" */
    0xb2, 0x0, 0x2, 0x30,

    /* U+05B2 "ֲ" */
    0xf4, 0x0, 0x3,

    /* U+05B3 "ֳ" */
    0xf5, 0x4, 0x33,

    /* U+05B4 "ִ" */
    0x80,

    /* U+05B5 "ֵ" */
    0xd0,

    /* U+05B6 "ֶ" */
    0xb0, 0xc,

    /* U+05B7 "ַ" */
    0xfc,

    /* U+05B8 "ָ" */
    0x7c, 0x20, 0xc0,

    /* U+05B9 "ֹ" */
    0x80,

    /* U+05BA "ֺ" */
    0x80,

    /* U+05BB "ֻ" */
    0xc0, 0xc0, 0x1,

    /* U+05BC "ּ" */
    0x80,

    /* U+05BD "ֽ" */
    0x49, 0x60,

    /* U+05BE "־" */
    0xf8,

    /* U+05BF "ֿ" */
    0xfc,

    /* U+05C0 "׀" */
    0x33, 0x33, 0x26, 0x66, 0x64, 0xcc, 0xcc, 0xc0,

    /* U+05C1 "ׁ" */
    0xc0,

    /* U+05C2 "ׂ" */
    0xc0,

    /* U+05C3 "׃" */
    0x33, 0x0, 0x0, 0x0, 0xc, 0xc0,

    /* U+05C6 "׆" */
    0xf, 0x10, 0x30, 0x60, 0x60, 0x60, 0x60, 0x40,
    0xc0, 0xc0, 0xfc,

    /* U+05C7 "ׇ" */
    0xfc, 0x86, 0x18,

    /* U+05D0 "א" */
    0x30, 0x31, 0x82, 0x18, 0x60, 0xc6, 0x1c, 0x43,
    0x6c, 0x67, 0x84, 0x30, 0xc3, 0xc, 0x18, 0xc1,
    0x80,

    /* U+05D1 "ב" */
    0x3f, 0x0, 0x60, 0x8, 0x2, 0x1, 0x80, 0x60,
    0x18, 0x6, 0x1, 0x80, 0x4f, 0xfc,

    /* U+05D2 "ג" */
    0x38, 0x18, 0x18, 0x30, 0x41, 0x83, 0x6, 0x1c,
    0x3b, 0x98,

    /* U+05D3 "ד" */
    0xff, 0x83, 0x1, 0x80, 0xc0, 0x60, 0x60, 0x30,
    0x18, 0xc, 0x6, 0x2, 0x0,

    /* U+05D4 "ה" */
    0x3f, 0x80, 0x18, 0x1, 0x0, 0x30, 0x4, 0xc1,
    0x98, 0x33, 0x6, 0xc0, 0xd8, 0x1b, 0x2, 0x0,

    /* U+05D5 "ו" */
    0x32, 0x66, 0x66, 0x6c, 0xcc, 0xc0,

    /* U+05D6 "ז" */
    0x7c, 0x43, 0x18, 0x61, 0x86, 0x10, 0xc3, 0xc,
    0x0,

    /* U+05D7 "ח" */
    0x3f, 0x84, 0x19, 0x81, 0xb0, 0x36, 0x4, 0xc1,
    0x90, 0x36, 0x6, 0xc0, 0xd8, 0x1b, 0x2, 0x0,

    /* U+05D8 "ט" */
    0x33, 0xc4, 0xd, 0x81, 0xb0, 0x36, 0x6, 0xc0,
    0xd8, 0x1a, 0x2, 0x60, 0xcc, 0x30, 0xf8, 0x0,

    /* U+05D9 "י" */
    0x6d, 0xb5, 0xa0,

    /* U+05DA "ך" */
    0xfc, 0x1c, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x4,
    0x18, 0x30, 0x60, 0xc1, 0x6, 0x0,

    /* U+05DB "כ" */
    0x3f, 0x0, 0x60, 0x8, 0x3, 0x0, 0xc0, 0x30,
    0x18, 0x6, 0x1, 0x1, 0x8f, 0xc0,

    /* U+05DC "ל" */
    0x60, 0x60, 0x30, 0x18, 0xf, 0xf8, 0x18, 0xc,
    0xc, 0x6, 0x6, 0x6, 0x3, 0x3, 0x1, 0x81,
    0x80,

    /* U+05DD "ם" */
    0x3f, 0x84, 0x19, 0x81, 0xb0, 0x36, 0x6, 0xc0,
    0xd8, 0x16, 0x6, 0xc0, 0xd8, 0x1b, 0xff, 0x0,

    /* U+05DE "מ" */
    0x33, 0xe1, 0xb1, 0x87, 0xc, 0x30, 0x61, 0x83,
    0x8, 0x18, 0xc0, 0xc6, 0x4, 0x60, 0x63, 0x3,
    0x19, 0xf8,

    /* U+05DF "ן" */
    0x18, 0x8c, 0x63, 0x18, 0xcc, 0x63, 0x18, 0xcc,
    0x63, 0x0,

    /* U+05E0 "נ" */
    0x3c, 0x1c, 0x18, 0x30, 0x41, 0x83, 0x6, 0xc,
    0x13, 0xe0,

    /* U+05E1 "ס" */
    0x3f, 0xc2, 0xe, 0x60, 0x66, 0x6, 0x60, 0x66,
    0x6, 0x60, 0x66, 0xc, 0x60, 0xc6, 0x18, 0x3e,
    0x0,

    /* U+05E2 "ע" */
    0x30, 0x33, 0x3, 0x30, 0x63, 0x6, 0x30, 0x61,
    0x6, 0x10, 0xc1, 0x8c, 0x19, 0x81, 0xf0, 0x3c,
    0xe, 0x0, 0x0, 0x0,

    /* U+05E3 "ף" */
    0x7f, 0x10, 0x6c, 0x1b, 0x6, 0xc1, 0x9c, 0x60,
    0x18, 0x6, 0x1, 0x0, 0xc0, 0x30, 0xc, 0x3,
    0x0, 0x80, 0x60,

    /* U+05E4 "פ" */
    0x3f, 0x84, 0x39, 0x83, 0x30, 0x36, 0x6, 0x70,
    0x80, 0x30, 0x6, 0x1, 0x80, 0x63, 0xf8, 0x0,

    /* U+05E5 "ץ" */
    0xc1, 0xb0, 0xd8, 0x46, 0x63, 0x61, 0xe0, 0xc0,
    0x60, 0x30, 0x18, 0x8, 0xc, 0x6, 0x3, 0x1,
    0x80,

    /* U+05E6 "צ" */
    0x30, 0x63, 0xc, 0x61, 0x86, 0x20, 0xcc, 0xf,
    0x1, 0xc0, 0x38, 0x3, 0x0, 0x73, 0xfe, 0x0,

    /* U+05E7 "ק" */
    0x1f, 0xfc, 0x0, 0x60, 0x1, 0x80, 0xc, 0x10,
    0x60, 0xc1, 0x83, 0xc, 0xc, 0x30, 0x61, 0x81,
    0x8c, 0x6, 0x30, 0x18, 0x0, 0x60, 0x1, 0x0,
    0xc, 0x0, 0x0,

    /* U+05E8 "ר" */
    0xfc, 0x6, 0x3, 0x3, 0x3, 0x3, 0x6, 0x6,
    0x6, 0x6, 0x6,

    /* U+05E9 "ש" */
    0x63, 0x1b, 0x18, 0xd8, 0x86, 0xcc, 0x26, 0xc3,
    0x3c, 0x11, 0x1, 0x88, 0x8, 0xc0, 0x86, 0x18,
    0x3f, 0x0,

    /* U+05EA "ת" */
    0x1f, 0xe0, 0x61, 0x83, 0x6, 0x18, 0x30, 0x81,
    0x8c, 0x8, 0x60, 0xc3, 0x6, 0x10, 0x31, 0x81,
    0xb8, 0x8
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 115, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 2, .adv_w = 0, .box_w = 3, .box_h = 4, .ofs_x = 5, .ofs_y = -4},
    {.bitmap_index = 4, .adv_w = 0, .box_w = 7, .box_h = 4, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 8, .adv_w = 0, .box_w = 6, .box_h = 4, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 11, .adv_w = 0, .box_w = 6, .box_h = 4, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 14, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 6, .ofs_y = -3},
    {.bitmap_index = 15, .adv_w = 0, .box_w = 5, .box_h = 1, .ofs_x = 4, .ofs_y = -3},
    {.bitmap_index = 16, .adv_w = 0, .box_w = 4, .box_h = 4, .ofs_x = 5, .ofs_y = -4},
    {.bitmap_index = 18, .adv_w = 0, .box_w = 6, .box_h = 1, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 19, .adv_w = 0, .box_w = 7, .box_h = 3, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 22, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 13},
    {.bitmap_index = 23, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 13},
    {.bitmap_index = 24, .adv_w = 0, .box_w = 6, .box_h = 4, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 27, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 6, .ofs_y = 5},
    {.bitmap_index = 28, .adv_w = 0, .box_w = 3, .box_h = 4, .ofs_x = 5, .ofs_y = -4},
    {.bitmap_index = 30, .adv_w = 115, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 31, .adv_w = 0, .box_w = 6, .box_h = 1, .ofs_x = 3, .ofs_y = 13},
    {.bitmap_index = 32, .adv_w = 94, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 40, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = 14, .ofs_y = 13},
    {.bitmap_index = 41, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = 3, .ofs_y = 13},
    {.bitmap_index = 42, .adv_w = 94, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 146, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 0, .box_w = 6, .box_h = 4, .ofs_x = 4, .ofs_y = -5},
    {.bitmap_index = 62, .adv_w = 214, .box_w = 12, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 185, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 132, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 175, .box_w = 9, .box_h = 11, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 209, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 87, .box_w = 4, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 111, .box_w = 6, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 209, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 208, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 72, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 182, .adv_w = 172, .box_w = 7, .box_h = 15, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 196, .adv_w = 169, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 182, .box_w = 9, .box_h = 15, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 212, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 217, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 87, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 271, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 208, .box_w = 12, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 298, .adv_w = 200, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 318, .adv_w = 205, .box_w = 10, .box_h = 15, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 337, .adv_w = 200, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 173, .box_w = 9, .box_h = 15, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 370, .adv_w = 190, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 227, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 413, .adv_w = 181, .box_w = 8, .box_h = 11, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 227, .box_w = 13, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 210, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 1418, .range_length = 1, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1456, .range_length = 20, .glyph_id_start = 2,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1478, .range_length = 2, .glyph_id_start = 22,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1488, .range_length = 27, .glyph_id_start = 24,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 4,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t hebrew = {
#else
lv_font_t hebrew = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 20,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if HEBREW*/

