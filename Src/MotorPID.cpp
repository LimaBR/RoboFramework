/*
 * MotorPID.cpp
 *
 *  Created on: Jun 28, 2025
 *      Author: Gabriel
 */

#include "MotorPID.hpp"

MotorPID::MotorPID(){

}

MotorPID::MotorPID(const Configuration& initialConfiguration) :
		config(initialConfiguration){

}

int32_t MotorPID::reconfig(const Configuration& newConfigration) {
	config = newConfigration;
	return 0;
}
