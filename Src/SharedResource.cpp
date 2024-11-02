/*
 * SharedResource.cpp
 *
 *  Created on: Aug 17, 2024
 *      Author: Gabriel
 */

#include "SharedResource.hpp"
#include <cerrno>

SharedResource::SharedResource() {

}

SharedResource::~SharedResource() {

}

int32_t SharedResource::init() {
	hMutex = xSemaphoreCreateMutexStatic(&hMutexBuffer);
	vQueueAddToRegistry(hMutex, resourceName);
	return 0;
}

int32_t SharedResource::take(uint32_t timeout) {
	if(xSemaphoreTake(hMutex, timeout)){
		// Took
		taskLocking = xTaskGetCurrentTaskHandle();
		return 0;
	}else{
		// Timeout
		return -ETIMEDOUT;
	}
}

int32_t SharedResource::give() {
	taskLocking = nullptr;
	xSemaphoreGive(hMutex);
	return 0;
}

int32_t SharedResource::taken() {
	if (taskLocking == xTaskGetCurrentTaskHandle()){
		return 1;
	}else{
		return 0;
	}
}
