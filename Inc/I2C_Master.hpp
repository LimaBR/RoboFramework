/*
 * I2C_Master.hpp
 *
 *  Created on: May 7, 2024
 *      Author: Gabriel
 */

#ifndef SRC_COMPONENTS_I2C_MASTER_HPP_
#define SRC_COMPONENTS_I2C_MASTER_HPP_

#include <inttypes.h>

class I2C_Master {
public:
	virtual int32_t init() = 0;
	virtual int32_t take(uint32_t timeout) = 0;
	virtual int32_t give() = 0;
	virtual int32_t transmit(uint8_t devAddr, uint8_t* buffer, uint32_t length) = 0;
	virtual int32_t receive(uint8_t devAddr, uint8_t* buffer, uint32_t length) = 0;
	virtual int32_t regTransmit(uint8_t devAddr, uint8_t regAddr, uint8_t* buffer, uint32_t length) = 0;
	virtual int32_t regReceive(uint8_t devAddr, uint8_t regAddr, uint8_t* buffer, uint32_t length) = 0;
	virtual int32_t reg16Transmit(uint8_t devAddr, uint16_t regAddr, uint8_t* buffer, uint32_t length) = 0;
	virtual int32_t reg16Receive(uint8_t devAddr, uint16_t regAddr, uint8_t* buffer, uint32_t length) = 0;
};

#endif /* SRC_COMPONENTS_I2C_MASTER_HPP_ */
