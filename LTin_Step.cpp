#include "LTin_Step.h"

LTin_Step::LTin_Step(
):
		Operations(), System_Parameters(), LTin_Attributes() 
		{}

LTin_Step::~LTin_Step() {}


void LTin_Step::Sensors() {
	Operations::Sensors();
	System_Parameters::Sensors();
	LTin_Attributes::Sensors();
}

void LTin_Step::Actuators() {
	Operations::Actuators();
	System_Parameters::Actuators();
	LTin_Attributes::Actuators();
}

