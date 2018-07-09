#include "System_Parameters.h"

System_Parameters::System_Parameters
			(): 
		 	maxVCAMProbability(0), chemokine_in_environment(false), retLigandTime(0), maxExpressionReached(false), adhesionIncrement(0), chemokineIncrement(0), maxChemokineExpression(0), cellDivisionTime(0)
			{
				//printf("Initialising System_Parameters\n");
			}

System_Parameters::~System_Parameters() {
}

void System_Parameters::Sensors() {
}

void System_Parameters::Actuators() {
}

