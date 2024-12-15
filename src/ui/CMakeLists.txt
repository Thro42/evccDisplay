SET(SOURCES screens/ui_MainScreen.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_solar24_png.c
    images/ui_img_power24_png.c
    images/ui_img_batery24_png.c
    images/ui_img_auto24_png.c
    images/ui_img_house24_png.c
    images/ui_img_1743798666.c
    images/ui_img_1743782298.c
    images/ui_img_batery40_png.c
    images/ui_img_happy1_png.c
    fonts/ui_font_ubuntu16b.c
    fonts/ui_font_ubuntu30b.c)

add_library(ui ${SOURCES})
