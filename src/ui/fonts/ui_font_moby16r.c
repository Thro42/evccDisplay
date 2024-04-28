/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:/Users/RobertThomitzek/Dropbox/Sourcen/ESP32/EVCC-Display/assets/Moby-Regular.otf -o C:/Users/RobertThomitzek/Dropbox/Sourcen/ESP32/EVCC-Display/assets\ui_font_moby16r.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_MOBY16R
#define UI_FONT_MOBY16R 1
#endif

#if UI_FONT_MOBY16R

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x6d, 0xb6, 0xd8, 0x1f, 0x80,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xb0,

    /* U+0023 "#" */
    0x31, 0x86, 0x33, 0xff, 0xff, 0xf3, 0x18, 0x63,
    0xc, 0x67, 0xff, 0xff, 0xe6, 0x30, 0xc6, 0x0,

    /* U+0024 "$" */
    0xc, 0x1, 0x81, 0xff, 0xbf, 0xfc, 0x1, 0x80,
    0x30, 0x3, 0xfc, 0x3f, 0xe0, 0xc, 0x1, 0xff,
    0xef, 0xf8, 0x18, 0x3, 0x0,

    /* U+0025 "%" */
    0x3c, 0xef, 0xff, 0x1e, 0x63, 0x8c, 0x60, 0xff,
    0x8f, 0xf8, 0x63, 0x1c, 0x7f, 0xff, 0x9f, 0x0,

    /* U+0026 "&" */
    0x7e, 0x1f, 0xe3, 0xc, 0x61, 0x8f, 0xff, 0xff,
    0xf0, 0x36, 0x6, 0xc0, 0xdf, 0xf1, 0xfc, 0x0,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x7f, 0xcc, 0xcc, 0xcc, 0xcf, 0x70,

    /* U+0029 ")" */
    0xef, 0x33, 0x33, 0x33, 0x3f, 0xe0,

    /* U+002A "*" */
    0x38, 0xbb, 0xf9, 0xcf, 0xeb, 0x8e, 0x0,

    /* U+002B "+" */
    0x18, 0x33, 0xff, 0xf1, 0x83, 0x6, 0x0,

    /* U+002C "," */
    0xfd, 0xb0,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xfc,

    /* U+002F "/" */
    0x31, 0x8c, 0x67, 0x31, 0x8c, 0xe6, 0x30,

    /* U+0030 "0" */
    0x7f, 0x9f, 0xfb, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x7f, 0xf9, 0xff, 0x0,

    /* U+0031 "1" */
    0x3c, 0x7, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1f, 0xff, 0xff, 0x80,

    /* U+0032 "2" */
    0x7f, 0x1f, 0xe0, 0xc, 0x3, 0x0, 0xdf, 0xef,
    0xfb, 0x0, 0xc0, 0x3f, 0xff, 0xfc,

    /* U+0033 "3" */
    0x7f, 0xf, 0xf1, 0x83, 0x0, 0x60, 0xc, 0x1f,
    0x83, 0xf0, 0x3, 0x0, 0x7f, 0xff, 0xff, 0x0,

    /* U+0034 "4" */
    0xc0, 0x18, 0x3, 0x6, 0x60, 0xcc, 0x19, 0x83,
    0x30, 0x67, 0xff, 0x7f, 0xe0, 0x30, 0x6, 0x0,

    /* U+0035 "5" */
    0xff, 0xff, 0xfc, 0x3, 0x0, 0xc0, 0x1f, 0xe7,
    0xfc, 0x3, 0x0, 0xdf, 0xf7, 0xf8,

    /* U+0036 "6" */
    0x3f, 0xdf, 0xfb, 0x80, 0x70, 0xf, 0xfd, 0xff,
    0xf0, 0x1e, 0x3, 0xc0, 0x7f, 0xfd, 0xff, 0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0x3, 0x80, 0xe0, 0x38, 0x6,
    0x1, 0x80, 0x70, 0xc, 0x1, 0x80, 0x30, 0x0,

    /* U+0038 "8" */
    0x1f, 0x87, 0xf9, 0x81, 0xb0, 0x36, 0x6, 0xff,
    0x9f, 0xfe, 0x3, 0xc0, 0x7f, 0xfd, 0xff, 0x0,

    /* U+0039 "9" */
    0x7f, 0x9f, 0xfb, 0x1, 0xe0, 0x3c, 0x7, 0xff,
    0xdf, 0xf8, 0x7, 0x0, 0xe7, 0xf8, 0xfe, 0x0,

    /* U+003A ":" */
    0xfc, 0xf, 0xc0,

    /* U+003B ";" */
    0xfc, 0xf, 0xdb,

    /* U+003C "<" */
    0x3, 0xf, 0x7c, 0xf0, 0xf0, 0x7c, 0xf, 0x3,

    /* U+003D "=" */
    0xff, 0xfc, 0x7, 0xff, 0xe0,

    /* U+003E ">" */
    0xc0, 0xf0, 0x7c, 0xf, 0xf, 0x7c, 0xf0, 0xc0,

    /* U+003F "?" */
    0xff, 0x9f, 0xfb, 0x1, 0x80, 0x30, 0x6, 0x1f,
    0xc3, 0xf0, 0x0, 0x0, 0x1, 0xc0, 0x38, 0x0,

    /* U+0040 "@" */
    0x7f, 0xef, 0xff, 0xc0, 0x3c, 0x3, 0xc7, 0xfc,
    0xff, 0xcc, 0x3c, 0xc3, 0xcc, 0x3c, 0xff, 0xc7,
    0xec, 0x0, 0xc0, 0xf, 0xff, 0x7f, 0xf0,

    /* U+0041 "A" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7c, 0x7, 0x80,
    0xf0, 0x1f, 0xff, 0xff, 0xf8, 0xf, 0x1, 0x80,

    /* U+0042 "B" */
    0xff, 0x3f, 0xec, 0xf, 0x3, 0xc0, 0xff, 0xef,
    0xff, 0x3, 0xc0, 0xff, 0xff, 0xf8,

    /* U+0043 "C" */
    0x1f, 0xe7, 0xfd, 0xc1, 0xf0, 0xc, 0x1, 0x80,
    0x30, 0x7, 0x0, 0x70, 0x67, 0xfc, 0x7f, 0x80,

    /* U+0044 "D" */
    0xfe, 0x3f, 0xcc, 0x3b, 0x7, 0xc0, 0xf0, 0x3c,
    0xf, 0x7, 0xc3, 0xbf, 0xcf, 0xe0,

    /* U+0045 "E" */
    0x3f, 0xdf, 0xfc, 0x3, 0x0, 0xc0, 0x3f, 0xcf,
    0xf3, 0x0, 0xc0, 0x3f, 0xf7, 0xfc,

    /* U+0046 "F" */
    0x3f, 0xef, 0xff, 0x0, 0x60, 0xc, 0x1, 0xff,
    0x1f, 0xe6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x0,

    /* U+0047 "G" */
    0x1f, 0x87, 0xf1, 0xc0, 0x70, 0xc, 0x1, 0x81,
    0xf0, 0x3f, 0x3, 0x70, 0x67, 0xfc, 0x7f, 0x80,

    /* U+0048 "H" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1f, 0xff, 0xff, 0xf8, 0xf, 0x1, 0x80,

    /* U+0049 "I" */
    0xff, 0xff, 0xfc, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1f, 0xff, 0xff, 0x80,

    /* U+004A "J" */
    0xff, 0xff, 0xff, 0x1, 0x80, 0x30, 0x6, 0x0,
    0xc0, 0x18, 0x7, 0x1, 0xc3, 0xf0, 0x7c, 0x0,

    /* U+004B "K" */
    0xc0, 0xd8, 0x1b, 0x6, 0x60, 0xcc, 0x19, 0xff,
    0x3f, 0xe6, 0xe, 0xc0, 0xd8, 0x1f, 0x1, 0x80,

    /* U+004C "L" */
    0xf8, 0x1f, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0,
    0x18, 0x1b, 0x83, 0x38, 0x63, 0xfc, 0x3e, 0x0,

    /* U+004D "M" */
    0xe0, 0x7c, 0x1f, 0xc7, 0xfd, 0xfd, 0xf7, 0x9c,
    0xf1, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x1, 0x80,

    /* U+004E "N" */
    0xe0, 0x7e, 0xf, 0xe1, 0xfc, 0x3d, 0xc7, 0x9c,
    0xf1, 0xde, 0x1f, 0xc1, 0xf8, 0x1f, 0x3, 0x80,

    /* U+004F "O" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xe0, 0xee, 0x38, 0xfe, 0xf,
    0x80,

    /* U+0050 "P" */
    0xff, 0x9f, 0xfb, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xff, 0xf7, 0xfc, 0xc0, 0x18, 0x3, 0x0, 0x0,

    /* U+0051 "Q" */
    0xf, 0x3, 0xfc, 0x70, 0xe6, 0x6, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xe0, 0x76, 0x66, 0x3f,
    0xc1, 0xf8, 0x6, 0x0, 0x60,

    /* U+0052 "R" */
    0xff, 0x1f, 0xf3, 0x3, 0x60, 0x6c, 0xd, 0x81,
    0xbf, 0xf7, 0xff, 0xc0, 0x78, 0xf, 0x1, 0x80,

    /* U+0053 "S" */
    0x3f, 0xef, 0xff, 0x1, 0xe0, 0xc, 0x0, 0xff,
    0xf, 0xf8, 0x3, 0x0, 0x7f, 0xff, 0xff, 0x0,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0x31, 0xe6, 0x30, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x7, 0xe0, 0xfc, 0x0,

    /* U+0055 "U" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1f, 0x7, 0x71, 0xc7, 0xf0, 0x7c, 0x0,

    /* U+0056 "V" */
    0xc0, 0xfc, 0x19, 0x83, 0x30, 0xe7, 0x18, 0x67,
    0xe, 0xc0, 0xd8, 0x1e, 0x1, 0xc0, 0x38, 0x0,

    /* U+0057 "W" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x47, 0x9c,
    0xf7, 0xdf, 0xdf, 0xf1, 0xfe, 0x3f, 0x83, 0x80,

    /* U+0058 "X" */
    0xe0, 0xcc, 0x30, 0xce, 0x1f, 0x81, 0xe0, 0x1c,
    0x7, 0x81, 0xd8, 0x73, 0x9c, 0x3b, 0x3, 0x80,

    /* U+0059 "Y" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xe1, 0xdc, 0xe3,
    0xf0, 0x78, 0xc, 0x3, 0x0, 0xc0,

    /* U+005A "Z" */
    0xff, 0xff, 0xf0, 0x38, 0x1c, 0xe, 0x7, 0x3,
    0x81, 0xc0, 0x60, 0x3f, 0xff, 0xfc,

    /* U+005B "[" */
    0xff, 0xcc, 0xcc, 0xcc, 0xcf, 0xf0,

    /* U+005C "\\" */
    0xc6, 0x38, 0xc6, 0x31, 0xc6, 0x31, 0x8c,

    /* U+005D "]" */
    0xff, 0x33, 0x33, 0x33, 0x3f, 0xf0,

    /* U+005E "^" */
    0x18, 0x38, 0x3c, 0x7c, 0x6e, 0x66, 0xe7,

    /* U+005F "_" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+0060 "`" */
    0xc1, 0xff, 0xf8,

    /* U+0061 "a" */
    0xf, 0x81, 0xf8, 0x1, 0x80, 0x33, 0xfe, 0xff,
    0xf0, 0x1e, 0x3, 0xc0, 0x6f, 0xfc, 0xff, 0x0,

    /* U+0062 "b" */
    0xc0, 0x18, 0x3, 0xfe, 0x7f, 0xec, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x6f, 0xf9, 0xfe, 0x0,

    /* U+0063 "c" */
    0x3f, 0x9f, 0xfb, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0x30, 0x1e, 0x3, 0xc0, 0x6f, 0xf9, 0xfe, 0x0,

    /* U+0064 "d" */
    0x0, 0x60, 0xc, 0xff, 0xff, 0xfc, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x7f, 0xfd, 0xff, 0x0,

    /* U+0065 "e" */
    0x3f, 0x9f, 0xfb, 0x1, 0xe0, 0x3c, 0x7, 0xff,
    0xbf, 0xe6, 0x0, 0xc0, 0xf, 0xf0, 0xfe, 0x0,

    /* U+0066 "f" */
    0x3f, 0x9f, 0xff, 0x1, 0xe0, 0x3c, 0x1, 0x80,
    0x3f, 0x7, 0xe0, 0xc0, 0x18, 0x3, 0x0, 0x0,

    /* U+0067 "g" */
    0x3f, 0x8f, 0xfb, 0x1, 0xe0, 0x3c, 0x6, 0xff,
    0xcf, 0xf8, 0x3, 0x0, 0x7f, 0xfb, 0xff, 0x0,

    /* U+0068 "h" */
    0xc0, 0x18, 0x3, 0xfe, 0x7f, 0xec, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x1, 0x80,

    /* U+0069 "i" */
    0x3f, 0x7, 0xe0, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1f, 0xff, 0xff, 0x80,

    /* U+006A "j" */
    0xf, 0xe1, 0xfc, 0x1, 0x80, 0x30, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x7f, 0xf9, 0xff, 0x0,

    /* U+006B "k" */
    0xc3, 0x18, 0x63, 0xc, 0x61, 0x8c, 0x31, 0xff,
    0xbf, 0xfe, 0x3, 0xc0, 0x78, 0xf, 0x1, 0x80,

    /* U+006C "l" */
    0xf0, 0x1e, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x1f, 0xff, 0xff, 0x80,

    /* U+006D "m" */
    0x7f, 0xbf, 0xfc, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0x3, 0xc0, 0xf0, 0x3c, 0xc,

    /* U+006E "n" */
    0x7f, 0x9f, 0xfb, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x1, 0x80,

    /* U+006F "o" */
    0x3f, 0x9f, 0xfb, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x7f, 0xf9, 0xff, 0x0,

    /* U+0070 "p" */
    0x3f, 0x9f, 0xfb, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1f, 0xfe, 0xff, 0x98, 0x3, 0x0, 0x0,

    /* U+0071 "q" */
    0x3f, 0x8f, 0xfb, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1b, 0xff, 0x3f, 0xe0, 0xc, 0x1, 0x80,

    /* U+0072 "r" */
    0x3f, 0x9f, 0xfb, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x0,

    /* U+0073 "s" */
    0x3f, 0xef, 0xff, 0x0, 0x60, 0xc, 0x0, 0xff,
    0xf, 0xf8, 0x3, 0x0, 0x67, 0xfc, 0xff, 0x0,

    /* U+0074 "t" */
    0x30, 0x6, 0x3, 0xff, 0xff, 0xf3, 0x0, 0x60,
    0xc, 0x1, 0x83, 0x30, 0x67, 0xfc, 0x7f, 0x0,

    /* U+0075 "u" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x7f, 0xf9, 0xff, 0x0,

    /* U+0076 "v" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0xf, 0x83,
    0xb0, 0xe6, 0x38, 0xce, 0x1f, 0x81, 0xe0, 0x0,

    /* U+0077 "w" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xcf, 0x33, 0xcc, 0xff, 0xf7, 0xf8,

    /* U+0078 "x" */
    0x60, 0xcc, 0x19, 0x83, 0x30, 0x66, 0xc, 0xff,
    0xbf, 0xfe, 0x3, 0xc0, 0x78, 0xf, 0x1, 0x80,

    /* U+0079 "y" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x6, 0xff,
    0xcf, 0xf8, 0x3, 0x0, 0x7f, 0xfb, 0xfe, 0x0,

    /* U+007A "z" */
    0xff, 0x9f, 0xf8, 0x1, 0x80, 0x30, 0x6, 0xff,
    0xbf, 0xe6, 0x0, 0xc0, 0x1f, 0xf1, 0xfe, 0x0,

    /* U+007B "{" */
    0x3b, 0xd8, 0xce, 0x71, 0x8c, 0x61, 0xc6,

    /* U+007C "|" */
    0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0xe7, 0x8c, 0x63, 0x9c, 0xc6, 0x37, 0x38,

    /* U+007E "~" */
    0x73, 0xff, 0xce
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 82, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 98, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 134, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 9, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 238, .box_w = 11, .box_h = 15, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 46, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 231, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 80, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 79, .adv_w = 111, .box_w = 4, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 111, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 146, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 98, .adv_w = 156, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 105, .adv_w = 93, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 107, .adv_w = 119, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 109, .adv_w = 93, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 238, .box_w = 10, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 238, .box_w = 10, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 273, .adv_w = 88, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 88, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 279, .adv_w = 156, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 287, .adv_w = 156, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 292, .adv_w = 156, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 300, .adv_w = 218, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 258, .box_w = 12, .box_h = 15, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 339, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 224, .box_w = 10, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 218, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 222, .box_w = 10, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 212, .box_w = 10, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 210, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 223, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 211, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 218, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 233, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 209, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 525, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 557, .adv_w = 226, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 228, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 590, .adv_w = 226, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 611, .adv_w = 230, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 627, .adv_w = 227, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 643, .adv_w = 206, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 236, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 675, .adv_w = 201, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 197, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 211, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 737, .adv_w = 211, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 751, .adv_w = 115, .box_w = 4, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 757, .adv_w = 112, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 764, .adv_w = 115, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 770, .adv_w = 156, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 777, .adv_w = 205, .box_w = 13, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 781, .adv_w = 238, .box_w = 7, .box_h = 3, .ofs_x = 4, .ofs_y = 12},
    {.bitmap_index = 784, .adv_w = 221, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 800, .adv_w = 234, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 816, .adv_w = 237, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 234, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 848, .adv_w = 222, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 864, .adv_w = 222, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 880, .adv_w = 235, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 896, .adv_w = 235, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 912, .adv_w = 206, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 928, .adv_w = 227, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 944, .adv_w = 226, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 960, .adv_w = 195, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 976, .adv_w = 238, .box_w = 10, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 990, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1006, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1022, .adv_w = 233, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1038, .adv_w = 233, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1054, .adv_w = 222, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1070, .adv_w = 218, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1086, .adv_w = 215, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1102, .adv_w = 238, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1118, .adv_w = 224, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1134, .adv_w = 238, .box_w = 10, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1148, .adv_w = 231, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1164, .adv_w = 234, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1180, .adv_w = 223, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1196, .adv_w = 116, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1203, .adv_w = 102, .box_w = 2, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1206, .adv_w = 116, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1213, .adv_w = 155, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 8}
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

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    3, 69,
    8, 69,
    11, 69,
    13, 3,
    13, 8,
    13, 11,
    15, 3,
    15, 8,
    15, 11,
    34, 43,
    34, 45,
    34, 53,
    34, 55,
    34, 58,
    35, 43,
    35, 45,
    35, 53,
    35, 55,
    35, 58,
    37, 42,
    37, 43,
    37, 45,
    37, 53,
    37, 55,
    37, 57,
    37, 59,
    38, 36,
    38, 40,
    38, 48,
    38, 50,
    39, 34,
    39, 36,
    39, 38,
    39, 39,
    39, 40,
    39, 48,
    39, 50,
    39, 66,
    39, 69,
    39, 74,
    39, 75,
    39, 89,
    40, 43,
    40, 45,
    40, 53,
    40, 55,
    40, 58,
    42, 36,
    42, 40,
    42, 48,
    42, 50,
    44, 36,
    44, 40,
    44, 43,
    44, 45,
    44, 48,
    44, 50,
    44, 53,
    44, 55,
    44, 58,
    44, 82,
    44, 84,
    44, 85,
    45, 43,
    45, 45,
    45, 53,
    45, 54,
    45, 55,
    45, 58,
    45, 82,
    45, 84,
    45, 85,
    48, 42,
    48, 43,
    48, 45,
    48, 53,
    48, 55,
    48, 57,
    48, 59,
    49, 34,
    49, 55,
    49, 57,
    49, 59,
    49, 66,
    49, 74,
    50, 42,
    50, 43,
    50, 45,
    50, 53,
    50, 55,
    50, 57,
    50, 59,
    51, 43,
    51, 45,
    51, 53,
    51, 54,
    51, 55,
    51, 58,
    51, 82,
    51, 84,
    51, 85,
    53, 13,
    53, 15,
    53, 34,
    53, 36,
    53, 40,
    53, 48,
    53, 50,
    53, 66,
    53, 69,
    53, 74,
    53, 75,
    54, 66,
    54, 74,
    54, 75,
    55, 13,
    55, 15,
    55, 34,
    55, 36,
    55, 40,
    55, 48,
    55, 50,
    55, 66,
    55, 69,
    55, 74,
    55, 75,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 85,
    58, 13,
    58, 15,
    58, 34,
    58, 66,
    58, 69,
    58, 74,
    58, 75,
    59, 36,
    59, 40,
    59, 48,
    59, 50,
    59, 82,
    59, 84,
    67, 3,
    67, 8,
    67, 11,
    67, 82,
    67, 84,
    70, 13,
    70, 15,
    70, 66,
    70, 69,
    70, 74,
    70, 75,
    71, 13,
    71, 15,
    71, 66,
    71, 69,
    71, 74,
    71, 75,
    71, 89,
    73, 3,
    73, 8,
    73, 11,
    73, 84,
    73, 85,
    74, 3,
    74, 8,
    74, 11,
    74, 82,
    74, 84,
    74, 85,
    76, 74,
    76, 82,
    76, 84,
    76, 85,
    77, 3,
    77, 8,
    77, 11,
    77, 82,
    77, 84,
    77, 85,
    81, 13,
    81, 15,
    81, 66,
    81, 69,
    81, 74,
    81, 75,
    83, 13,
    83, 15,
    83, 66,
    83, 69,
    83, 74,
    83, 75,
    83, 89,
    85, 66,
    85, 74,
    87, 13,
    87, 15,
    87, 66,
    87, 69,
    87, 74,
    87, 75,
    89, 84,
    91, 13,
    91, 15,
    91, 66,
    91, 69,
    91, 74,
    91, 75
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -13, -13, -13, -33, -33, -33, -33, -33,
    -33, -10, -10, -13, -13, -10, -8, -5,
    -5, -8, -8, -8, -13, -8, -8, -8,
    -8, -5, -5, -5, -5, -5, -13, -8,
    -8, -8, -8, -8, -8, -15, -13, -13,
    -10, -5, -8, -8, -8, -8, -8, -8,
    -8, -8, -8, -5, -5, -8, -5, -5,
    -5, -8, -8, -5, -8, -5, -5, -18,
    -13, -13, -8, -13, -13, -10, -10, -5,
    -8, -13, -8, -8, -8, -8, -5, -8,
    -5, -8, -13, -8, -13, -8, -13, -8,
    -8, -8, -8, -5, -10, -8, -8, -8,
    -8, -8, -8, -8, -5, -26, -26, -13,
    -8, -8, -8, -8, -18, -13, -13, -15,
    -10, -13, -10, -33, -33, -13, -8, -8,
    -8, -8, -13, -15, -13, -15, -8, -8,
    -8, -8, -8, -33, -33, -10, -13, -10,
    -13, -13, -5, -5, -5, -5, -8, -8,
    -20, -20, -20, -13, -13, -20, -20, -8,
    -8, -13, -13, -38, -38, -18, -15, -18,
    -18, -8, -13, -13, -13, -10, -5, -20,
    -20, -20, -18, -13, -13, 4, -10, -10,
    -5, -33, -33, -33, -26, -18, -15, -26,
    -26, -13, -10, -18, -13, -38, -38, -13,
    -13, -18, -13, -5, -5, -8, -36, -36,
    -13, -13, -15, -13, -8, -15, -15, -10,
    -10, -13, -18
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 211,
    .glyph_ids_size = 0
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
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
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
const lv_font_t ui_font_moby16r = {
#else
lv_font_t ui_font_moby16r = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 19,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_MOBY16R*/

