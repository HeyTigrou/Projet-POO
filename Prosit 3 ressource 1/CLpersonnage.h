#include <iostream>
using namespace std;
#pragma once

class CLpersonnage
{
private:
	int vitesse;
	int force;
	void ini_obj(int, int);

protected:
	int invisibilite;

public:
	CLpersonnage(void);
	CLpersonnage(int, int);
	virtual void afficher(void);
};

