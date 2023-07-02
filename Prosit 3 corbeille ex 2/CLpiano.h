#pragma once
#include "instrument.h"

class CLpiano : public instrument {
	void jouer(void) {
		cout << "Le son du piano" << endl;
	}
};
