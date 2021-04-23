#ifndef __PROJECT_CONFIG_H__
#define __PROJECT_CONFIG_H__
/**
 * @file project_config.h
 * @author Bharath.G ()
 * @brief Configuration file to define pins and ports for the interfaced peripherals
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */
#define seat_port (PORTD)
#define heater_port (PORTD)
#define seat_pin (PORTD1)
#define heater_pin (PORTD0)


#endif /* __PROJECT_CONFIG_H__ */