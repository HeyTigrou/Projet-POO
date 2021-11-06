#include "CLobject.h"
#include <iostream>
#include <math.h>

using namespace std;

CLobject::CLobject(void) {
	this->ini_obj(0, 0);
}

CLobject::CLobject(double vitesse, double masse) {
	this->ini_obj(vitesse, masse);
}

CLobject::CLobject(CLobject& obj) {
	this->ini_obj(obj.getVitesse(), obj.getMasse());
}

void CLobject::ini_obj(double vitesse, double masse) {
	this->setVitesse(vitesse);
	this->setMasse(masse);
}

void CLobject::calculer(void) {
	this->ec = 0.00;
	this->ec = 0.5 * this->getMasse() * pow(this->getVitesse(), 2);
	cout << "Resultat : " << this->ec << endl;
}

double CLobject::getMasse(void) {
	return this->masse;
}

double CLobject::getVitesse(void) {
	return this->vitesse;
}

void CLobject::setMasse(double masse) {
	if (masse < 0) {
		this->masse = 0;
	}
	else {
		this->masse = masse;
	}
}

void CLobject::setVitesse(double vitesse) {
	if (vitesse < 0) {
		this->vitesse = 0;
	}
	else {
		this->vitesse = vitesse;
	}
}

double CLobject::getEc(void) {
	return this->ec;
}
