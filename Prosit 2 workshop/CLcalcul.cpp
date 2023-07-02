#include "CLcalcul.h"
#include <iostream>
//using namespace std;

CLcalcul::CLcalcul(void) {
	this->ini_obj(0);
}

CLcalcul::CLcalcul(double n) {
	this->ini_obj(n);
}

void CLcalcul::ini_obj(double n) {
	this->setN(n);
}

void CLcalcul::setN(double n) {
	this->n = n;
}

double CLcalcul::getN(void) {
	return this->n;
}

void CLcalcul::carre() {
	cpteObj= pow(getN(),2);
	std::cout <<"Valeur au carre : " << cpteObj << std::endl;
}


