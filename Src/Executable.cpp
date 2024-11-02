/*
 * Executable.cpp
 *
 *  Created on: Jun 25, 2024
 *      Author: Gabriel
 */

#include "Executable.hpp"

Executable::Executable(){
}

Executable::Executable(Log::Level logLevel, const char* logSourceName) : LogSource(logLevel, logSourceName){
}

Executable::~Executable() {

}

int32_t Executable::init() {
	log(Log::Level::Warning, "Executable init() called without implementation");
	return -1;
}

int32_t Executable::execute() {
	log(Log::Level::Warning, "Executable execute() called without implementation");
	return -1;
}
