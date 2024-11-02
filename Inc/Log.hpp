/*
 * Log.hpp
 *
 *  Created on: Jul 22, 2024
 *      Author: Gabriel
 */

#ifndef SRC_COMPONENTS_LOG_HPP_
#define SRC_COMPONENTS_LOG_HPP_

class LogSource;

namespace Log{
	enum class Level : uint8_t{
		Disabled,
		Emergency,
		Alert,
		Critical,
		Error,
		Warning,
		Notice,
		Informational,
		Debug
	};
	class Structure{
	public:
		float instant;
		LogSource* source;
		Level level;
		char description[65];
	};
}







#endif /* SRC_COMPONENTS_LOG_HPP_ */
