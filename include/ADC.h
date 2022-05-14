/*
ADC Library 0x05

copyright (c) Davide Gironi, 2013

Released under GPLv3.
Please refer to LICENSE file for licensing information.
*/

#ifndef ADC_H
#define ADC_H

// setup values
#define ADC_REF 1         // adc reference voltage (see adc_init function for reference)
#define ADC_PRESCALER 128 // adc prescaler (2, 4, 8, 16, 32, 64, 128)
#define ADC_JUSTIFY 'R'   // adc justify ('L' or 'R')
#define ADC_TRIGGERON 0   // adc trigger (1 on - 0 off)
#define ADC_REFRES 1024   // reference resolution used for conversions

// bandgap reference voltage * 1000, refers to datasheet
#define ADC_BANDGAPVOLTAGE 1100L


// functions
void ADC_SetChannel(uint8_t channel);
uint16_t ADC_Read(uint8_t channel);
uint16_t ADC_ReadSel(void);
void ADC_Init(void);
double ADC_GetRealVref(void);
long ADC_GetResistance(uint16_t adcread, uint16_t adcbalanceresistor);
double ADC_GetVoltage(uint16_t adcread, double adcvref);
unsigned int ADC_EMAFilter(unsigned int newvalue, unsigned int value);

#endif