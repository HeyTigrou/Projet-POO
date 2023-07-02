#pragma once
#include "pch.h"

class CLvoiture
{
protected : 
	int vitesseMax;
	int vitesse;
	int acceleration;
	void ini_obj(int, int);
	static int nbVoiture;

public :
	CLvoiture(void);
	CLvoiture(int, int);
	virtual void accelerer(void);
};

