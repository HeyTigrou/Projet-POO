#pragma once
#include "CLvoiture.h"

class CLmoto : public CLvoiture {
public :
	void lavage(void) {
		cout << "Moto lavee " << this << endl;
	}
};