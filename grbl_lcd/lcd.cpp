
#include <LiquidCrystal.h>
#include "lcd.h"

//#ifdef __cplusplus
//extern "C" {
//#endif



// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
//const int rs = 22, en = 24, d4 = 26, d5 = 28, d6 = 30, d7 = 32;
//LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int rs = 52, rw = 50, en = 48, d4 = 46, d5 = 44, d6 = 42, d7 = 40;
LiquidCrystal lcd(rs, rw, en, d4, d5, d6, d7);


//extern "C"{
void setup_lcd() {
  lcd.begin(20, 4);
  
  lcd.setCursor(0, 1);
  lcd.print(000.00);
  lcd.setCursor(7, 1);
  lcd.print(000.00);
  lcd.setCursor(14, 1);
  lcd.print(000.00);
  
  
  lcd.setCursor(0, 3);
  lcd.print("STEP:");
  lcd.setCursor(11, 3);
  lcd.print("JOG:");
  lcd.setCursor(0, 0);
  lcd.print("******");
  lcd.setCursor(7, 0);
  lcd.print("F:");
  lcd.setCursor(14, 0);
  lcd.print("S:");
}

 void SetUpLCD()
{
	setup_lcd();
}

 void SetCursorLCD(uint8_t i, uint8_t r)
{
	lcd.setCursor(i, r);
}

void PrintComandLCD(char* st)
{
	 lcd.setCursor(0, 3);
     lcd.print("                   ");
     lcd.setCursor(0, 3);
     lcd.print(st);
}

 void PrintLCD(double pos)
{
	lcd.print(pos);
}

 void PrintFeedLCD(float f)
{
	lcd.setCursor(9, 0);
	lcd.print(f);
	lcd.setCursor(13, 0);
    lcd.print(" S:");
}


 void PrintPwmLCD(uint16_t f)
{
	lcd.setCursor(16, 0);
	lcd.print("    ");
	lcd.setCursor(16, 0);
    lcd.print(f);
}

 void PrintSpindleLCD(float f)
{
	lcd.setCursor(16, 0);
	lcd.print("    ");
	lcd.setCursor(16, 0);
    lcd.print(f);
}

 void PrintStatusLCD(char* st)
{
	lcd.setCursor(0, 0);
	lcd.print(st);
}

 void PrintPosLCD(float x, float y, float z)
{
	lcd.setCursor(0, 1);
	lcd.print(x);
	lcd.setCursor(7, 1);
	lcd.print(y);
	lcd.setCursor(14, 1);
	lcd.print(z);
}

 void PrintPosLCDX(float x)
{
	lcd.setCursor(0, 1);
	lcd.print(x);
}

 void PrintPosLCDY(float y)
{
	lcd.setCursor(7, 1);
	lcd.print(y);
}

 void PrintPosLCDZ(float z)
{
	lcd.setCursor(14, 1);
	lcd.print(z);
}

 void PrintWcoLCD(float x, float y, float z)
{
	lcd.setCursor(0, 2);
	lcd.print(x);
	lcd.setCursor(7, 2);
	lcd.print(y);
	lcd.setCursor(14, 2);
	lcd.print(z);
}

//}
/*
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

extern "C" void PrintFeedLCD(float f)
{
	lcd.setCursor(9, 0);
	lcd.print(f);
	lcd.setCursor(13, 0);
    lcd.print(" S:");
}


extern "C" void PrintPwmLCD(uint16_t f)
{
	lcd.setCursor(16, 0);
	lcd.print("    ");
    lcd.print(f);
}

extern "C" void PrintSpindleLCD(float f)
{
	lcd.setCursor(16, 0);
	lcd.print("    ");
    lcd.print(f);
}

extern "C" void PrintStatusLCD(char* st)
{
	lcd.setCursor(0, 0);
	lcd.print(st);
}

extern "C" void PrintPosLCD(float x, float y, float z)
{
	lcd.setCursor(0, 1);
	lcd.print(x);
	lcd.setCursor(7, 1);
	lcd.print(y);
	lcd.setCursor(14, 1);
	lcd.print(z);
}

extern "C" void PrintPosLCDX(float x)
{
	lcd.setCursor(0, 1);
	lcd.print(x);
}

extern "C" void PrintPosLCDY(float y)
{
	lcd.setCursor(7, 1);
	lcd.print(y);
}

extern "C" void PrintPosLCDZ(float z)
{
	lcd.setCursor(14, 1);
	lcd.print(z);
}

extern "C" void PrintWcoLCD(float x, float y, float z)
{
	lcd.setCursor(0, 2);
	lcd.print(x);
	lcd.setCursor(7, 2);
	lcd.print(y);
	lcd.setCursor(14, 2);
	lcd.print(z);
}
*/

//#ifdef __cplusplus
//}
//#endif
