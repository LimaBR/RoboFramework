/*
 * LogDriver.hpp
 *
 *  Created on: Jun 25, 2024
 *      Author: Gabriel
 */

#ifndef SRC_COMPONENTS_LOGDRIVER_HPP_
#define SRC_COMPONENTS_LOGDRIVER_HPP_

#include <cinttypes>
#include "Log.hpp"
#include "FreeRTOS.h"
#include "queue.h"
#include "Executable.hpp"

class LogDriver : public Executable {
public:
	LogDriver();
	virtual ~LogDriver();
	static LogDriver* getInstance();
	int32_t init();
	int32_t execute();
	int32_t enqueue(const Log::Structure& structure);
private:
	int32_t sendToITM(const Log::Structure& structure);
	static constexpr uint32_t logQueueSize = 16;
	QueueHandle_t logQueue;
	uint8_t logQueueMemory[logQueueSize*sizeof(Log::Structure)];
	StaticQueue_t logQueueStructure;
	Log::Structure structureToSend;
	static constexpr char LevelName[9][14] = {
		"Disabled",
		"Emergency",
		"Alert",
		"Critical",
		"Error",
		"Warning",
		"Notice",
		"Informational",
		"Debug"
	};
};

#endif /* SRC_COMPONENTS_LOGDRIVER_HPP_ */
