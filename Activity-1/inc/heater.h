#ifndef __HEATER_H_
#define __HEATER_H_
/**
 * @file 
 * @author Shubham Santosh
 * @brief Project to turn on LED when the passenger is seated and turns on the heater
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Macro Definitions
 */
#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */

#define LED_ON_TIME     (20)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (20)   /**< LED OFF time in milli seconds */

/**
 * Include files
 */ 
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the status of switch
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void change_led_state(uint8_t state);


#endif /** __HEATER_H_ */