/*
 * BinLeds.hpp
 *
 *  Created on: Feb 10, 2024
 *      Author: Gabriel
 */

#ifndef SRC_COMPONENTS_BINLEDS_HPP_
#define SRC_COMPONENTS_BINLEDS_HPP_

#include <cinttypes>
#include "GPIO_Pin.hpp"

class BinLeds {
public:
	BinLeds(GPIO_Pin* ledArray[], uint32_t numLeds);
	virtual ~BinLeds();
	int32_t init();
	void set(uint32_t value);
private:
	GPIO_Pin** ledArray;
	uint32_t numLeds;
};

#endif /* SRC_COMPONENTS_BINLEDS_HPP_ */
