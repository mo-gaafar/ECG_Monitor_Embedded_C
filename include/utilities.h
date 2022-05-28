#ifndef __UTIL_H__
#define __UTIL_H__

/**
 * @file       utilities.h
 * @author     Mohamed Nasser
 *
 * @brief      Useful functions
 *
 * @version    0.5.0
 * @date       2022-5-25
 **/

#include <main.h>

/**
 * @brief This function is used to delay the program for a certain amount of time
 * @param delay_ms The amount of time to delay the program for in milliseconds
 **/
void UTIL_DelayMS(u16 delay_ms);

/**
 * @brief This function is used to delay the program for a certain amount of time
 * @param delay_ms The amount of time to delay the program for in microseconds
 **/
void UTIL_DelayUS(u16 delay_us);

#endif // __UTIL_H__
