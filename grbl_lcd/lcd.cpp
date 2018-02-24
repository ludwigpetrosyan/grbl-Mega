
#include <LiquidCrystal.h>
#include "lcd.h"
#include <math.h>
//#include <stdio.h>

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
  lcd.setCursor(14, 3);
  lcd.print("SF:");
  lcd.setCursor(0, 0);
  lcd.print("******");
  lcd.setCursor(7, 0);
  lcd.print("F:");
  lcd.setCursor(13, 0);
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


void PrintMillsLCD(int of, uint8_t cn)
{
	 char str[20];
	 
	 sprintf(str,"%-7d", cn);
	 lcd.setCursor(10+of, 3);
	 lcd.print(str);
     //lcd.print("   ");
     //lcd.setCursor(12+of, 3);
     //lcd.print(cn);
}

void PrintXyzPinsLCD(int of, float f)
{
	 lcd.setCursor(10+of, 3);
     //lcd.print("   ");
     //lcd.setCursor(12+of, 3);
     lcd.print(f);
}


void PrintComandLCD(char* st)
{
	 char str[20];
	 
	 sprintf(str,"%-6s", st);
	 lcd.setCursor(0, 3);
	 lcd.print(str);
     //lcd.print("            ");
     //lcd.setCursor(0, 3);
     //lcd.print(st);
}

void PrintComandCountLCD(int cnt)
{
    char str[7];
	 
    sprintf(str,"%-6d", cnt);
    lcd.setCursor(0, 3);
    lcd.print(str);
}

void PrintComandWcoLCD(float x, float y, float z)
{
    lcd.setCursor(0, 3);
    lcd.print(x);
    lcd.setCursor(3, 3);
    lcd.print(" ");
    lcd.setCursor(4, 3);
    lcd.print(y);
    lcd.setCursor(7, 3);
    lcd.print(" ");
    lcd.setCursor(8, 3);
    lcd.print(z);
}

void PrintFStepLCD(int idx){
    lcd.setCursor(9, 3);
    lcd.print("STP:");
    lcd.setCursor(10, 3);
    lcd.print(idx);
}

void PrintStepLCD(int idx)
{
    lcd.setCursor(0, 3);
    lcd.print("STP:");
    lcd.setCursor(4, 3);
    switch (idx){
        case 0:
            lcd.print("0.01");
            break;
        case 1:
            lcd.print("0.10");
            break;
        case 2:
            lcd.print("1.00");
            break;
    }
}

 void PrintLCD(double pos)
{
	lcd.print(pos);
}

 void PrintFeedLCD(float f)
{
	char str[20];
	
	sprintf(str,"F:%-3i", (int)f);
	
	//sprintf(str,"F:%f", f);
	lcd.setCursor(7, 0);
	
	lcd.print(str);
	//lcd.setCursor(9, 0);
	//lcd.print(f);
	lcd.setCursor(13, 0);
    lcd.print(" S:");
}


 void PrintPwmLCD(uint16_t f)
{
	char str[20];
	
	sprintf(str,"%-.4d", f);
	lcd.setCursor(16, 0);
	lcd.print(str);
	
	
	//lcd.print("    ");
	//lcd.setCursor(16, 0);
    //lcd.print(f);
}

 void PrintSpindleLCD(float f)
{
	char str[420];
	
	sprintf(str,"%-4i", (int)f);
	lcd.setCursor(16, 0);
	lcd.print(str);
	//lcd.print("    ");
	//lcd.setCursor(16, 0);
    //lcd.print(f);
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
	lcd.setCursor(19, 1);
	lcd.print("W");
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
	lcd.setCursor(19, 2);
	lcd.print("M");
}

void PrintSfeedLCD(int f)
{
	char str[20];
	
	sprintf(str,"%-.3d", f);
	lcd.setCursor(17, 3);
	lcd.print(str);
	
	
	//lcd.print("    ");
	//lcd.setCursor(16, 0);
    //lcd.print(f);
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
