#ifndef __TFTUTIL_H
#define __TFTUTIL_H

#include "lgfx.h"

extern LGFX tft;
extern LGFX_Sprite clk;
extern int backColor;
extern uint16_t backFillColor;
extern uint16_t penColor;
void tftInit();
void reflashTFT();
void drawText(String text);
void draw2LineText(String text1, String text2);

#endif