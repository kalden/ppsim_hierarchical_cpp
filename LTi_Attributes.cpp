#include "LTi_Attributes.h"

LTi_Attributes::LTi_Attributes
			(): 
		 	LTi_loc(Double2D()), angle_to_move(0), chemokine_grid_direction(0), high_chemokine_grid_square(0)
			{
				//printf("Initialising LTi_Attributes\n");
			}

LTi_Attributes::~LTi_Attributes() {
}

void LTi_Attributes::Sensors() {
}

void LTi_Attributes::Actuators() {
}

