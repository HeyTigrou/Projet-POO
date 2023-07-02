#pragma once
#include "CLpoint.h"

class CLpoint3D : public CLpoint{
public :
	CLpoint3D(double, double, double);
	double getZ();
	void afficherCoordo();

private :
	double m_z;
};

