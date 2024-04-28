SET(SOURCES screens/ui_MainScreen.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    fonts/ui_font_moby18.c
    fonts/ui_font_moby16r.c
    fonts/ui_font_ubuntu16b.c
    fonts/ui_font_ubuntu20b.c
    fonts/ui_font_ubuntu30b.c)

add_library(ui ${SOURCES})
