#ifndef SIMPLEOLED_H
#define SIMPLEOLED_H
#include "Arduino.h"
#include "DefaultFonts.c"
#include "SSD1306.h"

#define LCDWIDTH 128
#define LCDHEIGHT 64

#define FONT_HEIGHT pgm_read_byte(&current_font[0])
#define FONT_WEIGHT pgm_read_byte(&current_font[1])
#define FONT_TABLE_START pgm_read_byte(&current_font[2])
#define FONT_TABLE_END pgm_read_byte(&current_font[3])
#define FONT_DATA current_font + 4
#define SSD1306_CMD 0x00
#define SSD1306_DATA 0x40

extern uint8_t *current_font;

void oledInit();
void oledCMD(uint8_t data);
void setFont(uint8_t *font);
void oledWriteString(uint8_t col, uint8_t row, const char str[]);
void oledDraw(uint8_t col, uint8_t row, uint8_t *image);
void clearScr();
void setCursor(uint8_t column, uint8_t row);

#endif //SIMPLEOLED_H
