#include "CLvoiture.h"
#include <iostream>
#include <math.h>

using namespace std;

int CLvoiture::idVoiture = 0;

CLvoiture::CLvoiture(void) {
	this->ini_obj(0, 0);
}

CLvoiture::CLvoiture(int vitesseMax, int acceleration) {
	this->ini_obj(vitesseMax, acceleration);
}

CLvoiture::CLvoiture(CLvoiture& voiture) {
	this->ini_obj(voiture.getVitesseMax(), voiture.getAcceleration());
}

void CLvoiture::ini_obj(int vitesseMax, int acceleration) {
	CLvoiture::idVoiture++;
	this->vitesse = 0;
	this->idV = CLvoiture::idVoiture;
	this->setVitesseMax(vitesseMax);
	this->setAcceleration(acceleration);
	cout << "Creation de la voiture : " << this->getID() << endl;
}

void CLvoiture::accelerer(void) {
	double performance;
	for (int i = 0; this->vitesse < this->getVitesseMax(); i++) {
		cout << "La voiture : " << this->getID() << " roule a la vitesse de : " << this->vitesse << " km/h en " << i << " unite de temps." << endl;
		this->vitesse = this->vitesse + this->getAcceleration();
	}
	performance = ((double)this->getVitesseMax()) / ((double)this->getAcceleration());
	cout << "La perfomance de la voiture " << this->getID() << " est de : " << performance << endl;
}

int CLvoiture::getAcceleration() {
	return this->acceleration;
}

int CLvoiture::getVitesseMax() {
	return this->vitesseMax;
}

int CLvoiture::getID() {
	return this->idV;
}

void CLvoiture::setAcceleration(int acceleration) {
	if (acceleration > 0) {
		this->acceleration = acceleration;
	}
	else {
		this->acceleration = 1;
	}
}

void CLvoiture::setVitesseMax(int vitesseMax) {
	if (vitesseMax > 0) {
		this->vitesseMax = vitesseMax;
	}
	else {
		this->vitesseMax = 1;
	}
}