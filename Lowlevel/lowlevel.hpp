#ifndef LOWLEVEL_HPP_
#define LOWLEVEL_HPP_

#include <stm32f4xx_hal.h>
#include <cstdint>
#include <tim.h>
#include <adc.h>
#include <main.h>

void StartOnBoardLED();
void SetOnBoardLED(uint32_t duty);

void StartControlTimer();
void StartInverterPWM();

void StartADC();
uint16_t GetSO1();
uint16_t GetSO2();
uint16_t GetDCVoltageRaw();
uint16_t GetMotorTempRaw();
uint16_t GetFETTempRaw();

void OnGateDriver();
void OffGateDriver();

#endif