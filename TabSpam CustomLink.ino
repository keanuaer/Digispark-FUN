#include "DigiKeyboard.h"
void setup() {
}

//Loop Effect - Script will restart unlimited

void loop() {
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("YOURLINKHEREEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(20);
}
