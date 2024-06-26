/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: --bpp 1 --size 20 --font C:/Users/RobertThomitzek/Dropbox/Sourcen/ESP32/EVCC-Display/assets/UbuntuMono-B.ttf -o C:/Users/RobertThomitzek/Dropbox/Sourcen/ESP32/EVCC-Display/assets\ui_font_ubuntu20b.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_UBUNTU20B
#define UI_FONT_UBUNTU20B 1
#endif

#if UI_FONT_UBUNTU20B

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0x3, 0xfe,

    /* U+0022 "\"" */
    0xef, 0xdf, 0xbf, 0x7e, 0xe8, 0x80,

    /* U+0023 "#" */
    0x1b, 0xd, 0x8c, 0xdf, 0xff, 0xf9, 0xb0, 0xd8,
    0x6c, 0xff, 0xff, 0xd9, 0x8d, 0x86, 0xc0,

    /* U+0024 "$" */
    0x18, 0xc, 0xf, 0xcf, 0xee, 0x17, 0x3, 0xe0,
    0xfc, 0x3f, 0x3, 0xc0, 0xf0, 0x7f, 0xf3, 0xf0,
    0x60, 0x30,

    /* U+0025 "%" */
    0x70, 0xfe, 0x6d, 0xbb, 0x6c, 0xfe, 0x1d, 0x80,
    0xf8, 0x7f, 0x1e, 0xcd, 0xb7, 0x6d, 0x9f, 0xc3,
    0x80,

    /* U+0026 "&" */
    0x3c, 0x3f, 0x19, 0x8c, 0xc6, 0xe1, 0xe0, 0xe6,
    0xfb, 0xcf, 0xe3, 0xb1, 0xcf, 0xf3, 0xd8,

    /* U+0027 "'" */
    0xff, 0xfe, 0x80,

    /* U+0028 "(" */
    0x0, 0x1c, 0x71, 0xc7, 0xe, 0x38, 0x70, 0xe1,
    0xc3, 0x87, 0xe, 0xe, 0x1c, 0x1c, 0x1c, 0x1c,
    0x0,

    /* U+0029 ")" */
    0x1, 0xc1, 0xc1, 0xc1, 0xc3, 0x83, 0x87, 0xe,
    0x1c, 0x38, 0x70, 0xe3, 0x87, 0x1c, 0x71, 0xc0,
    0x0,

    /* U+002A "*" */
    0x1c, 0xe, 0x3a, 0xff, 0xf1, 0xc1, 0xb1, 0xdc,
    0x4,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,
    0x18,

    /* U+002C "," */
    0x77, 0x73, 0x2e, 0x80,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x7, 0x7, 0x6, 0xe, 0xe, 0xc, 0x1c, 0x1c,
    0x18, 0x38, 0x38, 0x30, 0x70, 0x70, 0x60, 0xe0,
    0xe0,

    /* U+0030 "0" */
    0x3c, 0x7e, 0x66, 0xc3, 0xc3, 0xdb, 0xdb, 0xdb,
    0xc3, 0xc3, 0x66, 0x7e, 0x3c,

    /* U+0031 "1" */
    0xc, 0x1e, 0x1f, 0xf, 0x85, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0xf, 0xf7, 0xf8,

    /* U+0032 "2" */
    0x7c, 0xfe, 0xc7, 0x7, 0x7, 0xe, 0x1e, 0x3c,
    0x78, 0x70, 0xe0, 0xff, 0xff,

    /* U+0033 "3" */
    0x7c, 0xfe, 0x7, 0x7, 0xf, 0x3c, 0x3e, 0xf,
    0x7, 0x7, 0x8f, 0xfe, 0xfc,

    /* U+0034 "4" */
    0x7, 0x7, 0x87, 0xc3, 0xe3, 0x73, 0xb9, 0x9d,
    0xce, 0xff, 0xff, 0xc1, 0xc0, 0xe0, 0x70,

    /* U+0035 "5" */
    0x7e, 0x7e, 0x60, 0x60, 0x60, 0x7c, 0x7e, 0xf,
    0x7, 0x7, 0xf, 0xfe, 0xfc,

    /* U+0036 "6" */
    0xe, 0x3e, 0x78, 0x70, 0xe0, 0xfc, 0xfe, 0xe7,
    0xe7, 0xe7, 0xe7, 0x7e, 0x3c,

    /* U+0037 "7" */
    0xff, 0xff, 0x6, 0xe, 0xc, 0x1c, 0x18, 0x38,
    0x38, 0x30, 0x70, 0x70, 0x70,

    /* U+0038 "8" */
    0x3c, 0x3f, 0x39, 0xdc, 0xee, 0x73, 0xf0, 0xf8,
    0xde, 0xe3, 0xf1, 0xf8, 0xef, 0xe3, 0xe0,

    /* U+0039 "9" */
    0x3e, 0x3f, 0xb9, 0xdc, 0x7e, 0x3f, 0x1d, 0xfe,
    0x7f, 0x7, 0x83, 0x87, 0x8f, 0x87, 0x0,

    /* U+003A ":" */
    0xff, 0x80, 0x7, 0xfc,

    /* U+003B ";" */
    0x77, 0x70, 0x2, 0x77, 0x73, 0xec,

    /* U+003C "<" */
    0x1, 0x7, 0x3f, 0xfc, 0xe0, 0xf8, 0x3e, 0xf,
    0x3,

    /* U+003D "=" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+003E ">" */
    0x80, 0xe0, 0xfc, 0x3f, 0x7, 0x1f, 0x7c, 0xf0,
    0xc0,

    /* U+003F "?" */
    0x7c, 0x7e, 0x47, 0x7, 0xf, 0x1e, 0x1c, 0x38,
    0x0, 0x0, 0x38, 0x38, 0x38,

    /* U+0040 "@" */
    0x1e, 0x1f, 0x9c, 0xec, 0x3c, 0xfe, 0x7f, 0x67,
    0xb3, 0xd9, 0xec, 0xf6, 0x79, 0xf6, 0x7b, 0x80,
    0xfe, 0x3f,

    /* U+0041 "A" */
    0xe, 0x7, 0x81, 0xe0, 0x78, 0x3f, 0xc, 0xc3,
    0x30, 0xcc, 0x7f, 0x9f, 0xe6, 0x19, 0x86, 0xe1,
    0xc0,

    /* U+0042 "B" */
    0xfc, 0x7f, 0xb9, 0xdc, 0xee, 0x77, 0xf3, 0xfd,
    0xc7, 0xe3, 0xf1, 0xf9, 0xff, 0xef, 0xe0,

    /* U+0043 "C" */
    0x1f, 0x9f, 0xdc, 0x2e, 0xe, 0x7, 0x3, 0x81,
    0xc0, 0xe0, 0x78, 0x1c, 0x27, 0xf1, 0xf8,

    /* U+0044 "D" */
    0xfc, 0x7f, 0x39, 0xdc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf9, 0xdf, 0xcf, 0xc0,

    /* U+0045 "E" */
    0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xfe, 0xfe, 0xe0,
    0xe0, 0xe0, 0xe0, 0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xfe, 0xfe, 0xe0,
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0,

    /* U+0047 "G" */
    0x1f, 0x1f, 0xdc, 0x1e, 0xe, 0x7, 0x3, 0x8f,
    0xc7, 0xe3, 0xf1, 0xdc, 0xe7, 0xf1, 0xf8,

    /* U+0048 "H" */
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xff, 0xff, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7,

    /* U+0049 "I" */
    0xff, 0xff, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38,
    0x38, 0x38, 0x38, 0xff, 0xff,

    /* U+004A "J" */
    0x7f, 0x7f, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7,
    0x7, 0x7, 0x8f, 0xfe, 0x7c,

    /* U+004B "K" */
    0xe3, 0xf3, 0xb9, 0xdd, 0xce, 0xc7, 0xe3, 0xf1,
    0xf8, 0xee, 0x73, 0xb8, 0xdc, 0x7e, 0x38,

    /* U+004C "L" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0xe0, 0xe0, 0xff, 0xff,

    /* U+004D "M" */
    0xe3, 0x71, 0xf8, 0xfe, 0xff, 0x7e, 0xaf, 0x77,
    0xbb, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x18,

    /* U+004E "N" */
    0xc3, 0xe3, 0xe3, 0xf3, 0xf3, 0xdb, 0xdb, 0xcf,
    0xcf, 0xc7, 0xc7, 0xc3, 0xc3,

    /* U+004F "O" */
    0x3e, 0x3f, 0x9d, 0xdc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xdd, 0xcf, 0xe3, 0xe0,

    /* U+0050 "P" */
    0xfe, 0x7f, 0xb9, 0xfc, 0x7e, 0x3f, 0x1f, 0x9f,
    0xfe, 0xfe, 0x70, 0x38, 0x1c, 0xe, 0x0,

    /* U+0051 "Q" */
    0x3e, 0x3f, 0x9d, 0xdc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xdd, 0xcf, 0xe3, 0xe0, 0xe0,
    0x3c, 0xf,

    /* U+0052 "R" */
    0xfc, 0x7f, 0x39, 0xdc, 0xee, 0x77, 0x3b, 0xf9,
    0xf8, 0xec, 0x73, 0x39, 0xdc, 0xee, 0x38,

    /* U+0053 "S" */
    0x3e, 0x7e, 0xe2, 0xe0, 0xf0, 0xf8, 0x7e, 0x1f,
    0x7, 0x7, 0x87, 0xfe, 0x7c,

    /* U+0054 "T" */
    0xff, 0xff, 0xc7, 0x3, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0,

    /* U+0055 "U" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xef, 0xe3, 0xe0,

    /* U+0056 "V" */
    0xe1, 0xd8, 0x66, 0x19, 0x86, 0x73, 0x8c, 0xe3,
    0x30, 0xcc, 0x3f, 0x7, 0x81, 0xe0, 0x78, 0xc,
    0x0,

    /* U+0057 "W" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xef, 0x77,
    0xab, 0xf7, 0xfb, 0xf8, 0xfc, 0x7e, 0x38,

    /* U+0058 "X" */
    0x61, 0x9c, 0xe3, 0x30, 0xfc, 0x1e, 0x7, 0x81,
    0xe0, 0x78, 0x3f, 0xc, 0xc7, 0x39, 0xc6, 0xe1,
    0xc0,

    /* U+0059 "Y" */
    0x60, 0xce, 0x39, 0xc7, 0x18, 0xc3, 0xb8, 0x36,
    0x7, 0xc0, 0x70, 0xe, 0x1, 0xc0, 0x38, 0x7,
    0x0, 0xe0,

    /* U+005A "Z" */
    0xff, 0xff, 0x7, 0xe, 0x1c, 0x1c, 0x38, 0x38,
    0x70, 0x60, 0xe0, 0xff, 0xff,

    /* U+005B "[" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0x8e, 0x3f, 0xfc,

    /* U+005C "\\" */
    0xe0, 0xe0, 0x60, 0x70, 0x70, 0x30, 0x38, 0x38,
    0x18, 0x1c, 0x1c, 0xc, 0xe, 0xe, 0x6, 0x7,
    0x7,

    /* U+005D "]" */
    0xff, 0xf1, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x71, 0xff, 0xfc,

    /* U+005E "^" */
    0xc, 0x7, 0x81, 0xf0, 0xfc, 0x73, 0x9c, 0xee,
    0x1c, 0x80,

    /* U+005F "_" */
    0xff, 0xff, 0xf0,

    /* U+0060 "`" */
    0x4f, 0x30,

    /* U+0061 "a" */
    0x7c, 0x7e, 0x7, 0x7, 0x7f, 0xff, 0xe7, 0xe7,
    0xff, 0x7f,

    /* U+0062 "b" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xfc, 0xfe, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xfe, 0xfc,

    /* U+0063 "c" */
    0x1f, 0xbf, 0xdc, 0x1c, 0xe, 0x7, 0x3, 0x80,
    0xe0, 0x7f, 0x8f, 0xc0,

    /* U+0064 "d" */
    0x7, 0x7, 0x7, 0x7, 0x3f, 0x7f, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0x7f, 0x3f,

    /* U+0065 "e" */
    0x3c, 0x3f, 0x9c, 0xdc, 0x6f, 0xf7, 0xff, 0x81,
    0xe0, 0x7f, 0x1f, 0x80,

    /* U+0066 "f" */
    0xf, 0x1f, 0xce, 0x7, 0xf, 0xf7, 0xf8, 0xe0,
    0x70, 0x38, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0,

    /* U+0067 "g" */
    0x3f, 0x7f, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x7f,
    0x7f, 0x7, 0x7, 0xfe, 0x7c,

    /* U+0068 "h" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xfc, 0xfe, 0xe7, 0xe7,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,

    /* U+0069 "i" */
    0x38, 0x1c, 0xe, 0x0, 0xf, 0x87, 0xc0, 0xe0,
    0x70, 0x38, 0x1c, 0xe, 0x7, 0x1, 0xf8, 0x78,

    /* U+006A "j" */
    0xe, 0xe, 0xe, 0x0, 0x7f, 0x7f, 0x7, 0x7,
    0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x47, 0x7e,
    0x7c,

    /* U+006B "k" */
    0x20, 0x70, 0x38, 0x1c, 0xe, 0x7, 0x3b, 0x99,
    0xdc, 0xfc, 0x7c, 0x3f, 0x1d, 0xce, 0x67, 0x3b,
    0x8e,

    /* U+006C "l" */
    0xfc, 0x3f, 0x1, 0xc0, 0x70, 0x1c, 0x7, 0x1,
    0xc0, 0x70, 0x1c, 0x7, 0x1, 0xc0, 0x70, 0xf,
    0x83, 0xe0,

    /* U+006D "m" */
    0xfe, 0xff, 0xdb, 0xdb, 0xdb, 0xdb, 0xc3, 0xc3,
    0xc3, 0xc3,

    /* U+006E "n" */
    0xfc, 0xfe, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7,

    /* U+006F "o" */
    0x3e, 0x3f, 0x9d, 0xdc, 0x7e, 0x3f, 0x1f, 0x8e,
    0xee, 0x7f, 0x1f, 0x0,

    /* U+0070 "p" */
    0xfc, 0xfe, 0xef, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xfe, 0xfc, 0xe0, 0xe0, 0xe0,

    /* U+0071 "q" */
    0x3f, 0x7f, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0x7f, 0x3f, 0x7, 0x7, 0x7,

    /* U+0072 "r" */
    0x7f, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0xe0,

    /* U+0073 "s" */
    0x3e, 0xfe, 0xe0, 0xe0, 0xfc, 0x3e, 0xf, 0x87,
    0xff, 0xfc,

    /* U+0074 "t" */
    0x38, 0x1c, 0xe, 0x1f, 0xff, 0xf9, 0xc0, 0xe0,
    0x70, 0x38, 0x1c, 0xe, 0x7, 0xf1, 0xf8,

    /* U+0075 "u" */
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0x7f, 0x3f,

    /* U+0076 "v" */
    0xe1, 0xd8, 0x67, 0x39, 0xce, 0x33, 0xd, 0xc3,
    0xe0, 0x78, 0x1e, 0x3, 0x0,

    /* U+0077 "w" */
    0xc1, 0xe0, 0xf3, 0x7b, 0xbd, 0xde, 0xed, 0x54,
    0xee, 0x77, 0x31, 0x80,

    /* U+0078 "x" */
    0x61, 0x9c, 0xe3, 0xf0, 0x78, 0x1e, 0x7, 0x81,
    0xf0, 0xcc, 0x73, 0x98, 0x60,

    /* U+0079 "y" */
    0x61, 0xb8, 0xdc, 0xe6, 0x63, 0xb1, 0xd8, 0x7c,
    0x3c, 0xe, 0x6, 0x7, 0xf, 0xf, 0x0,

    /* U+007A "z" */
    0xff, 0xfc, 0x30, 0xe3, 0x86, 0x1c, 0x30, 0xff,
    0xfc,

    /* U+007B "{" */
    0x1f, 0x3f, 0x38, 0x38, 0x38, 0x38, 0x38, 0xf8,
    0xe0, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x3f,
    0x1f,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,

    /* U+007D "}" */
    0xf8, 0xfc, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1f,
    0x7, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0xfc,
    0xf8,

    /* U+007E "~" */
    0x38, 0x9f, 0x76, 0xf9, 0xc
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 160, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 160, .box_w = 3, .box_h = 13, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 160, .box_w = 7, .box_h = 6, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 12, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 160, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 45, .adv_w = 160, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 160, .box_w = 3, .box_h = 6, .ofs_x = 4, .ofs_y = 8},
    {.bitmap_index = 80, .adv_w = 160, .box_w = 7, .box_h = 19, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 97, .adv_w = 160, .box_w = 7, .box_h = 19, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 114, .adv_w = 160, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 123, .adv_w = 160, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 132, .adv_w = 160, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 136, .adv_w = 160, .box_w = 5, .box_h = 2, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 138, .adv_w = 160, .box_w = 3, .box_h = 3, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 160, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 157, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 160, .box_w = 3, .box_h = 10, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 160, .box_w = 4, .box_h = 12, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 305, .adv_w = 160, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 314, .adv_w = 160, .box_w = 8, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 320, .adv_w = 160, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 329, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 160, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 360, .adv_w = 160, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 407, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 422, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 517, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 545, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 588, .adv_w = 160, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 606, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 649, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 160, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 160, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 713, .adv_w = 160, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 731, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 160, .box_w = 6, .box_h = 17, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 757, .adv_w = 160, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 774, .adv_w = 160, .box_w = 6, .box_h = 17, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 787, .adv_w = 160, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 797, .adv_w = 160, .box_w = 10, .box_h = 2, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 800, .adv_w = 160, .box_w = 4, .box_h = 3, .ofs_x = 3, .ofs_y = 11},
    {.bitmap_index = 802, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 160, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 826, .adv_w = 160, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 838, .adv_w = 160, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 852, .adv_w = 160, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 864, .adv_w = 160, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 880, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 893, .adv_w = 160, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 907, .adv_w = 160, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 923, .adv_w = 160, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 940, .adv_w = 160, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 957, .adv_w = 160, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 975, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 985, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 160, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1007, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1020, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1033, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1043, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1053, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1068, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1078, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1091, .adv_w = 160, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1103, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1116, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1131, .adv_w = 160, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1140, .adv_w = 160, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1157, .adv_w = 160, .box_w = 3, .box_h = 17, .ofs_x = 4, .ofs_y = -3},
    {.bitmap_index = 1164, .adv_w = 160, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1181, .adv_w = 160, .box_w = 10, .box_h = 4, .ofs_x = 0, .ofs_y = 4}
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
const lv_font_t ui_font_ubuntu20b = {
#else
lv_font_t ui_font_ubuntu20b = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 19,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_UBUNTU20B*/

