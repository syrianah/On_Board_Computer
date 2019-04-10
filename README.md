# Rocket on board computer

## About
This is a project of rocket on board computer to measure location of the rocket using GPS device and height using Barometer and save the data on SD-Card. Also computer trigger the separation by checking when rocket will be free falling. Sepration is coil to fire nitrocellulose.

- [Rocket on board computer](#rocket-on-board-computer)
    * [About](#about)
    * [Barometer](#barometer)
        + [Barometr schema](#barometr-schema)
        + [Height measure code](#height-measure-code)
    * [GPS](#gps)
        + [GPS schema](#gps-schema)
        + [GPS wireing](#gps-wireing)
        + [Tiny GPS Plus Library](#tiny-gps-plus-library)
    * [MicroSD Card Adapter](#microsd-card-adapter)
        + [Adapter schema](#adapter-schema)
        + [Adapter wireing](#adapter-wireing)
        + [Arduino code](#arduino-code-2)

## Barometer
Module 10 DOF MPU9250 + BMP280

### Barometr schema
This is a schema for all the wireing with arduino
![alt text](https://github.com/syrianah/On_Board_Computer/blob/master/Barometer/BMP280_arduino_schema.jpg)

### Library
[link](https://github.com/syrianah/On_Board_Computer/tree/master/Barometer/I2C-Sensor-Lib_iLib)

### Height measure code
[code](https://github.com/syrianah/On_Board_Computer/blob/master/Barometer/miernik_wysokosci_proccesing.ino)

## GPS
NEO-6M GPS Module is to measure location of the rocket (latitude, longitude, height).

### GPS schema
This is a schema for all the wireing with arduino
![alt text](https://github.com/syrianah/On_Board_Computer/blob/master/GPS/NEO_6M_Arduino_schema.png)

### GPS wireing
| NEO-6M GPS Module | Adruino |
|----------------------|----------------:|
|          VCC          |        5V        |
|          RX         |        RX      |
|          TX        |        TX      |
|          GND         |        GND      |

### Tiny GPS Plus Library
[link](https://github.com/mikalhart/TinyGPSPlus/archive/master.zip)

## MicroSD Card Adapter
Save date to files

### Adapter schema
This is the schema for all the wireing with arduino
![alt text](https://github.com/Tyraka/Rocket-test-stand/blob/master/MicroSD%20Card%20Adapter/fritzing_bb.png)

### Adapter wireing
| MicroSD Card Adapter | Adruino UNO Pin |
|----------------------|----------------:|
|          CS          |        4        |
|          SCK         |        13       |
|          MOSI        |        11       |
|          MISO        |        12       |
|          VCC         |        5V       |
|          GND         |        GND      |

### Arduino code
[the necessary code is here](https://github.com/Tyraka/Rocket-test-stand/blob/master/MicroSD%20Card%20Adapter/save_to_file.ino)
