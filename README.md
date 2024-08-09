![ESP32-H2 DevKit](https://github.com/LaskaKit/ESP32-H2-DEVKit/blob/main/images/esp32-h2-devkit.JPG)

# ESP32-H2 DEVkit

Development board with ESP32-H2 microcontroller specifically designed for ultra-low power battery powered IoT applications. The ESP32-H2-DEVKit is a development board based on the ESP32-H2-MINI-1-N4, a general purpose module with 4MB SPI flash. This board integrates complete Bluetooth, ZigBee, Threada Matter functionality. Warning: no Wi-Fi! Due to its choice of components and circuit design, this is one of the boards with extremely low power consumption in sleep mode. Also the type of microcontroller used - SoC ESP32 predestines this board for high performance IoT applications. The board also includes an integrated charger for one Li-ION cell, from which the board is then powered. With this board, you no longer have to choose between power and power consumption, so you can concentrate on your own application development almost without limitations.

The spacing of the I/O pins was deliberately chosen so that the entire board can be inserted into a non-soldering contact field during the development phase, which can greatly simplify the initial design of the application under development.

The board already contains an integrated programmer and so there is no need to use any other. Thanks to the new programmer chip and its wiring, the sleep mode consumption is not significantly affected and therefore it can be used even for applications demanding long run times on battery power.

For a quick start with the ESP32-H2 DevKit we have prepared some sample codes https://github.com/LaskaKit/ESP32-H2-DEVKit/tree/main/SW

I2C (uŠup):</br>
SDA - IO11</br>
SCL - IO10</br>
Napájení - IO12</br>
</br>
Měření napětí baterie:</br>
IO2</br>
</br>
RGB LED:</br>
Data - IO9</br>
</br>
SPI (uŠup):</br>
CS - IO1</br>
SDI/MOSI - IO5</br>
MISO - IO0</br>
CLK - IO4</br>
</br>

## You can buy on https://www.laskakit.cz/laskakit-esp32-h2-devkit-bluetooth--zigbee--thread--matter/
