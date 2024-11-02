/*
 * PWM_Pin.hpp
 *
 *  Created on: Jul 30, 2024
 *      Author: Gabriel
 */

#ifndef SRC_COMPONENTS_PWM_PIN_HPP_
#define SRC_COMPONENTS_PWM_PIN_HPP_

#include <cinttypes>

class PWM_Pin {
public:
	virtual int32_t init() = 0;
	virtual int32_t setDutyCycle(float dutyCycle) = 0;
	virtual int32_t getFrequency(float* frequency) = 0;
	virtual int32_t reset() = 0;
};

#endif /* SRC_COMPONENTS_PWM_PIN_HPP_ */
