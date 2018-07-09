#include "LTo_Step.h"

LTo_Step::LTo_Step(
):
		Operations(), System_Parameters(), LTo_Attributes() 
		{}

LTo_Step::~LTo_Step() {}


void LTo_Step::Sensors() {
	Operations::Sensors();
	System_Parameters::Sensors();
	LTo_Attributes::Sensors();
}

void LTo_Step::Actuators() {
	Operations::Actuators();
	System_Parameters::Actuators();
	LTo_Attributes::Actuators();
}

