#include <LiquidCrystal.h> 

LiquidCrystal lcd(6, 7, 5, 4, 3, 2); //lcd pins
int inputPin = 8; //button pin

void setup() {
    lcd.begin(16, 2); //lcd size
    pinMode(inputPin, INPUT);
}

void loop(){
  int button = digitalRead(inputPin); 

  char Str[4] = {'w', 'o', 'r', 'd'};
  
  if (button == HIGH){ 
    
    for(int i=0; i<= 4; i++){
      lcd.print(Str[i]); 
      delay(150); 
      }
    lcd.clear(); //clear screen when finished
  }
}
