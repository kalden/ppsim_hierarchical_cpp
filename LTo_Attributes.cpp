#include "LTo_Attributes.h"

LTo_Attributes::LTo_Attributes
			(): 
		 	new_LTin_binding(false), new_LTi_binding(false), adhesionExpressed(0), chemokineExpressed(0), LTo_loc(Double2D())
			{
				//printf("Initialising LTo_Attributes\n");
			}

LTo_Attributes::~LTo_Attributes() {
}

void LTo_Attributes::Sensors() {
}

void LTo_Attributes::Actuators() {
}

