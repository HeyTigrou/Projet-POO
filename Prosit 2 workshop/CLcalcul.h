#pragma once 
#include <math.h>
class CLcalcul
{
private:
	double n;
	void ini_obj(double);
	double cpteObj;
public:
	CLcalcul(void);
	CLcalcul(double);
	void carre();
	void setN(double);
	double getN(void);
};

