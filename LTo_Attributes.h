#ifndef ROBOCALC_INTERFACE_LTO_ATTRIBUTES_H_
#define ROBOCALC_INTERFACE_LTO_ATTRIBUTES_H_

#include "HardwareComponent.h"
#include "DataTypes.h"

class LTo_Attributes : public HardwareComponent {
public:
	LTo_Attributes();
	virtual ~LTo_Attributes();

	virtual void Sensors();
	virtual void Actuators();

public:
	bool new_LTin_binding;
	bool new_LTi_binding;
	double adhesionExpressed;
	double chemokineExpressed;
	Double2D LTo_loc;

};


#endif
