#ifndef lcd_h
#define lcd_h

#ifdef __cplusplus
    extern "C" {
#endif

void setup_lcd();

//extern "C" void SetUpLCD()
//{
	//void setup_lcd();
//}


/*
extern "C" {
void SetUpLCD();
void SetCursorLCD(uint8_t i, uint8_t r);
void PrintLCD(double pos);
void PrintFeedLCD(float f);
void PrintPwmLCD(uint16_t f);
void PrintSpindleLCD(float f);
void PrintStatusLCD(char* st);
void PrintPosLCD(float x, float y, float z);
void PrintPosLCDX(float x);
void PrintPosLCDY(float y);
void PrintPosLCDZ(float z);
void PrintWcoLCD(float x, float y, float z);
}
*/

/*
extern "C" void SetUpLCD();
extern "C" void SetCursorLCD(uint8_t i, uint8_t r);
extern "C" void PrintLCD(double pos);
extern "C" void PrintFeedLCD(float f);
extern "C" void PrintPwmLCD(uint16_t f);
extern "C" void PrintSpindleLCD(float f);
extern "C" void PrintStatusLCD(char* st);
extern "C" void PrintPosLCD(float x, float y, float z);
extern "C" void PrintPosLCDX(float x);
extern "C" void PrintPosLCDY(float y);
extern "C" void PrintPosLCDZ(float z);
extern "C" void PrintWcoLCD(float x, float y, float z);
*/

void SetUpLCD();
void SetCursorLCD(uint8_t i, uint8_t r);
void PrintLCD(double pos);
void PrintFeedLCD(float f);
void PrintPwmLCD(uint16_t f);
void PrintSpindleLCD(float f);
void PrintStatusLCD(char* st);
void PrintPosLCD(float x, float y, float z);
void PrintPosLCDX(float x);
void PrintPosLCDY(float y);
void PrintPosLCDZ(float z);
void PrintWcoLCD(float x, float y, float z);
void PrintComandLCD(char* st);
void PrintComandCountLCD(int cnt);
void PrintMillsLCD(int of, uint8_t cn);
void PrintXyzPinsLCD(int of, float f);
void PrintSfeedLCD(int f);

#ifdef __cplusplus
}
#endif

#endif
