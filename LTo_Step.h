#ifndef ROBOCALC_ROBOT_LTO_STEP_H_
#define ROBOCALC_ROBOT_LTO_STEP_H_

#include "Operations.h"
#include "System_Parameters.h"
#include "LTo_Attributes.h"

class LTo_Step: public Operations, public System_Parameters, public LTo_Attributes {
public:
	LTo_Step(
);
	virtual ~LTo_Step();
	void Sensors();
	void Actuators();
};

#endif
