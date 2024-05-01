// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: EVCC-Display

#ifndef _EVCC_DISPLAY_UI_H
#define _EVCC_DISPLAY_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_MainScreen
void ui_MainScreen_screen_init(void);
extern lv_obj_t * ui_MainScreen;
extern lv_obj_t * ui_mainCont;
extern lv_obj_t * ui_homeCont;
extern lv_obj_t * ui_homeBarCont;
extern lv_obj_t * ui_PanelSolar;
extern lv_obj_t * ui_LabelSolar;
extern lv_obj_t * ui_PanelUsing;
extern lv_obj_t * ui_LabelUsing;
extern lv_obj_t * ui_imgSolar;
extern lv_obj_t * ui_imgGrid;
extern lv_obj_t * ui_carCont;
extern lv_obj_t * ui_carBarCont;
extern lv_obj_t * ui_PanelSoc;
extern lv_obj_t * ui_LabelSoc;
extern lv_obj_t * ui_PanelMax;
extern lv_obj_t * ui_battery;
extern lv_obj_t * ui_infoCont;
extern lv_obj_t * ui_chargeLbl;
extern lv_obj_t * ui_imgCar;
extern lv_obj_t * ui_showerg;
extern lv_obj_t * ui_showerw;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_solar24_png);    // assets/solar24.png
LV_IMG_DECLARE(ui_img_power24_png);    // assets/power24.png
LV_IMG_DECLARE(ui_img_batery24_png);    // assets/batery24.png
LV_IMG_DECLARE(ui_img_auto24_png);    // assets/auto24.png
LV_IMG_DECLARE(ui_img_1743798666);    // assets/shower-16g.png
LV_IMG_DECLARE(ui_img_1743782298);    // assets/shower-16w.png
LV_IMG_DECLARE(ui_img_batery40_png);    // assets/batery40.png



LV_FONT_DECLARE(ui_font_moby16r);
LV_FONT_DECLARE(ui_font_moby18);
LV_FONT_DECLARE(ui_font_ubuntu16b);
LV_FONT_DECLARE(ui_font_ubuntu20b);
LV_FONT_DECLARE(ui_font_ubuntu30b);



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
