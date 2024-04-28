/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font C:/Users/RobertThomitzek/Dropbox/Sourcen/ESP32/EVCC-Display/assets/Moby-Bold.otf -o C:/Users/RobertThomitzek/Dropbox/Sourcen/ESP32/EVCC-Display/assets\ui_font_moby18.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_MOBY18
#define UI_FONT_MOBY18 1
#endif

#if UI_FONT_MOBY18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x77, 0x77, 0x77, 0x70, 0xf, 0xff,

    /* U+0022 "\"" */
    0xef, 0xdf, 0xbf, 0x7e, 0xe0,

    /* U+0023 "#" */
    0x38, 0xe1, 0xc7, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0x9c, 0x70, 0xe3, 0x9f, 0xff, 0xff, 0xff, 0xff,
    0xce, 0x38, 0x71, 0xc0,

    /* U+0024 "$" */
    0x2, 0x0, 0x38, 0xf, 0xfe, 0xff, 0xff, 0xff,
    0xf0, 0x3, 0xff, 0x8f, 0xfe, 0x3f, 0xf8, 0x1,
    0xc0, 0xf, 0xff, 0xff, 0xff, 0x7f, 0xf0, 0x1c,
    0x0, 0xe0,

    /* U+0025 "%" */
    0x3e, 0x7b, 0xff, 0xff, 0xff, 0xc7, 0xf, 0xfe,
    0x3f, 0xf8, 0xff, 0xe1, 0xc7, 0x1e, 0x3f, 0xff,
    0xff, 0xfd, 0xe7, 0xc0,

    /* U+0026 "&" */
    0x3e, 0x3, 0xf8, 0x3f, 0xe1, 0xc7, 0xe, 0x38,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe7, 0xff,
    0x1f, 0xf0, 0x7f, 0x0,

    /* U+0027 "'" */
    0xff, 0xfe,

    /* U+0028 "(" */
    0x3b, 0xff, 0xce, 0x73, 0x9c, 0xe7, 0xde, 0x70,

    /* U+0029 ")" */
    0x67, 0x9e, 0x73, 0x9c, 0xe7, 0x3b, 0xfc, 0xc0,

    /* U+002A "*" */
    0x1c, 0x2f, 0xbf, 0xdf, 0xef, 0xf7, 0xf9, 0x7c,
    0x38,

    /* U+002B "+" */
    0x1c, 0xe, 0x3f, 0xff, 0xff, 0xf8, 0xe0, 0x70,
    0x38,

    /* U+002C "," */
    0x7f, 0xde, 0x73, 0x80,

    /* U+002D "-" */
    0xff, 0xff, 0xf8,

    /* U+002E "." */
    0xff, 0xf0,

    /* U+002F "/" */
    0x39, 0xce, 0x77, 0xb9, 0xce, 0xf7, 0x39, 0xc0,

    /* U+0030 "0" */
    0x3f, 0xe3, 0xff, 0xbf, 0xff, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0xff,
    0xdf, 0xfc, 0x7f, 0xc0,

    /* U+0031 "1" */
    0x1f, 0x1, 0xf8, 0x7, 0xc0, 0xe, 0x0, 0x70,
    0x3, 0x80, 0x1c, 0x0, 0xe0, 0x7, 0x7, 0xff,
    0xff, 0xff, 0xff, 0xf0,

    /* U+0032 "2" */
    0x7f, 0xc7, 0xfe, 0x7f, 0xf0, 0x7, 0x0, 0x73,
    0xff, 0x7f, 0xef, 0xfc, 0xe0, 0xf, 0xff, 0xff,
    0xff, 0xff,

    /* U+0033 "3" */
    0x7f, 0xc3, 0xff, 0x1f, 0xfc, 0xe0, 0xe0, 0x7f,
    0x3, 0xf8, 0x1f, 0xe0, 0x7, 0x0, 0x3f, 0xff,
    0xff, 0xfd, 0xff, 0xc0,

    /* U+0034 "4" */
    0xe0, 0x7, 0x0, 0x38, 0x39, 0xc1, 0xce, 0xe,
    0x70, 0x73, 0x83, 0x9f, 0xff, 0x7f, 0xf9, 0xff,
    0xc0, 0x38, 0x1, 0xc0,

    /* U+0035 "5" */
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x0, 0xff, 0xc7,
    0xfe, 0x3f, 0xf0, 0x7, 0x0, 0x77, 0xff, 0x7f,
    0xe7, 0xfc,

    /* U+0036 "6" */
    0x3f, 0xf3, 0xff, 0xbf, 0xfd, 0xc0, 0xf, 0xfe,
    0x7f, 0xfb, 0xff, 0xfc, 0x7, 0xe0, 0x3f, 0xff,
    0xdf, 0xfc, 0x7f, 0xc0,

    /* U+0037 "7" */
    0xff, 0xf7, 0xff, 0xff, 0xfd, 0xc1, 0xe0, 0x1e,
    0x1, 0xe0, 0xe, 0x0, 0xe0, 0xf, 0x0, 0x70,
    0x3, 0x80, 0x1c, 0x0,

    /* U+0038 "8" */
    0x1f, 0xe1, 0xff, 0x9f, 0xfe, 0xe0, 0x77, 0x3,
    0xbf, 0xfd, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff,
    0xdf, 0xfc, 0x7f, 0xc0,

    /* U+0039 "9" */
    0x3f, 0xe3, 0xff, 0xbf, 0xff, 0xc0, 0x7e, 0x3,
    0xff, 0xfd, 0xff, 0xe7, 0xff, 0x0, 0x39, 0xff,
    0xcf, 0xfc, 0x7f, 0xc0,

    /* U+003A ":" */
    0xff, 0xf0, 0xff, 0xf0,

    /* U+003B ";" */
    0xff, 0xf0, 0xff, 0xf7, 0x70,

    /* U+003C "<" */
    0x1, 0x83, 0xc7, 0xef, 0xcf, 0x87, 0xc1, 0xf8,
    0x3f, 0x7, 0x80, 0xc0,

    /* U+003D "=" */
    0xff, 0xff, 0xff, 0xe0, 0xf, 0xff, 0xff, 0xfe,

    /* U+003E ">" */
    0xc0, 0x78, 0x3f, 0x7, 0xe0, 0xf8, 0x7c, 0xfd,
    0xf8, 0xf0, 0x60, 0x0,

    /* U+003F "?" */
    0xff, 0xe7, 0xff, 0xbf, 0xff, 0xc0, 0x70, 0x3,
    0x83, 0xfc, 0x1f, 0xc0, 0xfc, 0x0, 0x0, 0x3c,
    0x1, 0xe0, 0xf, 0x0,

    /* U+0040 "@" */
    0x3f, 0xf1, 0xff, 0xef, 0xff, 0xf8, 0x7, 0xe3,
    0xff, 0x9f, 0xfe, 0xff, 0xfb, 0x87, 0xee, 0x1f,
    0xbf, 0xfe, 0x7f, 0xb8, 0xfc, 0xe0, 0x3, 0xff,
    0xf7, 0xff, 0xcf, 0xff,

    /* U+0041 "A" */
    0xf, 0x81, 0xff, 0x1f, 0xfc, 0xf1, 0xee, 0x7,
    0xf0, 0x1f, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf8, 0xf, 0xc0, 0x70,

    /* U+0042 "B" */
    0xff, 0xcf, 0xfe, 0xff, 0xfe, 0x7, 0xe0, 0x7f,
    0xff, 0xff, 0xef, 0xff, 0xe0, 0x7f, 0xff, 0xff,
    0xef, 0xfc,

    /* U+0043 "C" */
    0xf, 0xf3, 0xff, 0x7f, 0xf7, 0x7, 0xe0, 0xe,
    0x0, 0xe0, 0xe, 0x0, 0x70, 0x77, 0xff, 0x3f,
    0xf0, 0xff,

    /* U+0044 "D" */
    0xff, 0x87, 0xff, 0x3f, 0xfd, 0xc0, 0xee, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x77, 0xff,
    0xbf, 0xf9, 0xff, 0x0,

    /* U+0045 "E" */
    0x3f, 0xf7, 0xff, 0xff, 0xfe, 0x0, 0xff, 0x87,
    0xfc, 0xff, 0x8e, 0x0, 0xe0, 0xf, 0xff, 0x7f,
    0xf3, 0xff,

    /* U+0046 "F" */
    0x3f, 0xf3, 0xff, 0xff, 0xfd, 0xc0, 0xe, 0x0,
    0x7f, 0xe1, 0xff, 0x1f, 0xf8, 0xe0, 0x7, 0x0,
    0x38, 0x1, 0xc0, 0x0,

    /* U+0047 "G" */
    0xf, 0xe1, 0xff, 0x1f, 0xf8, 0xe0, 0xe, 0x0,
    0x70, 0x3f, 0x81, 0xfc, 0xf, 0x70, 0x3b, 0xff,
    0xcf, 0xfe, 0x1f, 0xf0,

    /* U+0048 "H" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf8, 0xf, 0xc0, 0x70,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xfe, 0xe, 0x0, 0x70,
    0x3, 0x80, 0x1c, 0x0, 0xe0, 0x7, 0x7, 0xff,
    0xff, 0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x74, 0x3,
    0x80, 0x1c, 0x0, 0xe0, 0xf, 0x0, 0xf0, 0xff,
    0x8f, 0xf8, 0x3f, 0x0,

    /* U+004B "K" */
    0xe0, 0x77, 0x3, 0xb8, 0x3d, 0xc1, 0xcf, 0xfe,
    0x7f, 0xe3, 0xff, 0x9c, 0x1e, 0xe0, 0xf7, 0x3,
    0xf8, 0x1f, 0xc0, 0x70,

    /* U+004C "L" */
    0xfc, 0x7, 0xe0, 0x3f, 0x0, 0x70, 0x3, 0x80,
    0x1c, 0x0, 0xe0, 0xe7, 0x7, 0x1c, 0x38, 0xff,
    0xc3, 0xfc, 0x7, 0xc0,

    /* U+004D "M" */
    0xe0, 0x3f, 0x83, 0xfe, 0x3f, 0xfb, 0xff, 0xff,
    0xf7, 0xdf, 0x9c, 0xfc, 0x47, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x70,

    /* U+004E "N" */
    0xf0, 0x3f, 0xc1, 0xff, 0xf, 0xfc, 0x7f, 0xf3,
    0xf7, 0xdf, 0x9e, 0xfc, 0x7f, 0xe1, 0xff, 0x7,
    0xf8, 0x1f, 0xc0, 0x70,

    /* U+004F "O" */
    0xf, 0x81, 0xff, 0x1f, 0xfc, 0xf1, 0xee, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0x78, 0xf3, 0xff,
    0x8f, 0xf8, 0x1f, 0x0,

    /* U+0050 "P" */
    0xff, 0xe7, 0xff, 0xbf, 0xff, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0xff, 0xff, 0xfe, 0xff, 0xe7, 0x0,
    0x38, 0x1, 0xc0, 0x0,

    /* U+0051 "Q" */
    0xf, 0x81, 0xff, 0x1f, 0xfc, 0xf1, 0xef, 0x7,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xf7, 0x7b, 0xbb,
    0x9f, 0xfc, 0x7f, 0xc0, 0xf8, 0x3, 0x80, 0x1c,
    0x0,

    /* U+0052 "R" */
    0xff, 0xc7, 0xff, 0x3f, 0xfd, 0xc0, 0xee, 0x7,
    0x70, 0x3b, 0xff, 0xdf, 0xfe, 0xff, 0xff, 0x1,
    0xf8, 0xf, 0xc0, 0x70,

    /* U+0053 "S" */
    0x3f, 0xfb, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0xfe,
    0x3f, 0xf8, 0xff, 0xe0, 0x7, 0x0, 0x3f, 0xff,
    0xff, 0xfd, 0xff, 0xc0,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xce, 0x74, 0x71,
    0x3, 0x80, 0x1c, 0x0, 0xe0, 0x7, 0x1, 0xfe,
    0xf, 0xf0, 0x7f, 0x80,

    /* U+0055 "U" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfe, 0xf, 0x78, 0xf3, 0xff,
    0x8f, 0xf8, 0x1f, 0x0,

    /* U+0056 "V" */
    0xf0, 0x3b, 0x81, 0xdc, 0x1e, 0xf0, 0xe3, 0x87,
    0x1e, 0x70, 0x73, 0x83, 0xfc, 0xf, 0xc0, 0x7e,
    0x1, 0xe0, 0xf, 0x0,

    /* U+0057 "W" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0, 0x7e, 0x23,
    0xf3, 0x9f, 0xbe, 0xff, 0xff, 0xfd, 0xff, 0xc7,
    0xfe, 0x3f, 0xe0, 0xf0,

    /* U+0058 "X" */
    0x78, 0x7b, 0xc7, 0x8f, 0x78, 0x3f, 0xc0, 0xfc,
    0x3, 0xc0, 0x3e, 0x3, 0xf8, 0x3f, 0xe1, 0xe7,
    0x9e, 0x1f, 0xe0, 0xf0,

    /* U+0059 "Y" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0, 0x7f, 0x7,
    0xbc, 0x78, 0xff, 0x83, 0xf8, 0x7, 0x0, 0x38,
    0x1, 0xc0, 0xe, 0x0,

    /* U+005A "Z" */
    0xff, 0xff, 0xff, 0xff, 0xf0, 0x1e, 0x3, 0xc0,
    0x78, 0x1f, 0x3, 0xc0, 0x78, 0xf, 0xff, 0xff,
    0xff, 0xff,

    /* U+005B "[" */
    0xfb, 0xff, 0xb8, 0xe3, 0x8e, 0x38, 0xe3, 0xef,
    0xfe,

    /* U+005C "\\" */
    0xe7, 0x39, 0xe7, 0x39, 0xcf, 0x39, 0xce, 0x70,

    /* U+005D "]" */
    0x7f, 0xf7, 0xc7, 0x1c, 0x71, 0xc7, 0x1d, 0xff,
    0xdf,

    /* U+005E "^" */
    0x18, 0x1e, 0xf, 0x8f, 0xc7, 0xe7, 0xbb, 0x9d,
    0xcf,

    /* U+005F "_" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,

    /* U+0060 "`" */
    0xe0, 0x7f, 0xff, 0xff, 0xf0,

    /* U+0061 "a" */
    0x7, 0xe0, 0x3f, 0x81, 0xfe, 0x0, 0x73, 0xff,
    0xbf, 0xff, 0xff, 0xfc, 0x7, 0xe0, 0x3f, 0xff,
    0xdf, 0xfc, 0x7f, 0xc0,

    /* U+0062 "b" */
    0xe0, 0x7, 0x0, 0x3f, 0xf9, 0xff, 0xef, 0xff,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0xff,
    0xdf, 0xfc, 0x7f, 0xc0,

    /* U+0063 "c" */
    0x3f, 0xe3, 0xff, 0xbf, 0xff, 0xc0, 0x7e, 0x3,
    0xf0, 0x3, 0x80, 0x1c, 0x7, 0xe0, 0x3f, 0xff,
    0xdf, 0xfc, 0x7f, 0xc0,

    /* U+0064 "d" */
    0x0, 0x38, 0x1, 0xcf, 0xfe, 0xff, 0xff, 0xff,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0xff,
    0xdf, 0xfc, 0x7f, 0xc0,

    /* U+0065 "e" */
    0x3f, 0xe3, 0xff, 0xbf, 0xff, 0xc0, 0x7e, 0x3,
    0xff, 0xff, 0xff, 0xdf, 0xfc, 0xe0, 0x7, 0xff,
    0x1f, 0xf8, 0x7f, 0xc0,

    /* U+0066 "f" */
    0x3f, 0xe3, 0xff, 0xbf, 0xff, 0xc0, 0x7e, 0x3,
    0xf0, 0x3, 0xfc, 0x1f, 0xe0, 0xff, 0x7, 0x0,
    0x38, 0x1, 0xc0, 0x0,

    /* U+0067 "g" */
    0x3f, 0xe3, 0xff, 0xbf, 0xff, 0xc0, 0x7e, 0x3,
    0xff, 0xfd, 0xff, 0xe7, 0xff, 0x0, 0x3b, 0xff,
    0xdf, 0xfc, 0xff, 0xc0,

    /* U+0068 "h" */
    0xe0, 0x7, 0x0, 0x3f, 0xf9, 0xff, 0xef, 0xff,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x70,

    /* U+0069 "i" */
    0x3f, 0xc1, 0xfe, 0xf, 0xf0, 0xe, 0x0, 0x70,
    0x3, 0x80, 0x1c, 0x0, 0xe0, 0x7, 0x7, 0xff,
    0xff, 0xff, 0xff, 0xf0,

    /* U+006A "j" */
    0x7, 0xf8, 0x3f, 0xc1, 0xfe, 0x0, 0x70, 0x3,
    0x80, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0xff,
    0xdf, 0xfc, 0x7f, 0xc0,

    /* U+006B "k" */
    0xe1, 0xc7, 0xe, 0x38, 0x71, 0xc3, 0x8e, 0x1c,
    0x7f, 0xf3, 0xff, 0xdf, 0xff, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x70,

    /* U+006C "l" */
    0xfc, 0x7, 0xe0, 0x3f, 0x0, 0x38, 0x1, 0xc0,
    0xe, 0x0, 0x70, 0x3, 0x80, 0x1c, 0x7, 0xff,
    0xff, 0xff, 0xff, 0xf0,

    /* U+006D "m" */
    0x3d, 0xe3, 0xff, 0xbf, 0xff, 0xce, 0x7e, 0x73,
    0xf3, 0x9f, 0x9c, 0xfc, 0x47, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x70,

    /* U+006E "n" */
    0x3f, 0xe3, 0xff, 0xbf, 0xff, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x70,

    /* U+006F "o" */
    0x3f, 0xe3, 0xff, 0xbf, 0xff, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0xff,
    0xdf, 0xfc, 0x7f, 0xc0,

    /* U+0070 "p" */
    0x3f, 0xe3, 0xff, 0xbf, 0xff, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xff, 0xff, 0xff, 0xf7, 0xff,
    0x38, 0x1, 0xc0, 0x0,

    /* U+0071 "q" */
    0x3f, 0xe3, 0xff, 0xbf, 0xff, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xff, 0xff, 0x7f, 0xf9, 0xff,
    0xc0, 0xe, 0x0, 0x70,

    /* U+0072 "r" */
    0x3f, 0xe3, 0xff, 0xbf, 0xff, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x0, 0xe0, 0x7, 0x0,
    0x38, 0x1, 0xc0, 0x0,

    /* U+0073 "s" */
    0x3f, 0xfb, 0xff, 0xff, 0xff, 0xc0, 0xe, 0x0,
    0x7f, 0xf1, 0xff, 0xc7, 0xff, 0x0, 0x39, 0xff,
    0xcf, 0xfc, 0x7f, 0xc0,

    /* U+0074 "t" */
    0x38, 0x1, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0x9c, 0x0, 0xe0, 0x7, 0x7, 0x38, 0x39, 0xff,
    0xc7, 0xfc, 0x1f, 0xc0,

    /* U+0075 "u" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0xff,
    0xdf, 0xfc, 0x7f, 0xc0,

    /* U+0076 "v" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0, 0x7e, 0x7,
    0xf0, 0x7b, 0x87, 0x9c, 0x78, 0xe7, 0x87, 0xf8,
    0x1f, 0x80, 0x78, 0x0,

    /* U+0077 "w" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x9c, 0xfc, 0xe7, 0xe7, 0x3f, 0xff,
    0xdf, 0xfc, 0x7b, 0xc0,

    /* U+0078 "x" */
    0x70, 0x73, 0x83, 0x9c, 0x1c, 0xe0, 0xe7, 0xff,
    0x3f, 0xfb, 0xff, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x70,

    /* U+0079 "y" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0, 0x7f, 0xff,
    0xbf, 0xfc, 0xff, 0xe0, 0x7, 0x0, 0x3f, 0xff,
    0xff, 0xfd, 0xff, 0xc0,

    /* U+007A "z" */
    0xff, 0xe7, 0xff, 0xbf, 0xfe, 0x0, 0x70, 0x3,
    0x9f, 0xfd, 0xff, 0xdf, 0xfc, 0xe0, 0x7, 0xff,
    0x1f, 0xf8, 0x7f, 0xc0,

    /* U+007B "{" */
    0xe, 0x3c, 0xf9, 0xc3, 0x8f, 0x3e, 0x3c, 0x38,
    0x7c, 0x78, 0x70,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0x61, 0xe1, 0xe1, 0xc3, 0x87, 0x8f, 0x9e, 0x38,
    0xf3, 0xc3, 0x0,

    /* U+007E "~" */
    0x79, 0x7f, 0xff, 0xf9, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 86, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 110, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 165, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 12, .adv_w = 271, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 271, .box_w = 13, .box_h = 16, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 58, .adv_w = 271, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 251, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 96, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 100, .adv_w = 128, .box_w = 5, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 128, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 170, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 125, .adv_w = 204, .box_w = 9, .box_h = 8, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 134, .adv_w = 110, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 138, .adv_w = 146, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 141, .adv_w = 110, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 147, .box_w = 5, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 271, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 271, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 271, .box_w = 12, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 271, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 271, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 271, .box_w = 12, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 271, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 271, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 271, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 271, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 110, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 105, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 356, .adv_w = 203, .box_w = 9, .box_h = 10, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 368, .adv_w = 204, .box_w = 9, .box_h = 7, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 376, .adv_w = 203, .box_w = 9, .box_h = 10, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 388, .adv_w = 251, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 408, .adv_w = 294, .box_w = 14, .box_h = 16, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 436, .adv_w = 266, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 257, .box_w = 12, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 474, .adv_w = 239, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 263, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 234, .box_w = 12, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 234, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 254, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 271, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 590, .adv_w = 237, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 610, .adv_w = 251, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 260, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 228, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 670, .adv_w = 271, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 690, .adv_w = 272, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 254, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 258, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 750, .adv_w = 254, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 775, .adv_w = 261, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 253, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 226, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 835, .adv_w = 266, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 855, .adv_w = 221, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 875, .adv_w = 272, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 895, .adv_w = 217, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 915, .adv_w = 237, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 935, .adv_w = 237, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 953, .adv_w = 126, .box_w = 6, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 962, .adv_w = 147, .box_w = 5, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 970, .adv_w = 126, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 979, .adv_w = 271, .box_w = 9, .box_h = 8, .ofs_x = 4, .ofs_y = 4},
    {.bitmap_index = 988, .adv_w = 233, .box_w = 17, .box_h = 3, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 271, .box_w = 9, .box_h = 4, .ofs_x = 4, .ofs_y = 13},
    {.bitmap_index = 1000, .adv_w = 253, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1020, .adv_w = 263, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1040, .adv_w = 266, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1060, .adv_w = 263, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1080, .adv_w = 260, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 251, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1120, .adv_w = 262, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1140, .adv_w = 266, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1160, .adv_w = 231, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1180, .adv_w = 257, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1200, .adv_w = 254, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1220, .adv_w = 223, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1240, .adv_w = 272, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1260, .adv_w = 272, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1280, .adv_w = 272, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1300, .adv_w = 263, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1320, .adv_w = 263, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1340, .adv_w = 251, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1360, .adv_w = 249, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1380, .adv_w = 248, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1400, .adv_w = 272, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1420, .adv_w = 254, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1440, .adv_w = 271, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1460, .adv_w = 260, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1480, .adv_w = 266, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1500, .adv_w = 252, .box_w = 13, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1520, .adv_w = 140, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1531, .adv_w = 119, .box_w = 3, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1536, .adv_w = 140, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1547, .adv_w = 271, .box_w = 9, .box_h = 4, .ofs_x = 4, .ofs_y = 8}
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
    3, 66,
    3, 74,
    3, 75,
    8, 66,
    8, 74,
    8, 75,
    11, 66,
    11, 74,
    11, 75,
    13, 3,
    13, 8,
    13, 11,
    15, 3,
    15, 8,
    15, 11,
    17, 18,
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
    37, 13,
    37, 15,
    37, 42,
    37, 45,
    37, 53,
    37, 55,
    37, 57,
    37, 58,
    37, 59,
    38, 36,
    38, 40,
    38, 48,
    38, 50,
    39, 13,
    39, 15,
    39, 34,
    39, 36,
    39, 40,
    39, 48,
    39, 50,
    39, 66,
    39, 69,
    39, 74,
    39, 75,
    40, 43,
    40, 45,
    40, 53,
    40, 55,
    40, 58,
    42, 36,
    42, 40,
    42, 48,
    42, 50,
    43, 13,
    43, 15,
    43, 66,
    43, 69,
    43, 74,
    43, 75,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 54,
    44, 58,
    45, 43,
    45, 45,
    45, 53,
    45, 55,
    45, 58,
    45, 82,
    45, 84,
    48, 13,
    48, 15,
    48, 42,
    48, 45,
    48, 53,
    48, 55,
    48, 57,
    48, 58,
    48, 59,
    49, 13,
    49, 15,
    49, 34,
    49, 57,
    50, 13,
    50, 15,
    50, 42,
    50, 45,
    50, 53,
    50, 55,
    50, 57,
    50, 58,
    50, 59,
    51, 43,
    51, 45,
    51, 53,
    51, 54,
    51, 55,
    51, 58,
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
    54, 13,
    54, 15,
    54, 57,
    54, 66,
    54, 69,
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
    57, 54,
    58, 13,
    58, 15,
    58, 34,
    58, 36,
    58, 40,
    58, 48,
    58, 50,
    58, 66,
    58, 69,
    58, 74,
    58, 75,
    59, 36,
    59, 40,
    59, 48,
    59, 50,
    67, 32,
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
    72, 74,
    73, 32,
    73, 82,
    73, 84,
    74, 3,
    74, 8,
    74, 11,
    74, 32,
    74, 82,
    74, 84,
    74, 85,
    76, 74,
    76, 82,
    76, 84,
    77, 3,
    77, 8,
    77, 11,
    77, 32,
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
    87, 13,
    87, 15,
    87, 66,
    87, 69,
    87, 74,
    87, 75,
    91, 13,
    91, 15,
    91, 66,
    91, 74,
    91, 75
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -17, -23, -20, -17, -23, -20, -17, -23,
    -20, -43, -43, -43, -43, -43, -43, 5,
    -9, -9, -9, -9, -9, -9, -9, -9,
    -9, -9, -20, -20, -9, -9, -9, -9,
    -12, -9, -12, -9, -9, -9, -9, -49,
    -49, -12, -6, -6, -6, -6, -14, -12,
    -14, -9, -12, -12, -12, -17, -12, -9,
    -9, -9, -9, -23, -23, -9, -6, -14,
    -6, -9, -9, -9, -9, -6, -9, -12,
    -9, -9, -14, -12, -6, -6, -20, -20,
    -9, -9, -9, -9, -12, -9, -12, -35,
    -35, -12, -9, -20, -20, -9, -9, -9,
    -9, -12, -9, -12, -9, -12, -12, -9,
    -12, -12, -23, -23, -9, -9, -9, -9,
    -9, -12, -9, -12, -6, -17, -17, -6,
    -9, -6, -14, -6, -35, -35, -9, -9,
    -9, -9, -9, -14, -12, -14, -12, -12,
    -12, -12, -12, -6, -43, -43, -9, -9,
    -9, -9, -9, -14, -12, -17, -14, -12,
    -12, -12, -12, -12, -12, -9, -23, -23,
    -12, -9, -14, -9, -43, -43, -14, -9,
    -20, -12, -14, -9, -9, -9, -23, -23,
    -23, -14, -17, -12, -9, 5, -6, -6,
    -43, -43, -43, -26, -20, -14, -12, -23,
    -23, -12, -9, -23, -9, -23, -23, -12,
    -9, -17, -9, -35, -35, -12, -9, -12,
    -12, -14, -14, -9, -14, -9
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 214,
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
const lv_font_t ui_font_moby18 = {
#else
lv_font_t ui_font_moby18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 21,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_MOBY18*/

