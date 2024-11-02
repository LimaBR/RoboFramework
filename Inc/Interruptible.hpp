/*
 * Interruptible.hpp
 *
 *  Created on: Apr 20, 2024
 *      Author: Gabriel
 */

#ifndef SRC_COMPONENTS_INTERRUPTIBLE_HPP_
#define SRC_COMPONENTS_INTERRUPTIBLE_HPP_

#include "InterruptReason.hpp"

class Interruptible {
public:
	virtual void irqHandler(InterruptReason* reason) = 0;
};

#endif /* SRC_COMPONENTS_INTERRUPTIBLE_HPP_ */
