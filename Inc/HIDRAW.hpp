/*
 * HIDRAW.hpp
 *
 *  Created on: Dec 27, 2025
 *      Author: Gabriel
 */

#ifndef SHARED_ROBOFRAMEWORK_INC_HIDRAW_HPP_
#define SHARED_ROBOFRAMEWORK_INC_HIDRAW_HPP_

#include "SharedResource.hpp"

class HIDRAW : public SharedResource {
public:
	virtual int32_t init() = 0;
	virtual int32_t enqueueInPacket(const uint8_t* buffer, uint32_t size) = 0;
	virtual int32_t receiveOutPacket(uint8_t* buffer, uint32_t maxSize) = 0;
};

#endif /* SHARED_ROBOFRAMEWORK_INC_HIDRAW_HPP_ */
