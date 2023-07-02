#pragma once
#include "pch.h"
#include "CLpoint.h"

class CLparcours2D
{
public :
	CLparcours2D();
	virtual void ajouterPoint(CLpoint&);
	virtual double calculDistance();
	virtual void message();

protected :
	virtual double distance(CLpoint& , CLpoint&);
	double m_distanceTotale;
	vector<CLpoint> tabPt;
};

