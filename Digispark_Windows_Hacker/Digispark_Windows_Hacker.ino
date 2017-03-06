
#include "DigiKeyboard.h"

void setup() {
  
}

void loop() {
   DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT); //opens run
  DigiKeyboard.delay(500);
  DigiKeyboard.println("notepad"); //opens notepad
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cmd.exe");  //writes 
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_S , MOD_CONTROL_RIGHT); //saves
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cmd.bat"); //name of save
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_D , MOD_GUI_LEFT); //minimizes windows
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT); //opens run
  DigiKeyboard.delay(500);
  DigiKeyboard.println("C:/Users/Owner/Documents/cmd.bat"); //opens cmd prompt
  DigiKeyboard.delay(500);
  DigiKeyboard.println("color a");
  DigiKeyboard.delay(5000);
  
}
