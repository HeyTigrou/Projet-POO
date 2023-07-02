#pragma once
#include "CLvoiture.h"

class CLvoitureSport : public CLvoiture {
private :
	void ini_obj(int, int);

public :
	CLvoitureSport(void);
	CLvoitureSport(int, int);
	void accelerer(void);
};
