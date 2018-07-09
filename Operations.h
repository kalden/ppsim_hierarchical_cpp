#ifndef ROBOCALC_INTERFACE_OPERATIONS_H_
#define ROBOCALC_INTERFACE_OPERATIONS_H_

#include "HardwareComponent.h"

class Operations : public HardwareComponent {
public:
	Operations();
	virtual ~Operations();
	virtual void Random_Walk();
	//false
	virtual void disassociate_cells();
	//false
	virtual void divide_cells();
	//false

	virtual void Sensors();
	virtual void Actuators();


};


#endif
