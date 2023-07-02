#include "CLvoiture.h"

int CLvoiture::nbVoiture = 0;

CLvoiture::CLvoiture(void) {
	this->ini_obj(100, 3);
}

CLvoiture::CLvoiture(int vitesseMax, int acceleration) {
	this->ini_obj(vitesseMax, acceleration);
}

void CLvoiture::ini_obj(int vitesseMax, int acceleration) {
	if (vitesseMax > 100) {
		this->vitesseMax = 100;
	}
	else {
		this->vitesseMax = vitesseMax;
	}

	if (acceleration > 3) {
		this->acceleration = 3;
	}
	else {
		this->acceleration = acceleration;
	}

	CLvoiture::nbVoiture++;
	this->vitesse = 0;
	cout << "Creation de l'objet" << CLvoiture::nbVoiture << endl;
}

void CLvoiture::accelerer(void) {
	for (int i = 0; this->vitesse <= this->vitesseMax; i++) {
		cout << "Vitesse : " << this->vitesse << endl;
		cout << "Je roule chill" << endl;
		this->vitesse += this->acceleration;
	}
}
