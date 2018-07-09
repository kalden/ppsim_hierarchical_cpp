
#ifndef ROBOCALC_FUNCTIONS_H_
#define ROBOCALC_FUNCTIONS_H_

#include "DataTypes.h"

int calculate_angle_from_direction(int direction);
int determine_movement_direction(int high_chemokine_concentration);
int probability_responds_to_chemokine();
double Chemotactic_Walk();
int measure_chemokine_expression(Double2D loc);
double calculate_adhesion_probability();
bool detect_cell_bind(Double2D loc, std::string cellType);
double Random_Walk();

#endif
