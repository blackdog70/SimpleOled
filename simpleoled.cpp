#define PIN_CS    8
#define PIN_DC    9
#define PIN_RESET 10
#define PIN_SDIN  11
#define PIN_SCLK  12

#include "simpleoled.h"
#include <Wire.h>

uint8_t oled_address = 0x3C;
uint8_t _row = 0;
uint8_t _column = 0;
uint8_t *current_font;

void clearScr()
{
	oledCMD(0x21); //set column start and end address
	oledCMD(0x00); //set column start address
	oledCMD(LCDWIDTH - 1); //set column end address

	oledCMD(0x22); //set row start and end address
	oledCMD(0x00); //set row start address
	oledCMD(LCDHEIGHT - 1); //set row end address

	for(int i=0; i<1024; i++) {
		Wire.beginTransmission(oled_address);
		Wire.write(SSD1306_DATA);
		Wire.write(0x00);
		Wire.endTransmission();
	}
}

void oledCMD(uint8_t data)
{
    Wire.beginTransmission(oled_address);
    Wire.write(SSD1306_CMD);
    Wire.write(data);
    Wire.endTransmission();
}

void oledWriteString(uint8_t col, uint8_t row, const char str[])
{
	oledCMD(SSD1306_COLUMNADDR); //set column start and end address
	oledCMD(col); //set column start address
	oledCMD(LCDWIDTH - 1); //set column end address

	oledCMD(SSD1306_PAGEADDR); //set row start and end address
	oledCMD(row); //set row start address
	oledCMD(row + FONT_HEIGHT - 1); //set row end address

	uint8_t size;
	uint8_t *char_idx;
	uint8_t pos = 0;

	for (int pos = 0; pos < strlen(str); pos++) {
		size = FONT_WEIGHT;
		if(str[pos] >= FONT_TABLE_START && str[pos] <= FONT_TABLE_END) {
			char_idx = FONT_DATA + (str[pos] - FONT_TABLE_START) * FONT_WEIGHT;
			do {
				Wire.beginTransmission(oled_address);
				Wire.write(SSD1306_DATA);
				Wire.write(pgm_read_byte(char_idx++));
				Wire.endTransmission();
			} while(--size);
		} else {
			do {
				Wire.beginTransmission(oled_address);
				Wire.write(SSD1306_DATA);
				Wire.write(0);
				Wire.endTransmission();
			} while(--size);
		}
	}
}

void oledDraw(uint8_t col, uint8_t row, uint8_t *image)
{
	oledCMD(SSD1306_COLUMNADDR); //set column start and end address
	oledCMD(col); //set column start address
	oledCMD(LCDWIDTH - 1); //set column end address

	oledCMD(SSD1306_PAGEADDR); //set row start and end address
	oledCMD(row); //set row start address
	oledCMD(row + *image - 1); //set row end address

	uint16_t size = *image * *(image + 1);
	uint8_t *char_idx = image + 2;
	while(size--) {
		Wire.beginTransmission(oled_address);
		Wire.write(SSD1306_DATA);
		Wire.write(pgm_read_byte(char_idx++));
		Wire.endTransmission();
	}
}

void oledInit()
{
	Wire.begin(oled_address);
	Wire.setClock(100000);

//	oledCMD(0x8d); //enable charge pump
//	oledCMD(0x14);
//	delay(1);
//	oledCMD(0xaf); //set display on
//	oledCMD(0xd3); //set display offset
//	oledCMD(0x00);
//	oledCMD(0x40); //set display start line
//	oledCMD(0xa1); //set segment re-map (horizontal flip) - reset value is 0xa0 (or 0xa1)
//	oledCMD(0xc8); //set COM output scan direction (vertical flip) - reset value is 0xc0 (or 0xc8)
//	oledCMD(0xda); //set COM pins hardware configuration
//	oledCMD(0x12); //reset value is 0x12
//	oledCMD(0x81); //set contrast (2-byte)
//	oledCMD(0x7f);
//	oledCMD(0x20); //set vertical addressing mode
//	oledCMD(0x01);

	oledCMD(SSD1306_DISPLAYOFF);                    // 0xAE

	oledCMD(SSD1306_SETMULTIPLEX);                  // 0xA8
	oledCMD(LCDHEIGHT - 1);

	oledCMD(SSD1306_SETDISPLAYOFFSET); //set display offset
	oledCMD(0x00);
	oledCMD(SSD1306_SETSTARTLINE | 0x0); //set display start line

	oledCMD(SSD1306_SEGREMAP | 0x1); //set segment re-map (horizontal flip) - reset value is 0xa0 (or 0xa1)
//	oledCMD(0xa1);

	oledCMD(SSD1306_COMSCANDEC); //set COM output scan direction (vertical flip) - reset value is 0xc0 (or 0xc8)

	oledCMD(SSD1306_SETCOMPINS); //set COM pins hardware configuration
	oledCMD(0x12); //reset value is 0x12

	oledCMD(SSD1306_SETCONTRAST); //set contrast (2-byte)
	oledCMD(0x5f);

	oledCMD(SSD1306_DISPLAYALLON_RESUME);           // 0xA4
	oledCMD(SSD1306_NORMALDISPLAY);                 // 0xA6

	oledCMD(SSD1306_SETDISPLAYCLOCKDIV);            // 0xD5
	oledCMD(0x80);                                  // the suggested ratio 0x80

	oledCMD(SSD1306_CHARGEPUMP); //enable charge pump
//	oledCMD(0x10);
	oledCMD(0x14);

	oledCMD(SSD1306_DISPLAYON);				//--turn on oled panel

	oledCMD(SSD1306_MEMORYMODE); //set vertical addressing mode
	oledCMD(0x01);

	oledCMD(SSD1306_SETPRECHARGE);
	oledCMD(0x22);
//	oledCMD(0xF1);
	oledCMD(SSD1306_SETVCOMDETECT);                 // 0xDB
	oledCMD(0x40);

	oledCMD(SSD1306_DEACTIVATE_SCROLL);

	clearScr();

//
	// Init sequence for 128x64 OLED module
//	oledCMD(SSD1306_DISPLAYOFF);                    // 0xAE
//	oledCMD(SSD1306_SETDISPLAYCLOCKDIV);            // 0xD5
//	oledCMD(0x80);                                  // the suggested ratio 0x80
//	oledCMD(SSD1306_SETMULTIPLEX);                  // 0xA8
//	oledCMD(0x3F);
//	oledCMD(SSD1306_SETDISPLAYOFFSET);              // 0xD3
//	oledCMD(0x0);                                   // no offset
//	oledCMD(SSD1306_SETSTARTLINE | 0x0);            // line #0
//	oledCMD(SSD1306_CHARGEPUMP);                    // 0x8D
//#ifdef SSD1306_EXTERNALVCC
//	oledCMD(0x10);
//#else
//	oledCMD(0x14);
//#endif
//	oledCMD(SSD1306_MEMORYMODE);                    // 0x20
//	oledCMD(0x01); 									//set vertical addressing mode
//	oledCMD(SSD1306_SEGREMAP | 0x1);
//	oledCMD(SSD1306_COMSCANDEC);
//	oledCMD(SSD1306_SETCOMPINS);                    // 0xDA
//	oledCMD(0x12);
//	oledCMD(SSD1306_SETCONTRAST);                   // 0x81
//#ifdef SSD1306_EXTERNALVCC
//	oledCMD(0x9F);
//#else
//	oledCMD(0xCF);
//#endif
//	oledCMD(SSD1306_SETPRECHARGE);                  // 0xd9
//#ifdef SSD1306_EXTERNALVCC
//	oledCMD(0x22);
//#else
//	oledCMD(0xF1);
//#endif
//	oledCMD(SSD1306_SETVCOMDETECT);                 // 0xDB
//	oledCMD(0x40);
//	oledCMD(SSD1306_DISPLAYALLON_RESUME);           // 0xA4
//	oledCMD(SSD1306_NORMALDISPLAY);                 // 0xA6
//	oledCMD(SSD1306_DISPLAYON);				//--turn on oled panel

}

