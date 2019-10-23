/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>


int count = 0;

int e = 7;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Decimal: ");
  //
  lcd.setCursor(0, 1);
  //
  lcd.print("Binary: ");

  pinMode(e, INPUT);
}

void loop() {
  int button = digitalRead(e);

  lcd.setCursor(10,0);
  lcd.print(count);

  if(button == HIGH)
  {
    count++;
    lcd.setCursor(10,0);
    lcd.print(count);
    delay(500);
  }

  int result = 0;

  if(count == 0)
    result = 0;
  else if(count == 1)
    result = 1;
  else if(count == 2)
    result = 10;
  else if(count == 3)
    result = 11;  
  else if(count == 4)
    result = 100;
  else if(count == 5)
    result = 101;
  else if(count == 6)
    result = 110;
  else if(count == 7)
    result = 111;
  else if(count == 8)
    result = 1000;
  else if(count == 9)
    result = 1001;
  else if(count == 10)
    result = 1010;
  else if(count == 11)
    result = 1011;
  else if(count == 12)
    result = 1100;
  else if(count == 13)
    result = 1101;
  else if(count == 14)
    result = 1110;
  else if(count == 15)
    result = 1111;
  else if(count == 16)
    result = 10000;
  else if(count == 17)
    result = 10001;
  else if(count == 18)
    result = 10010;
  else if(count == 19)
    result = 10011;
  else if(count == 20)
    result = 10100;
  else if(count == 21)
    result = 10101;
  else if(count == 22)
    result = 10110;
  else if(count == 23)
    result = 10111;
  else if(count == 24)
    result = 11000;
  else if(count == 25)
    result = 11001;
  else if(count == 26)
    result = 11010;
  else if(count == 27)
    result = 11011;
  else if(count == 28)
    result = 11100;
  else if(count == 29)
    result = 11101;
  else if(count == 30)
    result = 11110;
  else if(count == 31)
    result = 11111;
    
  lcd.setCursor(10, 1);
  lcd.print(result);
  

  
}
