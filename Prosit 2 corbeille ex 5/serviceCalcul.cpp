#include "serviceCalcul.h"

NS_svc::serviceCalcul::serviceCalcul(void) {
	this->addition = new NS_composants::CLaddition();
	this->tva = new NS_composants::CLtva();
}

double* NS_svc::serviceCalcul::calculerMontantTTC(double* montantsHT, int taille)
{
	double montantTotalHT;
	double montantTotalTTC;
	double montantTVA;

	montantTotalHT = this->addition->addition(montantsHT, taille);
	montantTotalTTC = this->tva->calculTVA(montantTotalHT);
	montantTVA = montantTotalTTC - montantTotalHT;

	this->grilleCouts[0] = montantTotalHT;  
	this->grilleCouts[1] = montantTVA;  
	this -> grilleCouts[2] = montantTotalTTC;

	return this->grilleCouts;
}
