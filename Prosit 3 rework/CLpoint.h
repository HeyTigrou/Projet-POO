#pragma once
#include "pch.h"

class CLpoint
{
public :
	CLpoint(double, double);
	double getX();
	double getY();
	virtual void afficherCoordo();

protected :
	double m_x;
	double m_y;
};

