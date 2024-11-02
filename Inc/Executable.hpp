/*
 * Executable.hpp
 *
 *  Created on: Jun 25, 2024
 *      Author: Gabriel
 */

#ifndef SRC_COMPONENTS_EXECUTABLE_HPP_
#define SRC_COMPONENTS_EXECUTABLE_HPP_

#include "LogSource.hpp"

#include <cinttypes>

class Executable : protected LogSource {
public:
	Executable();
	Executable(Log::Level logLevel, const char* logSourceName = nullptr);
	virtual ~Executable();
	virtual int32_t init();
	virtual int32_t execute();
};

#endif /* SRC_COMPONENTS_EXECUTABLE_HPP_ */
