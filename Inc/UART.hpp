/*
 * UART.hpp
 *
 *  Created on: Aug 17, 2024
 *      Author: Gabriel
 */

#ifndef SRC_COMPONENTS_UART_HPP_
#define SRC_COMPONENTS_UART_HPP_

#include "SharedResource.hpp"

class UART : public SharedResource {
public:
	int32_t init() = 0;
	virtual int32_t transmit(const uint8_t* buffer, uint32_t size) = 0;
	virtual int32_t receiveUntilLineIdle(uint8_t* buffer, uint32_t maxSize) = 0;
};

#endif /* SRC_COMPONENTS_UART_HPP_ */
