/*
 * Utilities.cpp
 *
 *  Created on: Oct 30, 2024
 *      Author: Gabriel
 */

#include "Utilities.hpp"
#include <cstdio>

int32_t Utilities::byteVectorToHexString( const std::vector<uint8_t> &inputVector, char *outputString, uint32_t maxOutSize) {
	for(uint32_t i = 0;i < inputVector.size(); i++){
		if(maxOutSize < 6){
			// Insufficient space in output cstring
			return -1;
		}
		snprintf(outputString, maxOutSize, "0x%X ", inputVector.at(i));
		outputString += 5;
		maxOutSize -= 5;
	}
	return 0;
}
