# esp32

A collection of [ESP32-Feather](https://learn.adafruit.com/adafruit-huzzah32-esp32-feather) based projects.

## 1. How to start

There are couple ways to develop ESP32 but Arduino based project is easier to start.

### 1.1 Links

- General info: https://learn.adafruit.com/adafruit-huzzah32-esp32-feather
- How to use ESP32 with Arduino IDE: https://learn.adafruit.com/adafruit-huzzah32-esp32-feather?view=all#using-with-arduino-ide
- Arduino IDE + ESP32 (1): https://github.com/espressif/arduino-esp32
- Arduino IDE + ESP32 (2): https://github.com/espressif/arduino-esp32/blob/master/docs/arduino-ide/boards_manager.md

### 1.2 Steps

- Install python3.7, python2.7, and pyserial (sudo -H pip3 install pyserial) 
- Download the Arduino IDE ([>>](https://www.arduino.cc/en/main/software))
- Set ESP32 board manager repository by putting **https://dl.espressif.com/dl/package_esp32_index.json** in IDE's **File > Preference > Settings Tab > Additional Boards Manager URLs**.
- Get ESP32 board manager from **Tools > Board: XXX > Board Manager** (Search ESP32 and install it)
- Set Board type from **Tools > Board: Adafruits ESP32 Feather**
- Set USB port from **Tools > Port: xxx**
- Connect an ESP32 feather board
- Get the board's info from **Tools > Get Board Info**

## 2. How to develop

### 2.1 Links

- API doc: https://docs.espressif.com/projects/esp-idf/en/latest/
- Get started: https://docs.espressif.com/projects/esp-idf/en/latest/get-started/index.html
- Espressif IoT Development Framework: https://github.com/espressif/esp-idf

### 2.2 Steps

- Create a new project and save somewhere
- Replace all the code in the sketch with the code below
- Compile and download it 
- Try other examples in the docs

```
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
```
