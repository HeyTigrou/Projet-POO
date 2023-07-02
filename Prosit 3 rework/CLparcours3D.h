#pragma once
#include "CLparcours2D.h"
#include "CLpoint3D.h"

class CLparcours3D : public CLparcours2D
{
public:
	CLparcours3D();
	void ajouterPoint(CLpoint3D&);
	double calculDistance();
	double distance(CLpoint3D& , CLpoint3D& );
	void message();

private :
	vector<CLpoint3D>tabPt;
};

