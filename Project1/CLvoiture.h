#pragma once
#include "pch.h"

class CLvoiture {
public :
	virtual void lavage(void) {
		cout << "Voiture lavee " << this << endl;
	}
};
