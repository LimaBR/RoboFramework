/*
 * GPIO_Pin.hpp
 *
 *  Created on: Feb 10, 2024
 *      Author: Gabriel
 */

#ifndef SRC_COMPONENTS_GPIO_PIN_HPP_
#define SRC_COMPONENTS_GPIO_PIN_HPP_

#include <inttypes.h>
#include "Interruptible.hpp"

class GPIO_Pin : public InterruptReason {
public:
	virtual int32_t init() = 0;
	virtual int32_t read(uint8_t* state) = 0;
	virtual int32_t write(uint8_t state) = 0;
	virtual int32_t set() = 0;
	virtual int32_t reset() = 0;
	virtual int32_t toggle() = 0;
	virtual int32_t registerExtiCallback(Interruptible* object) = 0;
	virtual int32_t deregisterExtiCallback() = 0;
protected:
	Interruptible* irqObject = nullptr;
};

#endif /* SRC_COMPONENTS_GPIO_PIN_HPP_ */
