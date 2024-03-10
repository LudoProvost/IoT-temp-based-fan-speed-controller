# Temperature Based Fan Speed Controller on Custom PCB

## Note:
The IoT part of this project has not been completed yet. 

## Components
1. ### ESP8266 NodeMCU
    Used for data processing through GPIO12 and controls fan speed by varying MOSFET gate voltage through GPIO16. 
2. ### LM340 Fixed Voltage Regulator
    Regulated voltage from barrel jack (9-12V) to NodeMCU (3.3-5V).
2. ### DS18B20 Digital Thermometer
    Used to get temperature readings. Using parasite power.
3. ### IRF540 Power MOSFET
    Used to control the fan speed.
4. ### Others
    1. 0.22uF electrolytic capacitor
    2. 0.1uF electrolytic capacitor
    3. Barrel jack connector
    4. 10K resistor
    5. 4.7K resistor

## Schematic
![schem](https://github.com/LudoProvost/IoT-temp-based-fan-speed-controller/assets/70982826/b0924e45-0eae-4318-b834-a567140003a1)

## PCB editor
The KiCad PCD editor was used to design the PCB below. 
![pcb_schem](https://github.com/LudoProvost/IoT-temp-based-fan-speed-controller/assets/70982826/c69d4504-7bb0-48b7-9b4e-2bc53ff99ef9)

3D render of the PCB without a custom footprint for the NodeMCU:
![pcb_3d](https://github.com/LudoProvost/IoT-temp-based-fan-speed-controller/assets/70982826/6c2c1766-288d-4b52-bcef-38a3f76ac4d9)

## Datasheets used
1. [ESP8266 NodeMCU](https://handsontec.com/dataspecs/module/esp8266-V13.pdf)
2. [LM340](https://www.ti.com/lit/ds/symlink/lm7800.pdf)
3. [DS18B20](https://mm.digikey.com/Volume0/opasdata/d220001/medias/docus/2890/UMW%20DS18B20.pdf)
4. [IRF540](https://www.vishay.com/docs/91021/irf540.pdf)
5. [Barrel jack connector](https://www.cuidevices.com/product/resource/pj-002a.pdf)
