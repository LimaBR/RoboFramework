/*
 * MotorPID.hpp
 *
 *  Created on: Jun 28, 2025
 *      Author: Gabriel
 */

#ifndef SHARED_ROBOFRAMEWORK_SRC_MOTORPID_HPP_
#define SHARED_ROBOFRAMEWORK_SRC_MOTORPID_HPP_

#include <cinttypes>

class MotorPID {
public:

	class Configuration{
	public:
		float wheelRadius = 0.05;
		float reductionRatio = 1/43.5;
		float encoderCountsPerRevolution = 52;
	};

	MotorPID();
	MotorPID(const Configuration& initialConfiguration);
	virtual int32_t init() = 0;
	virtual int32_t reconfig(const Configuration& newConfiguration);
	virtual int32_t setSpeed(float newSpeed) = 0;

protected:
	Configuration config;
};

#endif /* SHARED_ROBOFRAMEWORK_SRC_MOTORPID_HPP_ */
