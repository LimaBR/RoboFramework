/*
 * SoftTimer.hpp
 *
 *  Created on: May 27, 2025
 *      Author: Gabriel
 */

#ifndef ROBOFRAMEWORK_INC_SOFTTIMER_HPP_
#define ROBOFRAMEWORK_INC_SOFTTIMER_HPP_

#include "Interruptible.hpp"
#include <cinttypes>

class SoftTimer : public InterruptReason {
public:
	virtual int32_t init() = 0;
	virtual int32_t start(uint32_t periodInTicks, bool autoReload) = 0;
	virtual int32_t stop() = 0;
	virtual char* getName() = 0;
	virtual int32_t setName(const char* name) = 0;
};

#endif /* ROBOFRAMEWORK_INC_SOFTTIMER_HPP_ */
