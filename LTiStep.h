#ifndef ROBOCALC_ROBOT_LTISTEP_H_
#define ROBOCALC_ROBOT_LTISTEP_H_

#include "Operations.h"
#include "System_Parameters.h"
#include "LTi_Attributes.h"

class LTiStep: public Operations, public System_Parameters, public LTi_Attributes {
public:
	LTiStep(
);
	virtual ~LTiStep();
	void Sensors();
	void Actuators();
};

#endif
