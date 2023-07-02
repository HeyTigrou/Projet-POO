#pragma once
#include "CLpersonnage.h"
class CLsuperHero : public CLpersonnage {
private :
	void ini_obj(int);
public :
	CLsuperHero(void);
	CLsuperHero(int, int, int);
	void afficher(void);
};
