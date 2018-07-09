#include "LTiStep.h"

LTiStep::LTiStep(
):
		Operations(), System_Parameters(), LTi_Attributes() 
		{}

LTiStep::~LTiStep() {}


void LTiStep::Sensors() {
	Operations::Sensors();
	System_Parameters::Sensors();
	LTi_Attributes::Sensors();
}

void LTiStep::Actuators() {
	Operations::Actuators();
	System_Parameters::Actuators();
	LTi_Attributes::Actuators();
}

