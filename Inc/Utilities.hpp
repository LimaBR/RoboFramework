/*
 * Utilities.hpp
 *
 *  Created on: Oct 30, 2024
 *      Author: Gabriel
 */

#ifndef SRC_COMPONENTS_UTILITIES_HPP_
#define SRC_COMPONENTS_UTILITIES_HPP_

#include <cinttypes>
#include <vector>

class Utilities {
public:
	static int32_t byteVectorToHexString(const std::vector<uint8_t>& inputVector, char* outputString, uint32_t maxOutSize);
};

#endif /* SRC_COMPONENTS_UTILITIES_HPP_ */
