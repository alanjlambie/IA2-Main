# IA2-Main
Assignment 2 HCIN 720

Interaction
The model of interaction is defined by hardware and a series of software pieces. The hardware is PHOTON from particle (former spark).
PHOTON Specs:

    Particle P0 Wi-Fi module
    Broadcom BCM43362 Wi-Fi chip
    STM32F205 120Mhz ARM Cortex M3
    1MB flash, 128KB RAM
    802.11b/g/n
    Soft AP setup
    FCC/CE/IC certified
For this configuration 2 sensors are connected to the photon:

1) TMP102 : Temperature sensor.
2) Photo resistor (SEN 0988 Sparkfun).


Software (libraries)

1) socket.io-1.2.0.js : Connect serial port incoming data to a mini browser.
2) server.js : implement a mini-browser and connect with browser.
3) Chart.js : Visualization library.

index.htl : import libraries and support the UI in the browser for visualization.

Description
The photon handles 2 sensors sending data through it and through the serial port. This data is captured by the mini-browser and packed and sent
to index.html where the data is parsed and visualized using simple html tags and structures complemented with functionalities from 
Chart.js library.
