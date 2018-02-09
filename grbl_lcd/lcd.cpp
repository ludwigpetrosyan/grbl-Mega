
#include <LiquidCrystal.h>
#include "lcd.h"

//#ifdef __cplusplus
//extern "C" {
//#endif



// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 22, en = 24, d4 = 26, d5 = 28, d6 = 30, d7 = 32;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup_lcd() {
  // set up the LCD's number of columns and rows:
  lcd.begin(20, 4);
  // Print a message to the LCD.
  //lcd.print("MXYZ:");
  //lcd.setCursor(0, 1);
  //lcd.print("WXYZ:");
  
  lcd.setCursor(0, 0);
  lcd.print(000.00);
  lcd.setCursor(7, 0);
  lcd.print(000.00);
  lcd.setCursor(14, 0);
  lcd.print(000.00);
  
  //lcd.setCursor(0, 1);
  //lcd.print(000.00);
  //lcd.setCursor(7, 1);
  //lcd.print(000.00);
  //lcd.setCursor(14, 1);
  //lcd.print(000.00);
  
  lcd.setCursor(0, 2);
  lcd.print("STEP:");
  lcd.setCursor(10, 2);
  lcd.print("JOG:");
  lcd.setCursor(0, 3);
  lcd.print("hello,CNC!");
}

extern "C" void SetUpLCD()
{
	setup_lcd();
}

extern "C" void SetCursorLCD(uint8_t i, uint8_t r)
{
	lcd.setCursor(i, r);
}

extern "C" void PrintLCD(double pos)
{
	lcd.print(pos);
}

extern "C" void PrintPosLCD(float x, float y, float z)
{
	lcd.setCursor(0, 0);
	lcd.print(x);
	lcd.setCursor(7, 0);
	lcd.print(y);
	lcd.setCursor(14, 0);
	lcd.print(z);
}

extern "C" void PrintWcoLCD(float x, float y, float z)
{
	lcd.setCursor(0, 1);
	lcd.print(x);
	lcd.setCursor(7, 1);
	lcd.print(y);
	lcd.setCursor(14, 1);
	lcd.print(z);
}


//#ifdef __cplusplus
//}
//#endif
