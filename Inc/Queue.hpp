/*
 * Queue.hpp
 *
 *  Created on: Oct 20, 2024
 *      Author: Gabriel
 */

#ifndef SRC_COMPONENTS_QUEUE_HPP_
#define SRC_COMPONENTS_QUEUE_HPP_

#include <cinttypes>
#include <cerrno>

template <typename T> class Queue {
public:
	virtual int32_t init() = 0;
	virtual int32_t send(const T& dataToSend, int32_t timeoutMs) = 0;
	virtual int32_t receive(T* dataToReceive, int32_t timeoutMs) = 0;
	virtual char* getName(){
		return nullptr;
	}
	virtual int32_t setName(char* name){
		(void)name;
		return -ENOSYS;
	}
};

#endif /* SRC_COMPONENTS_QUEUE_HPP_ */
