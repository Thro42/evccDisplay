#ifndef MAIN_H
#define MAIN_H


void drawPowerSlider();
void drawSocSlider();
void set_pvPower(float power);
void set_gridPower(float power);
void set_vehicleSoc( int soc);
void set_charging(bool state );
void set_chargePower( int chargePower );

#endif // MAIN_H