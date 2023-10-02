#include "mbed.h"                       //Imports mbed libraries
#include "C12832.h"                     //Imports the library for the LCD screen

C12832 lcd(D11, D13, D12, D7, D10);     //Creates an LCD Object from the LCD library 

int main() {

    lcd.cls();                          //Clear the screen
    lcd.locate(20,0);                   //Locate at (20,0)
    lcd.printf("eee.manchester.ac.uk"); //Print text
    
    lcd.rect (32,10,96,30,1);           //Draw a rectangle from (32,10) to (96,30)
    lcd.locate(36,12);                  //Locate at (36,12)
    lcd.printf("MANCHEstER");           //Print text
    lcd.locate(64,20);                  //Locate at (64,20)
    lcd.printf("1824");                 //Print text
    
    while(1) {

    }
}