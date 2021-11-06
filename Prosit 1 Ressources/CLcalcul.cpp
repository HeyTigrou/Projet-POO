#include "CLcalcul.h"

CLcalcul::CLcalcul(void) {
	this->ini_obj(0, 0);
}

CLcalcul::CLcalcul(int NB1, int NB2) {
	this->ini_obj(NB1, NB2);
}

void CLcalcul::ini_obj(int NB1, int NB2) {
	this->setNB1(NB1);
	this->setNB2(NB2);
}

int CLcalcul::add(void) {
	return	this->getNB1() + this->getNB2();
}

int CLcalcul::sous(void) {
	return	this->getNB1() - this->getNB2();
}

void CLcalcul::setNB1(int NB1) {
	if (NB1 > 0) {
		this->NB1 = NB1;
	}
	else {
		this->NB1 = 0;
	}
}

void CLcalcul::setNB2(int NB2) {
	if (NB2 > 0) {
		this->NB2 = NB2;
	}
	else {
		this->NB2 = 0;
	}
}

int CLcalcul::getNB1(void) {
	return this->NB1;
}

int CLcalcul::getNB2(void) {
	return this->NB2;
}