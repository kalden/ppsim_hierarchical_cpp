#ifndef ROBOCALC_INTERFACE_SYSTEM_PARAMETERS_H_
#define ROBOCALC_INTERFACE_SYSTEM_PARAMETERS_H_

#include "HardwareComponent.h"

class System_Parameters : public HardwareComponent {
public:
	System_Parameters();
	virtual ~System_Parameters();

	virtual void Sensors();
	virtual void Actuators();

public:
	double maxVCAMProbability;
	bool chemokine_in_environment;
	const double retLigandTime;
	bool maxExpressionReached;
	double adhesionIncrement;
	double chemokineIncrement;
	double maxChemokineExpression;
	const int cellDivisionTime;

};


#endif
