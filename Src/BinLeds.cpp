/*
 * BinLeds.cpp
 *
 *  Created on: Feb 10, 2024
 *      Author: Gabriel
 */

#include "BinLeds.hpp"

BinLeds::BinLeds(GPIO_Pin* ledArray[], uint32_t numLeds) :
	ledArray(ledArray), numLeds(numLeds) {

}

BinLeds::~BinLeds() {

}

int32_t BinLeds::init() {
	return 0;
}

void BinLeds::set(uint32_t value) {
	for(uint32_t i = 0; i<numLeds; i++){
		ledArray[i]->write((value>>i)&1);
	}
}
