# esp32

A collection of [ESP32-Feather](https://learn.adafruit.com/adafruit-huzzah32-esp32-feather) based projects.

## 1. How to start with Arduino IDE

There are couple ways to develop ESP32 but Arduino based project is easier to start.

### 1.1 Links

- [General info](https://learn.adafruit.com/adafruit-huzzah32-esp32-feather)
- [How to use ESP32 with Arduino IDE](https://learn.adafruit.com/adafruit-huzzah32-esp32-feather?view=all#using-with-arduino-ide)
- [Arduino IDE + ESP32 (1)](https://github.com/espressif/arduino-esp32)
- [Arduino IDE + ESP32 (2)](https://github.com/espressif/arduino-esp32/blob/master/docs/arduino-ide/boards_manager.md)

### 1.2 Setup for Arduino IDE

- Install python3.7, python2.7, and pyserial (sudo -H pip3 install pyserial) 
- Download [the Arduino IDE](https://www.arduino.cc/en/main/software) (v1.8 or higher)
- Set ESP32 board manager repository by putting **https://dl.espressif.com/dl/package_esp32_index.json** 
    - in **File > Preference > Settings Tab > Additional Boards Manager URLs** of the IDE.
- Get ESP32 board manager from **Tools > Board: XXX > Board Manager** (Search ESP32 and install it)
- Set Board type from **Tools > Board: Adafruits ESP32 Feather**
- Set USB port from **Tools > Port: xxx**
- Connect an ESP32 feather board to a USB port
- Get the board's info from **Tools > Get Board Info**
- Etc.
    - Upload Speed: 921600
    - Flash Freq.: 80MHz
    - Programmer: AVR ISP or AVR ISP mkII are good.

### 1.3. How to develop

Please check these links:
- [API doc](https://docs.espressif.com/projects/esp-idf/en/latest/)
- [Get started](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/index.html)
- [Espressif IoT Development Framework](https://github.com/espressif/esp-idf)

Please follow to compile and flash
- Create a new project and save somewhere
- Replace all the code in the sketch with the code below
- Compile and download it 
- Try other examples in **File > Examples > ESP32**

```
const int PIN21 = 21;

void setup() {
  pinMode(PIN21, OUTPUT);
}

void loop() {
  delay(1000);
  digitalWrite(PIN21, HIGH);
  delay(1000);
  digitalWrite(PIN21, LOW);
}
```

## 2. How to start with other advanced tools

It is about idf.py, VSCODE, and GDB but for now WIP.