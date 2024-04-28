/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:/Users/RobertThomitzek/Dropbox/Sourcen/ESP32/EVCC-Display/assets/UbuntuMono-B.ttf -o C:/Users/RobertThomitzek/Dropbox/Sourcen/ESP32/EVCC-Display/assets\ui_font_ubuntu16b.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_UBUNTU16B
#define UI_FONT_UBUNTU16B 1
#endif

#if UI_FONT_UBUNTU16B

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xf0, 0xf0,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xb0,

    /* U+0023 "#" */
    0x34, 0x4b, 0xff, 0xf6, 0xcd, 0xbf, 0xff, 0x48,
    0xb0,

    /* U+0024 "$" */
    0x30, 0xc7, 0xf0, 0xc3, 0xc7, 0x87, 0xe, 0x3f,
    0xcc, 0x30,

    /* U+0025 "%" */
    0x63, 0xf6, 0xfe, 0xfc, 0x78, 0x1e, 0x3f, 0x7f,
    0x6f, 0xc6,

    /* U+0026 "&" */
    0x38, 0xf9, 0xb3, 0x63, 0x8e, 0xf3, 0xe3, 0xfe,
    0xec,

    /* U+0027 "'" */
    0xff, 0xc0,

    /* U+0028 "(" */
    0x8, 0xcc, 0xc6, 0x63, 0x18, 0xc6, 0x38, 0xc3,
    0x1c, 0x20,

    /* U+0029 ")" */
    0x86, 0x18, 0x63, 0xc, 0x63, 0x18, 0xcc, 0x66,
    0x72, 0x0,

    /* U+002A "*" */
    0x32, 0xdf, 0xcc, 0x79, 0x20,

    /* U+002B "+" */
    0x30, 0x63, 0xff, 0xf3, 0x6, 0xc, 0x0,

    /* U+002C "," */
    0x77, 0x73, 0xe0,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0xc, 0x31, 0x86, 0x18, 0xe3, 0xc, 0x71, 0x86,
    0x18, 0xc3, 0x0,

    /* U+0030 "0" */
    0x79, 0xec, 0xff, 0xff, 0x3c, 0xf3, 0x79, 0xe0,

    /* U+0031 "1" */
    0x18, 0x71, 0xe0, 0xc1, 0x83, 0x6, 0xc, 0x7e,
    0xfc,

    /* U+0032 "2" */
    0x79, 0xfa, 0x30, 0x61, 0x86, 0x18, 0x60, 0xff,
    0xfc,

    /* U+0033 "3" */
    0x7b, 0xf0, 0xde, 0x78, 0x30, 0xc3, 0xff, 0xe0,

    /* U+0034 "4" */
    0xc, 0x38, 0xf1, 0x66, 0xd9, 0xbf, 0xff, 0xc,
    0x18,

    /* U+0035 "5" */
    0x7d, 0xf4, 0x10, 0x78, 0x70, 0xc3, 0xff, 0xe0,

    /* U+0036 "6" */
    0x1c, 0x79, 0x87, 0xef, 0xf8, 0xf1, 0xe3, 0x7c,
    0x70,

    /* U+0037 "7" */
    0xff, 0xf1, 0xc6, 0x30, 0xc3, 0x18, 0x61, 0x80,

    /* U+0038 "8" */
    0x7d, 0xff, 0x1e, 0x37, 0xcf, 0xb1, 0xe3, 0xfe,
    0xf8,

    /* U+0039 "9" */
    0x79, 0xfb, 0x1e, 0x3f, 0xef, 0xc3, 0x8e, 0x78,
    0xe0,

    /* U+003A ":" */
    0xff, 0x81, 0xff,

    /* U+003B ";" */
    0x77, 0x70, 0x7, 0x77, 0x3e,

    /* U+003C "<" */
    0x4, 0x3d, 0xe7, 0xf, 0x7, 0xc3, 0x0,

    /* U+003D "=" */
    0xff, 0xfc, 0x7, 0xff, 0xe0,

    /* U+003E ">" */
    0x41, 0xe0, 0xf0, 0x71, 0xff, 0x18, 0x0,

    /* U+003F "?" */
    0xfb, 0xf8, 0xc3, 0x18, 0xc7, 0x0, 0x71, 0xc0,

    /* U+0040 "@" */
    0x3c, 0xf9, 0x9e, 0x3d, 0xff, 0xfd, 0xfb, 0xf7,
    0xff, 0x7b, 0x7, 0xe7, 0xc0,

    /* U+0041 "A" */
    0x18, 0x3c, 0x3c, 0x3c, 0x24, 0x66, 0x7e, 0x7e,
    0xe6, 0xc3,

    /* U+0042 "B" */
    0xf9, 0xfb, 0x36, 0x6f, 0x9f, 0xb1, 0xe3, 0xff,
    0xf0,

    /* U+0043 "C" */
    0x3e, 0xff, 0x8e, 0xc, 0x18, 0x30, 0x70, 0x7e,
    0x7c,

    /* U+0044 "D" */
    0xf9, 0xfb, 0x3e, 0x3c, 0x78, 0xf1, 0xe7, 0xfd,
    0xf0,

    /* U+0045 "E" */
    0xfd, 0xfb, 0x6, 0xf, 0xdf, 0xb0, 0x60, 0xff,
    0xfc,

    /* U+0046 "F" */
    0xff, 0xfc, 0x30, 0xff, 0xfc, 0x30, 0xc3, 0x0,

    /* U+0047 "G" */
    0x3e, 0xff, 0x8e, 0xc, 0x18, 0xf1, 0xf3, 0x7e,
    0x7c,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1e, 0x3f, 0xff, 0xf1, 0xe3, 0xc7,
    0x8c,

    /* U+0049 "I" */
    0xff, 0xf3, 0xc, 0x30, 0xc3, 0xc, 0xff, 0xf0,

    /* U+004A "J" */
    0x7e, 0xfc, 0x18, 0x30, 0x60, 0xc1, 0xa3, 0x7e,
    0xf8,

    /* U+004B "K" */
    0xcf, 0x9b, 0x67, 0xcf, 0x1f, 0x36, 0x66, 0xcf,
    0x8c,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xff, 0xf0,

    /* U+004D "M" */
    0xcf, 0xdf, 0xbf, 0x7f, 0xfa, 0xf1, 0xe3, 0xc7,
    0x8c,

    /* U+004E "N" */
    0xc7, 0xcf, 0x9f, 0xbd, 0x7b, 0xf3, 0xe7, 0xc7,
    0x8c,

    /* U+004F "O" */
    0x38, 0xfb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0x7c,
    0x70,

    /* U+0050 "P" */
    0xf9, 0xff, 0x1e, 0x3c, 0x7f, 0xfe, 0x60, 0xc1,
    0x80,

    /* U+0051 "Q" */
    0x38, 0xfb, 0xbe, 0x3c, 0x78, 0xf1, 0xe3, 0xee,
    0xf8, 0xe0, 0xc0, 0xe0,

    /* U+0052 "R" */
    0xf9, 0xfb, 0x36, 0x6f, 0xdf, 0x36, 0x66, 0xcd,
    0x98,

    /* U+0053 "S" */
    0x7d, 0xfb, 0x6, 0x7, 0x3, 0x81, 0xc3, 0xfe,
    0xf8,

    /* U+0054 "T" */
    0xff, 0xfc, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x18,
    0x30,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xfe,
    0xf8,

    /* U+0056 "V" */
    0xc3, 0x66, 0x66, 0x66, 0x66, 0x24, 0x3c, 0x3c,
    0x3c, 0x18,

    /* U+0057 "W" */
    0xc7, 0x8f, 0x1e, 0x3d, 0x7f, 0xfb, 0xf7, 0xef,
    0xcc,

    /* U+0058 "X" */
    0x66, 0x66, 0x3c, 0x3c, 0x18, 0x3c, 0x3c, 0x66,
    0x66, 0xe7,

    /* U+0059 "Y" */
    0xc3, 0x66, 0x66, 0x34, 0x3c, 0x18, 0x18, 0x18,
    0x18, 0x18,

    /* U+005A "Z" */
    0xff, 0xfc, 0x30, 0xe1, 0x86, 0x18, 0x30, 0xff,
    0xfc,

    /* U+005B "[" */
    0xff, 0xf1, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8f,
    0xfc,

    /* U+005C "\\" */
    0xc3, 0x6, 0x18, 0x60, 0xc3, 0xc, 0x38, 0x61,
    0x86, 0xc, 0x30,

    /* U+005D "]" */
    0xff, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x3f,
    0xfc,

    /* U+005E "^" */
    0x18, 0x3c, 0x3c, 0x66, 0x66, 0x42,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0x67, 0x0,

    /* U+0061 "a" */
    0x79, 0xf0, 0xdf, 0xff, 0x3f, 0xdf,

    /* U+0062 "b" */
    0x1, 0x83, 0x6, 0xf, 0x9f, 0xb1, 0xe3, 0xc7,
    0x9f, 0xf7, 0xc0,

    /* U+0063 "c" */
    0x3e, 0xfb, 0x86, 0xc, 0x1c, 0x1f, 0x9f,

    /* U+0064 "d" */
    0x0, 0x30, 0xc3, 0x7f, 0xfc, 0xf3, 0xcf, 0x37,
    0xdf,

    /* U+0065 "e" */
    0x38, 0xfb, 0x1f, 0xff, 0xf8, 0x1f, 0x1f,

    /* U+0066 "f" */
    0x1e, 0x3e, 0x30, 0xfe, 0xfe, 0x30, 0x30, 0x30,
    0x30, 0x30, 0x30,

    /* U+0067 "g" */
    0x3d, 0xfc, 0xf3, 0xcf, 0x3f, 0xdf, 0xf, 0xff,
    0x80,

    /* U+0068 "h" */
    0x3, 0xc, 0x30, 0xfb, 0xfc, 0xf3, 0xcf, 0x3c,
    0xf3,

    /* U+0069 "i" */
    0x38, 0x38, 0x0, 0xf8, 0xf8, 0x18, 0x18, 0x18,
    0x18, 0x1f, 0xf,

    /* U+006A "j" */
    0x1c, 0x70, 0x3f, 0xfc, 0x30, 0xc3, 0xc, 0x30,
    0xe3, 0xff, 0xe0,

    /* U+006B "k" */
    0x41, 0x83, 0x6, 0xc, 0xdb, 0x34, 0x78, 0xf1,
    0xb3, 0x36, 0x70,

    /* U+006C "l" */
    0xf1, 0xe0, 0xc1, 0x83, 0x6, 0xc, 0x18, 0x30,
    0x7c, 0x78,

    /* U+006D "m" */
    0xfe, 0xff, 0xdb, 0xdb, 0xdb, 0xc3, 0xc3, 0xc3,

    /* U+006E "n" */
    0xfb, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3,

    /* U+006F "o" */
    0x38, 0xfb, 0x1e, 0x3c, 0x78, 0xdf, 0x1c,

    /* U+0070 "p" */
    0xf3, 0xec, 0xf3, 0xcf, 0x3f, 0xfe, 0xc3, 0xc,
    0x0,

    /* U+0071 "q" */
    0x3e, 0xff, 0x9e, 0x3c, 0x78, 0xdf, 0xbf, 0x6,
    0xc, 0x18,

    /* U+0072 "r" */
    0xff, 0xfc, 0x30, 0xc3, 0xc, 0x30,

    /* U+0073 "s" */
    0x7f, 0xfc, 0x38, 0x38, 0x3f, 0xfe,

    /* U+0074 "t" */
    0x30, 0x63, 0xff, 0xf3, 0x6, 0xc, 0x18, 0x3e,
    0x3c,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3f, 0xdf,

    /* U+0076 "v" */
    0xc3, 0x66, 0x66, 0x66, 0x3c, 0x3c, 0x38, 0x18,

    /* U+0077 "w" */
    0xc3, 0xc3, 0xdb, 0x5a, 0x5a, 0x7e, 0x66, 0x66,

    /* U+0078 "x" */
    0x66, 0x66, 0x3c, 0x18, 0x1c, 0x3c, 0x66, 0x66,

    /* U+0079 "y" */
    0x66, 0x66, 0x66, 0x36, 0x34, 0x3c, 0x1c, 0x18,
    0x18, 0x70, 0xf0,

    /* U+007A "z" */
    0xff, 0xf1, 0x8c, 0x71, 0x8f, 0xff,

    /* U+007B "{" */
    0x1c, 0xf3, 0xc, 0x30, 0xce, 0x38, 0x30, 0xc3,
    0xc, 0x3c, 0x70,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xf1, 0xf0, 0x60, 0xc1, 0x83, 0x3, 0x87, 0x18,
    0x30, 0x60, 0xcf, 0x9e, 0x0,

    /* U+007E "~" */
    0x73, 0x7e, 0xce
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 128, .box_w = 2, .box_h = 10, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 7, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 128, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 26, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 128, .box_w = 2, .box_h = 5, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 47, .adv_w = 128, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 57, .adv_w = 128, .box_w = 5, .box_h = 15, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 67, .adv_w = 128, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 72, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 79, .adv_w = 128, .box_w = 4, .box_h = 5, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 82, .adv_w = 128, .box_w = 4, .box_h = 2, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 83, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 128, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 96, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 128, .box_w = 3, .box_h = 8, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 128, .box_w = 4, .box_h = 10, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 190, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 197, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 202, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 209, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 128, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 230, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 284, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 128, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 384, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 459, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 128, .box_w = 5, .box_h = 14, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 477, .adv_w = 128, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 488, .adv_w = 128, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 497, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 503, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 505, .adv_w = 128, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 507, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 567, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 587, .adv_w = 128, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 598, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 609, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 619, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 627, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 633, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 640, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 649, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 659, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 680, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 686, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 694, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 721, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 727, .adv_w = 128, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 738, .adv_w = 128, .box_w = 2, .box_h = 14, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 742, .adv_w = 128, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 755, .adv_w = 128, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
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
    .cmap_num = 1,
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
const lv_font_t ui_font_ubuntu16b = {
#else
lv_font_t ui_font_ubuntu16b = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_UBUNTU16B*/

