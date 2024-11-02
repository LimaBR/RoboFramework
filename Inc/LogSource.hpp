/*
 * LogSource.hpp
 *
 *  Created on: Jun 25, 2024
 *      Author: Gabriel
 */

#ifndef SRC_COMPONENTS_LOGSOURCE_HPP_
#define SRC_COMPONENTS_LOGSOURCE_HPP_

#include <cinttypes>

#include "Log.hpp"

class LogSource {
public:
	LogSource();
	LogSource(const char* sourceName);
	LogSource(Log::Level minimumLevel, const char* sourceName = nullptr);
	virtual ~LogSource();

	int32_t log(Log::Level level, const char* format, ...);
	virtual const char* getName();
	int32_t setName(const char* name);
private:
	static constexpr char defaultName[] = "Unknown";
	const char* currentName = nullptr;
	Log::Level currentLevel = Log::Level::Disabled;
	Log::Structure structure;
};

#endif /* SRC_COMPONENTS_LOGSOURCE_HPP_ */
