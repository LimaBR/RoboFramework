/*
 * Encoder.hpp
 *
 *  Created on: Jul 5, 2025
 *      Author: Gabriel
 */

#ifndef SHARED_ROBOFRAMEWORK_INC_ENCODER_HPP_
#define SHARED_ROBOFRAMEWORK_INC_ENCODER_HPP_

class Encoder {
public:
	virtual int32_t init() = 0;
	virtual int32_t getPosition(int32_t* position) = 0;
};

#endif /* SHARED_ROBOFRAMEWORK_INC_ENCODER_HPP_ */
