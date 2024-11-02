/*
 * LogSource.cpp
 *
 *  Created on: Jun 25, 2024
 *      Author: Gabriel
 */

#include "LogSource.hpp"
#include "LogDriver.hpp"
#include "Log.hpp"
#include <cstdio>
#include <cstdarg>
#include <sys/time.h>

using namespace Log;

LogSource::LogSource() {
	structure.source = this;
}

LogSource::LogSource(Level minimumLevel, const char* sourceName) : LogSource() {
	currentLevel = minimumLevel;
	if(sourceName){
		setName(sourceName);
	}
}

LogSource::~LogSource() {

}

int32_t LogSource::log(Level level, const char* format, ...) {
	if(currentLevel<level){
		// Don't log
		return 0;
	}
	// Send to the driver
	timeval tp;
	gettimeofday(&tp, NULL);
	structure.instant = (float)tp.tv_sec + (float)tp.tv_usec/1000000;
	structure.level = level;
	va_list args;
	va_start(args, format);
	vsnprintf(structure.description, 64, format, args);
	return LogDriver::getInstance()->enqueue(structure);
}

const char* LogSource::getName(){
	if(currentName){
		return currentName;
	}
	return defaultName;
}

int32_t LogSource::setName(const char* name){
	currentName = name;
	return 0;
}
