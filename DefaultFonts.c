#ifndef DEFAULTFONTS_H
#define DEFAULTFONTS_H
#include <avr/pgmspace.h>

const uint8_t SmallFont[] PROGMEM =
{
0x01, 0x06, 0x20, 0x7f,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // sp
0x00, 0x00, 0x00, 0x2f, 0x00, 0x00,   // !
0x00, 0x00, 0x07, 0x00, 0x07, 0x00,   // "
0x00, 0x14, 0x7f, 0x14, 0x7f, 0x14,   // #
0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12,   // $
0x00, 0x23, 0x13, 0x08, 0x64, 0x62,   // %
0x00, 0x36, 0x49, 0x55, 0x22, 0x50,   // &
0x00, 0x00, 0x05, 0x03, 0x00, 0x00,   // '
0x00, 0x00, 0x1c, 0x22, 0x41, 0x00,   // (
0x00, 0x00, 0x41, 0x22, 0x1c, 0x00,   // )
0x00, 0x14, 0x08, 0x3E, 0x08, 0x14,   // *
0x00, 0x08, 0x08, 0x3E, 0x08, 0x08,   // +
0x00, 0x00, 0x00, 0xA0, 0x60, 0x00,   // ,
0x00, 0x08, 0x08, 0x08, 0x08, 0x08,   // -
0x00, 0x00, 0x60, 0x60, 0x00, 0x00,   // .
0x00, 0x20, 0x10, 0x08, 0x04, 0x02,   // /

0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E,   // 0
0x00, 0x00, 0x42, 0x7F, 0x40, 0x00,   // 1
0x00, 0x42, 0x61, 0x51, 0x49, 0x46,   // 2
0x00, 0x21, 0x41, 0x45, 0x4B, 0x31,   // 3
0x00, 0x18, 0x14, 0x12, 0x7F, 0x10,   // 4
0x00, 0x27, 0x45, 0x45, 0x45, 0x39,   // 5
0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30,   // 6
0x00, 0x01, 0x71, 0x09, 0x05, 0x03,   // 7
0x00, 0x36, 0x49, 0x49, 0x49, 0x36,   // 8
0x00, 0x06, 0x49, 0x49, 0x29, 0x1E,   // 9
0x00, 0x00, 0x36, 0x36, 0x00, 0x00,   // :
0x00, 0x00, 0x56, 0x36, 0x00, 0x00,   // ;
0x00, 0x08, 0x14, 0x22, 0x41, 0x00,   // <
0x00, 0x14, 0x14, 0x14, 0x14, 0x14,   // =
0x00, 0x00, 0x41, 0x22, 0x14, 0x08,   // >
0x00, 0x02, 0x01, 0x51, 0x09, 0x06,   // ?

0x00, 0x32, 0x49, 0x59, 0x51, 0x3E,   // @
0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C,   // A
0x00, 0x7F, 0x49, 0x49, 0x49, 0x36,   // B
0x00, 0x3E, 0x41, 0x41, 0x41, 0x22,   // C
0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C,   // D
0x00, 0x7F, 0x49, 0x49, 0x49, 0x41,   // E
0x00, 0x7F, 0x09, 0x09, 0x09, 0x01,   // F
0x00, 0x3E, 0x41, 0x49, 0x49, 0x7A,   // G
0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F,   // H
0x00, 0x00, 0x41, 0x7F, 0x41, 0x00,   // I
0x00, 0x20, 0x40, 0x41, 0x3F, 0x01,   // J
0x00, 0x7F, 0x08, 0x14, 0x22, 0x41,   // K
0x00, 0x7F, 0x40, 0x40, 0x40, 0x40,   // L
0x00, 0x7F, 0x02, 0x0C, 0x02, 0x7F,   // M
0x00, 0x7F, 0x04, 0x08, 0x10, 0x7F,   // N
0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E,   // O

0x00, 0x7F, 0x09, 0x09, 0x09, 0x06,   // P
0x00, 0x3E, 0x41, 0x51, 0x21, 0x5E,   // Q
0x00, 0x7F, 0x09, 0x19, 0x29, 0x46,   // R
0x00, 0x46, 0x49, 0x49, 0x49, 0x31,   // S
0x00, 0x01, 0x01, 0x7F, 0x01, 0x01,   // T
0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F,   // U
0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F,   // V
0x00, 0x3F, 0x40, 0x38, 0x40, 0x3F,   // W
0x00, 0x63, 0x14, 0x08, 0x14, 0x63,   // X
0x00, 0x07, 0x08, 0x70, 0x08, 0x07,   // Y
0x00, 0x61, 0x51, 0x49, 0x45, 0x43,   // Z
0x00, 0x00, 0x7F, 0x41, 0x41, 0x00,   // [
0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55,   // Backslash (Checker pattern)
0x00, 0x00, 0x41, 0x41, 0x7F, 0x00,   // ]
0x00, 0x04, 0x02, 0x01, 0x02, 0x04,   // ^
0x00, 0x40, 0x40, 0x40, 0x40, 0x40,   // _

0x00, 0x00, 0x03, 0x05, 0x00, 0x00,   // `
0x00, 0x20, 0x54, 0x54, 0x54, 0x78,   // a
0x00, 0x7F, 0x48, 0x44, 0x44, 0x38,   // b
0x00, 0x38, 0x44, 0x44, 0x44, 0x20,   // c
0x00, 0x38, 0x44, 0x44, 0x48, 0x7F,   // d
0x00, 0x38, 0x54, 0x54, 0x54, 0x18,   // e
0x00, 0x08, 0x7E, 0x09, 0x01, 0x02,   // f
0x00, 0x18, 0xA4, 0xA4, 0xA4, 0x7C,   // g
0x00, 0x7F, 0x08, 0x04, 0x04, 0x78,   // h
0x00, 0x00, 0x44, 0x7D, 0x40, 0x00,   // i
0x00, 0x40, 0x80, 0x84, 0x7D, 0x00,   // j
0x00, 0x7F, 0x10, 0x28, 0x44, 0x00,   // k
0x00, 0x00, 0x41, 0x7F, 0x40, 0x00,   // l
0x00, 0x7C, 0x04, 0x18, 0x04, 0x78,   // m
0x00, 0x7C, 0x08, 0x04, 0x04, 0x78,   // n
0x00, 0x38, 0x44, 0x44, 0x44, 0x38,   // o

0x00, 0xFC, 0x24, 0x24, 0x24, 0x18,   // p
0x00, 0x18, 0x24, 0x24, 0x18, 0xFC,   // q
0x00, 0x7C, 0x08, 0x04, 0x04, 0x08,   // r
0x00, 0x48, 0x54, 0x54, 0x54, 0x20,   // s
0x00, 0x04, 0x3F, 0x44, 0x40, 0x20,   // t
0x00, 0x3C, 0x40, 0x40, 0x20, 0x7C,   // u
0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C,   // v
0x00, 0x3C, 0x40, 0x30, 0x40, 0x3C,   // w
0x00, 0x44, 0x28, 0x10, 0x28, 0x44,   // x
0x00, 0x1C, 0xA0, 0xA0, 0xA0, 0x7C,   // y
0x00, 0x44, 0x64, 0x54, 0x4C, 0x44,   // z
0x00, 0x00, 0x10, 0x7C, 0x82, 0x00,   // {
0x00, 0x00, 0x00, 0xFF, 0x00, 0x00,   // |
0x00, 0x00, 0x82, 0x7C, 0x10, 0x00,   // }
0x00, 0x00, 0x06, 0x09, 0x09, 0x06    // ~ (Degrees)
};

const uint8_t font8x16_terminal[] PROGMEM =
{
0x02, 0x10, 0x20, 0x7f,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,// sp
0x00,0x00,0x00,0x00,0x7C,0x00,0xFE,0x1B,0xFE,0x1B,0x7C,0x00,0x00,0x00,0x00,0x00,// !
0x00,0x00,0x0E,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x0E,0x00,0x00,0x00,// "
0x20,0x01,0xFC,0x0F,0xFC,0x0F,0x20,0x01,0x20,0x01,0xFC,0x0F,0xFC,0x0F,0x20,0x01,// #
0x38,0x06,0x7C,0x0C,0x44,0x08,0xFF,0x3F,0xFF,0x3F,0x84,0x08,0x8C,0x0F,0x18,0x07,// $
0x1C,0x18,0x14,0x1E,0x9C,0x07,0xE0,0x01,0x78,0x1C,0x1E,0x14,0x06,0x1C,0x00,0x00,// %
0xBC,0x1F,0xFE,0x10,0x42,0x10,0xC2,0x10,0xFE,0x1F,0x3C,0x0F,0x80,0x19,0x80,0x10,// &
0x00,0x00,0x00,0x00,0x10,0x00,0x1E,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,// '
0x00,0x00,0x00,0x00,0xF0,0x07,0xFC,0x1F,0x0E,0x38,0x02,0x20,0x00,0x00,0x00,0x00,// (
0x00,0x00,0x00,0x00,0x02,0x20,0x0E,0x38,0xFC,0x1F,0xF0,0x07,0x00,0x00,0x00,0x00,// )
0x80,0x00,0xA0,0x02,0xE0,0x03,0xC0,0x01,0xC0,0x01,0xE0,0x03,0xA0,0x02,0x80,0x00,// *
0x80,0x00,0x80,0x00,0x80,0x00,0xE0,0x03,0xE0,0x03,0x80,0x00,0x80,0x00,0x80,0x00,// +
0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x78,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,// ,
0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,// -
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,// .
0x00,0x18,0x00,0x1E,0x80,0x07,0xE0,0x01,0x78,0x00,0x1E,0x00,0x06,0x00,0x00,0x00,// /
0xF8,0x07,0xFC,0x0F,0x06,0x18,0xC2,0x10,0xC2,0x10,0x06,0x18,0xFC,0x0F,0xF8,0x07,// 0
0x00,0x00,0x08,0x10,0x0C,0x10,0xFE,0x1F,0xFE,0x1F,0x00,0x10,0x00,0x10,0x00,0x00,// 1
0x04,0x1C,0x06,0x1E,0x02,0x13,0x82,0x11,0xC2,0x10,0x62,0x10,0x3E,0x18,0x1C,0x18,// 2
0x04,0x08,0x06,0x18,0x02,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0xFE,0x1F,0xBC,0x0F,// 3
0xC0,0x01,0xE0,0x01,0x30,0x01,0x18,0x01,0x0C,0x11,0xFE,0x1F,0xFE,0x1F,0x00,0x11,// 4
0x7E,0x08,0x7E,0x18,0x42,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0xC2,0x1F,0x82,0x0F,// 5
0xF8,0x0F,0xFC,0x1F,0x46,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0xC0,0x1F,0x80,0x0F,// 6
0x06,0x00,0x06,0x00,0x02,0x00,0x02,0x1F,0xC2,0x1F,0xF2,0x00,0x3E,0x00,0x0E,0x00,// 7
0xBC,0x0F,0xFE,0x1F,0x42,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0xFE,0x1F,0xBC,0x0F,// 8
0x3C,0x00,0x7E,0x10,0x42,0x10,0x42,0x10,0x42,0x10,0x42,0x18,0xFE,0x0F,0xFC,0x07,// 9
0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x0C,0x30,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,// :
0x00,0x00,0x00,0x00,0x00,0x20,0x60,0x3C,0x60,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,// ;
0x80,0x00,0xC0,0x01,0x60,0x03,0x30,0x06,0x18,0x0C,0x0C,0x18,0x04,0x10,0x00,0x00,// <
0x40,0x02,0x40,0x02,0x40,0x02,0x40,0x02,0x40,0x02,0x40,0x02,0x40,0x02,0x40,0x02,// =
0x04,0x10,0x0C,0x18,0x18,0x0C,0x30,0x06,0x60,0x03,0xC0,0x01,0x80,0x00,0x00,0x00,// >
0x04,0x00,0x06,0x00,0x02,0x00,0x82,0x1B,0xC2,0x1B,0x62,0x00,0x3E,0x00,0x1C,0x00,// ?
0xFC,0x0F,0xFE,0x1F,0x02,0x10,0x82,0x11,0xC2,0x13,0xE2,0x13,0xFE,0x13,0xFC,0x03,// @
0xF0,0x1F,0xF8,0x1F,0x0C,0x01,0x06,0x01,0x06,0x01,0x0C,0x01,0xF8,0x1F,0xF0,0x1F,// A
0x02,0x10,0xFE,0x1F,0xFE,0x1F,0x42,0x10,0x42,0x10,0x42,0x10,0xFE,0x1F,0xBC,0x0F,// B
0xF8,0x07,0xFC,0x0F,0x06,0x18,0x02,0x10,0x02,0x10,0x02,0x10,0x06,0x18,0x0C,0x0C,// C
0x02,0x10,0xFE,0x1F,0xFE,0x1F,0x02,0x10,0x02,0x10,0x06,0x18,0xFC,0x0F,0xF8,0x07,// D
0x02,0x10,0xFE,0x1F,0xFE,0x1F,0x42,0x10,0x42,0x10,0xE2,0x10,0x06,0x18,0x06,0x18,// E
0x02,0x10,0xFE,0x1F,0xFE,0x1F,0x42,0x10,0x42,0x00,0xE2,0x00,0x06,0x00,0x06,0x00,// F
0xF8,0x07,0xFC,0x0F,0x06,0x18,0x02,0x10,0x82,0x10,0x82,0x10,0x86,0x0F,0x8C,0x1F,// G
0xFE,0x1F,0xFE,0x1F,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0xFE,0x1F,0xFE,0x1F,// H
0x00,0x00,0x02,0x10,0x02,0x10,0xFE,0x1F,0xFE,0x1F,0x02,0x10,0x02,0x10,0x00,0x00,// I
0x00,0x0C,0x00,0x1C,0x00,0x10,0x00,0x10,0x02,0x10,0xFE,0x1F,0xFE,0x0F,0x02,0x00,// J
0x02,0x10,0xFE,0x1F,0xFE,0x1F,0xE0,0x00,0xB0,0x01,0x18,0x03,0x0E,0x1E,0x06,0x1C,// K
0x02,0x10,0xFE,0x1F,0xFE,0x1F,0x02,0x10,0x00,0x10,0x00,0x10,0x00,0x18,0x00,0x18,// L
0xFE,0x1F,0xFE,0x1F,0x18,0x00,0xF0,0x00,0xF0,0x00,0x18,0x00,0xFE,0x1F,0xFE,0x1F,// M
0xFE,0x1F,0xFE,0x1F,0x38,0x00,0x70,0x00,0xE0,0x00,0xC0,0x01,0xFE,0x1F,0xFE,0x1F,// N
0xFC,0x0F,0xFE,0x1F,0x02,0x10,0x02,0x10,0x02,0x10,0x02,0x10,0xFE,0x1F,0xFC,0x0F,// O
0x02,0x10,0xFE,0x1F,0xFE,0x1F,0x42,0x10,0x42,0x00,0x42,0x00,0x7E,0x00,0x3C,0x00,// P
0xFC,0x0F,0xFE,0x1F,0x02,0x10,0x02,0x1C,0x02,0x38,0x02,0x70,0xFE,0x5F,0xFC,0x0F,// Q
0x02,0x10,0xFE,0x1F,0xFE,0x1F,0x42,0x00,0x42,0x00,0xC2,0x00,0xFE,0x1F,0x3C,0x1F,// R
0x1C,0x0C,0x3E,0x1C,0x62,0x10,0x42,0x10,0x42,0x10,0xC2,0x10,0x8E,0x1F,0x0C,0x0F,// S
0x06,0x00,0x06,0x00,0x02,0x10,0xFE,0x1F,0xFE,0x1F,0x02,0x10,0x06,0x00,0x06,0x00,// T
0xFE,0x0F,0xFE,0x1F,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0xFE,0x1F,0xFE,0x0F,// U
0xFE,0x03,0xFE,0x07,0x00,0x0C,0x00,0x18,0x00,0x18,0x00,0x0C,0xFE,0x07,0xFE,0x03,// V
0xFE,0x07,0xFE,0x1F,0x00,0x1C,0xC0,0x07,0xC0,0x07,0x00,0x1C,0xFE,0x1F,0xFE,0x07,// W
0x0E,0x1C,0x1E,0x1E,0x30,0x03,0xE0,0x01,0xE0,0x01,0x30,0x03,0x1E,0x1E,0x0E,0x1C,// X
0x1E,0x00,0x3E,0x00,0x60,0x10,0xC0,0x1F,0xC0,0x1F,0x60,0x10,0x3E,0x00,0x1E,0x00,// Y
0x06,0x1E,0x06,0x1F,0x82,0x11,0xC2,0x10,0x62,0x10,0x32,0x10,0x1E,0x18,0x0E,0x18,// Z
0x00,0x00,0x00,0x00,0xFE,0x1F,0xFE,0x1F,0x02,0x10,0x02,0x10,0x00,0x00,0x00,0x00,// [
0x00,0x18,0x00,0x1E,0x80,0x07,0xE0,0x01,0x78,0x00,0x1E,0x00,0x06,0x00,0x00,0x00,// /
0x00,0x00,0x00,0x00,0x02,0x10,0x02,0x10,0xFE,0x1F,0xFE,0x1F,0x00,0x00,0x00,0x00,// ]
0x20,0x00,0x30,0x00,0x18,0x00,0x0C,0x00,0x18,0x00,0x30,0x00,0x20,0x00,0x00,0x00,// ^
0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,// _
0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x78,0x00,0x40,0x00,0x00,0x00,0x00,0x00,// `
0x00,0x0E,0x20,0x1F,0x20,0x11,0x20,0x11,0x20,0x11,0xE0,0x0F,0xC0,0x1F,0x00,0x10,// a
0x02,0x10,0xFE,0x1F,0xFE,0x0F,0x20,0x10,0x20,0x10,0x60,0x10,0xC0,0x1F,0x80,0x0F,// b
0xC0,0x0F,0xE0,0x1F,0x20,0x10,0x20,0x10,0x20,0x10,0x20,0x10,0x60,0x18,0x40,0x08,// c
0x80,0x0F,0xC0,0x1F,0x60,0x10,0x20,0x10,0x22,0x10,0xFE,0x0F,0xFE,0x1F,0x00,0x10,// d
0xC0,0x0F,0xE0,0x1F,0x20,0x11,0x20,0x11,0x20,0x11,0x20,0x11,0xE0,0x19,0xC0,0x09,// e
0x00,0x00,0x20,0x10,0xFC,0x1F,0xFE,0x1F,0x22,0x10,0x22,0x00,0x06,0x00,0x04,0x00,// f
0xC0,0x4F,0xE0,0xDF,0x20,0x90,0x20,0x90,0x20,0x90,0xC0,0xFF,0xE0,0x7F,0x20,0x00,// g
0x02,0x10,0xFE,0x1F,0xFE,0x1F,0x40,0x00,0x20,0x00,0x20,0x00,0xE0,0x1F,0xC0,0x1F,// h
0x00,0x00,0x20,0x10,0x20,0x10,0xEC,0x1F,0xEC,0x1F,0x00,0x10,0x00,0x10,0x00,0x00,// i
0x00,0x60,0x00,0xC0,0x20,0x80,0x20,0x80,0xEC,0xFF,0xEC,0x7F,0x00,0x00,0x00,0x00,// j
0x02,0x10,0xFE,0x1F,0xFE,0x1F,0x80,0x01,0x80,0x03,0xC0,0x06,0x60,0x1C,0x20,0x18,// k
0x00,0x00,0x02,0x10,0x02,0x10,0xFE,0x1F,0xFE,0x1F,0x00,0x10,0x00,0x10,0x00,0x00,// l
0xE0,0x1F,0xE0,0x1F,0x60,0x00,0xC0,0x0F,0xC0,0x0F,0x60,0x00,0xE0,0x1F,0xC0,0x1F,// m
0x20,0x00,0xE0,0x1F,0xC0,0x1F,0x20,0x00,0x20,0x00,0x20,0x00,0xE0,0x1F,0xC0,0x1F,// n
0xC0,0x0F,0xE0,0x1F,0x20,0x10,0x20,0x10,0x20,0x10,0x20,0x10,0xE0,0x1F,0xC0,0x0F,// o
0x20,0x80,0xE0,0xFF,0xC0,0xFF,0x20,0x90,0x20,0x10,0x20,0x10,0xE0,0x1F,0xC0,0x0F,// p
0xC0,0x0F,0xE0,0x1F,0x20,0x10,0x20,0x10,0x20,0x90,0xC0,0xFF,0xE0,0xFF,0x20,0x80,// q
0x20,0x10,0xE0,0x1F,0xC0,0x1F,0x60,0x10,0x20,0x00,0x20,0x00,0x60,0x00,0x40,0x00,// r
0xC0,0x08,0xE0,0x19,0x20,0x11,0x20,0x11,0x20,0x13,0x20,0x12,0x60,0x1E,0x40,0x0C,// s
0x20,0x00,0x20,0x00,0xFC,0x0F,0xFE,0x1F,0x20,0x10,0x20,0x18,0x00,0x08,0x00,0x00,// t
0xE0,0x0F,0xE0,0x1F,0x00,0x10,0x00,0x10,0x00,0x10,0xE0,0x0F,0xE0,0x1F,0x00,0x10,// u
0xE0,0x03,0xE0,0x07,0x00,0x0C,0x00,0x18,0x00,0x18,0x00,0x0C,0xE0,0x07,0xE0,0x03,// v
0xE0,0x0F,0xE0,0x1F,0x00,0x18,0x00,0x0F,0x00,0x0F,0x00,0x18,0xE0,0x1F,0xE0,0x0F,// w
0x20,0x10,0x60,0x18,0xC0,0x0C,0x80,0x07,0x80,0x07,0xC0,0x0C,0x60,0x18,0x20,0x10,// x
0xE0,0x8F,0xE0,0x9F,0x00,0x90,0x00,0x90,0x00,0x90,0x00,0xD0,0xE0,0x7F,0xE0,0x3F,// y
0x60,0x18,0x60,0x1C,0x20,0x16,0x20,0x13,0xA0,0x11,0xE0,0x10,0x60,0x18,0x20,0x18,// z
0x00,0x00,0x00,0x00,0x80,0x00,0xFC,0x1F,0x7E,0x3F,0x02,0x20,0x02,0x20,0x00,0x00,// {
0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x3E,0x7C,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,// |
0x00,0x00,0x02,0x20,0x02,0x20,0x7E,0x3F,0xFC,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,// }
};

const uint8_t digits14x24[] PROGMEM = {
0x03, 0x2a, 0x2d, 0x39,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // "-"
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // "."
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x0e, 0x00, 0x80, 0x0f, 0x00, 0xc0, 0x07, 0x00, 0xf0, 0x01, 0x00, 0x7c, 0x00, 0x00, 0x1f, 0x00, 0xc0, 0x07, 0x00, 0xf0, 0x01, 0x00, 0xf8, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,  // "/"
0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xc0, 0xff, 0x03, 0xe0, 0xff, 0x07, 0xf0, 0x00, 0x0f, 0x30, 0x1c, 0x0c, 0x30, 0x1c, 0x0c, 0x30, 0x1c, 0x0c, 0xf0, 0x00, 0x0f, 0xe0, 0xff, 0x07, 0xc0, 0xff, 0x03, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // "0"
0x00, 0x00, 0x00, 0x80, 0x01, 0x0c, 0x80, 0x01, 0x0c, 0xc0, 0x01, 0x0c, 0xc0, 0x00, 0x0c, 0x60, 0x00, 0x0c, 0xf0, 0xff, 0x0f, 0xf0, 0xff, 0x0f, 0xf0, 0xff, 0x0f, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,  // "1"
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x0e, 0xe0, 0x80, 0x0f, 0xf0, 0xc0, 0x0f, 0x70, 0xe0, 0x0d, 0x30, 0xf0, 0x0c, 0x30, 0x78, 0x0c, 0x70, 0x3c, 0x0c, 0xe0, 0x1f, 0x0c, 0xe0, 0x0f, 0x0c, 0xc0, 0x07, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // "2"
0x00, 0x00, 0x00, 0xc0, 0x00, 0x03, 0xe0, 0x00, 0x07, 0xe0, 0x00, 0x07, 0x70, 0x00, 0x0e, 0x30, 0x18, 0x0c, 0x30, 0x18, 0x0c, 0x30, 0x18, 0x0c, 0x70, 0x3c, 0x0e, 0xe0, 0xff, 0x07, 0xe0, 0xe7, 0x07, 0xc0, 0xc3, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // "3"
0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xde, 0x00, 0x80, 0xc7, 0x00, 0xe0, 0xc3, 0x00, 0xf0, 0xc0, 0x00, 0xf0, 0xff, 0x0f, 0xf0, 0xff, 0x0f, 0xf0, 0xff, 0x0f, 0x00, 0xc0, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00,  // "4"
0x00, 0x00, 0x00, 0xe0, 0x0f, 0x03, 0xf0, 0x0f, 0x07, 0xf0, 0x0f, 0x07, 0x30, 0x0c, 0x0e, 0x30, 0x06, 0x0c, 0x30, 0x06, 0x0c, 0x30, 0x06, 0x0c, 0x30, 0x0e, 0x0e, 0x30, 0xfc, 0x07, 0x30, 0xfc, 0x03, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // "5"
0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xc0, 0xff, 0x03, 0xe0, 0xff, 0x07, 0xf0, 0x18, 0x0e, 0x30, 0x0c, 0x0c, 0x30, 0x0c, 0x0c, 0x30, 0x0c, 0x0c, 0x70, 0x1c, 0x0e, 0xf0, 0xfc, 0x07, 0xe0, 0xf8, 0x07, 0xc0, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // "6"
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x0f, 0x30, 0xf0, 0x0f, 0x30, 0xfc, 0x0f, 0x30, 0xff, 0x00, 0xb0, 0x1f, 0x00, 0xf0, 0x03, 0x00, 0xf0, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // "7"
0x00, 0x00, 0x00, 0xc0, 0xc3, 0x03, 0xe0, 0xe7, 0x07, 0xe0, 0xff, 0x07, 0x70, 0x3c, 0x0e, 0x30, 0x18, 0x0c, 0x30, 0x18, 0x0c, 0x30, 0x18, 0x0c, 0x70, 0x3c, 0x0e, 0xe0, 0xff, 0x07, 0xe0, 0xe7, 0x07, 0xc0, 0xc3, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // "8"
0x00, 0x00, 0x00, 0x80, 0x0f, 0x03, 0xe0, 0x3f, 0x07, 0xe0, 0x3f, 0x0f, 0x70, 0x70, 0x0e, 0x30, 0x60, 0x0c, 0x30, 0x60, 0x0c, 0x30, 0x60, 0x0c, 0xf0, 0x30, 0x06, 0xe0, 0xff, 0x07, 0xc0, 0xff, 0x03, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // "9"
};

const uint8_t hass64x64[] PROGMEM = {
0x08, 0x40,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xf0, 0x07, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xf8, 0x07, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x1f, 0x00,
0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x1f, 0x00,
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x1f, 0x00,
0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x1f, 0x00,
0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x1f, 0x00,
0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 0x00,
0x00, 0x00, 0xf0, 0xff, 0xe7, 0xff, 0x1f, 0x00,
0x00, 0x00, 0xf8, 0xf8, 0xdb, 0xf1, 0x1f, 0x00,
0x00, 0x00, 0xfc, 0x02, 0xc7, 0xf5, 0x18, 0x00,
0x00, 0x00, 0xfe, 0x78, 0xe6, 0x71, 0x1a, 0x00,
0x00, 0x00, 0xff, 0xff, 0xe4, 0xef, 0x18, 0x00,
0x00, 0x80, 0xff, 0xff, 0xe1, 0xdf, 0x1d, 0x00,
0x00, 0xc0, 0xff, 0x1f, 0xe3, 0xbf, 0x1d, 0x00,
0x00, 0xe0, 0xbf, 0x5f, 0xe0, 0x77, 0x1d, 0x00,
0x00, 0xf0, 0x5f, 0x1f, 0xcf, 0xeb, 0x1c, 0x00,
0x00, 0xf8, 0x5f, 0xff, 0x9f, 0x0b, 0x1c, 0x00,
0x00, 0xfc, 0x1f, 0xfe, 0x3f, 0xe3, 0x1b, 0x00,
0x00, 0xfe, 0xff, 0xfc, 0x7f, 0xfe, 0x17, 0x00,
0x00, 0xff, 0xff, 0xf9, 0xff, 0xfc, 0x2f, 0x00,
0x00, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00,
0x00, 0xfe, 0xff, 0xfd, 0xff, 0x9f, 0x07, 0x00,
0x00, 0xfc, 0xff, 0xfe, 0xff, 0xcf, 0x13, 0x00,
0x00, 0xf8, 0x1f, 0xff, 0xcf, 0xe7, 0x19, 0x00,
0x00, 0xf0, 0x5f, 0x1f, 0x37, 0xf0, 0x1d, 0x00,
0x00, 0xe0, 0x1f, 0x5f, 0x87, 0xf9, 0x1d, 0x00,
0x00, 0xc0, 0xff, 0x1f, 0xfe, 0xf8, 0x1d, 0x00,
0x00, 0x80, 0xff, 0xff, 0x7c, 0xfa, 0x1d, 0x00,
0x00, 0x00, 0xff, 0xf8, 0x39, 0xfb, 0x1d, 0x00,
0x00, 0x00, 0xfe, 0x02, 0x80, 0xfb, 0x18, 0x00,
0x00, 0x00, 0xfc, 0xf8, 0xfd, 0xfb, 0x1b, 0x00,
0x00, 0x00, 0xf8, 0xff, 0xfe, 0xfb, 0x1c, 0x00,
0x00, 0x00, 0xf0, 0x1f, 0xff, 0xf1, 0x1f, 0x00,
0x00, 0x00, 0xe0, 0x5f, 0xff, 0xed, 0x1f, 0x00,
0x00, 0x00, 0xfc, 0x1f, 0xff, 0xf1, 0x1f, 0x00,
0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x1f, 0x00,
0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x1f, 0x00,
0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x1f, 0x00,
0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x1f, 0x00,
0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0x1f, 0x00,
0x00, 0x00, 0x00, 0xf0, 0x07, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#endif //DEFAULTFONTS_H
