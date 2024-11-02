/*
 * LogDriver.cpp
 *
 *  Created on: Jun 25, 2024
 *      Author: Gabriel
 */

#include "LogDriver.hpp"
#include <cstdio>

using namespace Log;

LogDriver logDriverSingleton;

LogDriver::LogDriver() : Executable(Log::Level::Informational){

}

LogDriver::~LogDriver() {

}

LogDriver* LogDriver::getInstance(){
	return &logDriverSingleton;
}

int32_t LogDriver::init(){
	setName("LogDriver");
	logQueue = xQueueCreateStatic(logQueueSize, sizeof(Structure), logQueueMemory, &logQueueStructure);
	if(!logQueue){
		return -1;
	}
	// Can log from here onwards
	vQueueAddToRegistry(logQueue, "logQueue");
	log(Log::Level::Informational, "Initialized without errors");
	return 0;
}

int32_t LogDriver::execute(){
	while(true){
		xQueueReceive(logQueue, &structureToSend, portMAX_DELAY);
		sendToITM(structureToSend);
	}
	return 0;
}

int32_t LogDriver::enqueue(const Structure& structure){
	int32_t errors = 0;
	errors += xQueueSend(logQueue, &structure, 0) - 1;
	return errors;
}

int32_t LogDriver::sendToITM(const Structure& structure){
	printf("[%f] %s %s %s\n", structure.instant, structure.source->getName(), LevelName[(uint8_t)structure.level], structure.description);
	return 0;
}
