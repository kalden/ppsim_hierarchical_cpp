#ifndef ROBOCALC_ROBOT_LTIN_STEP_H_
#define ROBOCALC_ROBOT_LTIN_STEP_H_

#include "Operations.h"
#include "System_Parameters.h"
#include "LTin_Attributes.h"

class LTin_Step: public Operations, public System_Parameters, public LTin_Attributes {
public:
	LTin_Step(
);
	virtual ~LTin_Step();
	void Sensors();
	void Actuators();
};

#endif
