/*
 * SharedResource.hpp
 *
 *  Created on: Aug 17, 2024
 *      Author: Gabriel
 */

#ifndef SRC_COMPONENTS_SHAREDRESOURCE_HPP_
#define SRC_COMPONENTS_SHAREDRESOURCE_HPP_

#include <cinttypes>
#include <FreeRTOS.h>
#include <semphr.h>

class SharedResource {
public:
	SharedResource();
	virtual ~SharedResource();
	virtual int32_t init();
	virtual int32_t take(uint32_t timeout);
	virtual int32_t give();
protected:
	virtual int32_t taken();
	const char* resourceName = "SharedResource";
	SemaphoreHandle_t hMutex;
	StaticSemaphore_t hMutexBuffer;
	TaskHandle_t taskLocking = nullptr;
};

#endif /* SRC_COMPONENTS_SHAREDRESOURCE_HPP_ */
