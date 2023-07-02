#pragma once
#include "CLvoiture.h"

class CLstationLavage {
private :
	CLvoiture** emplacements;
	int taille;
	int index;

public :
	CLstationLavage(int taille) {
		this->emplacements = new CLvoiture * [taille];
		this->taille = taille;
		this->index = 0;
	}

	void add(CLvoiture* voiture) {
		this->emplacements[this->index] = voiture;
		this->index++;
	}

	void update(int index, CLvoiture* voiture) {
		this->emplacements[index] = voiture;
	}

	void laverLeParc(void) {
		for (int i = 0; i < this->taille; i++) {
			this->emplacements[i]->lavage();
		}
	}
};
