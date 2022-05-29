# Embedded ECG Monitor

A software written in Embedded C that drives a prototype ECG monitor and detects arrhythmic heart rates using digital signal processing and realtime filtering techniques.

## For Detailed Documentation Visit

![Website](https://img.shields.io/website?url=https://mo-gaafar.github.io/ECG_Monitor_Embedded_C/html/index.html) </br>

🔗 <a href = "https://mo-gaafar.github.io/ECG_Monitor_Embedded_C/html/index.html">This Website</a>

Generated By doxygen, hosted on github-pages

## Platform

Designed for the Atmel Atmega328p microcontroller
</br> Built using platform IO in vscode, Compiled using avrgcc

## Preview

![animation](./docs/Animation.gif)

## Supported Modules

✅ ECG
✅ ADC
✅ Timer0
✅ LCD
✅ LED
✅ PushButton
✅ Buzzer
⬜ PWM

## Context Diagram

![context diagram](./docs/context_diagram.png)

## System Block Diagram

![block diagram](./docs/block_diagram.png)
![signal processing](./docs/signal_process.png)

## Useful References

* HC Chen, SW Chen, "A Moving Average based Filtering System with its Application to Real-time QRS Detection"
<http://cinc.mit.edu/Proceedings/2003/pdf/585.pdf>

* Github Repository
<https://github.com/blakeMilner/real_time_QRS_detection>
