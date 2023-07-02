#pragma once
#include <iostream>
#include <math.h>

class CLobject
{
private :
	double masse;
	double vitesse;
	double ec;
	void ini_obj(double, double);

public :
	CLobject(void);
	CLobject(double, double);
	CLobject(CLobject&);

	void calculer(void);
	double getMasse(void);
	double getVitesse(void);
	double getEc(void);
	void setMasse(double);
	void setVitesse(double);
};

