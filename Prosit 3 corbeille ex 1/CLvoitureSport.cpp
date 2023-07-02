#include "CLvoitureSport.h"

CLvoitureSport::CLvoitureSport(void) {
	this->ini_obj(200, 8);
}

CLvoitureSport::CLvoitureSport(int vitesseMax, int acceleration) {
	if (vitesseMax > 200){
		this->vitesseMax = 200;
	}
	else{
		this->vitesseMax = vitesseMax;
	}

	if (acceleration > 8){
		this->acceleration = 8;
	}
	else{
		this->acceleration = acceleration;
	}
}

void CLvoitureSport::ini_obj(int vitesseMax, int acceleration) {
	if (vitesseMax > 200){
		this->vitesseMax = 200;
	}
	else{
		this->vitesseMax = vitesseMax;
	}

	if (acceleration > 8){
		this->acceleration = 8;
	}
	else{
		this->acceleration = acceleration;
	}
}

void CLvoitureSport::accelerer(void){
	int i;
	for (i = 0; this->vitesse <= this->vitesseMax; i++)
	{
		cout << "Vitesse : " << this->vitesse << endl;
		cout << "Je roule en mode sport" << endl;
		this->vitesse += this->acceleration;
	}
}