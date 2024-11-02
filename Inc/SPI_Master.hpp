/*
 * SPI_Master.hpp
 *
 *  Created on: Feb 10, 2024
 *      Author: Gabriel
 */

#ifndef SRC_COMPONENTS_SPI_MASTER_HPP_
#define SRC_COMPONENTS_SPI_MASTER_HPP_

#include <inttypes.h>

class SPI_Master {
public:
	virtual int32_t init() = 0;
	virtual int32_t take(uint32_t timeout) = 0;
	virtual int32_t give() = 0;
	virtual int32_t transmit(uint8_t* buffer, uint32_t length) = 0;
	virtual int32_t receive(uint8_t* buffer, uint32_t length) = 0;
	virtual int32_t trx(uint8_t* txBuffer, uint8_t* rxBuffer, uint32_t length) = 0;
};

#endif /* SRC_COMPONENTS_SPI_MASTER_HPP_ */
