#include "COMP_calcul.h"
#include <iostream>

NS_COMP::COMP_calcul::COMP_calcul(double puht, double tva, double qtArticle) {
	std::cout << "Construction du composant Calcul" << std::endl;
	this->puht = puht;
	this->tva = tva;
	this->qteArticle = qtArticle;
}

double* NS_COMP::COMP_calcul::calculer(void) {
	double ptttc;
	double montantTVA;
	double ptht;
	double* data;

	ptht = this->qteArticle * this->puht;
	montantTVA = (ptht * this->tva) / 100;
	ptttc = montantTVA + ptht;

	data = new double[3];
	data[0] = ptht;
	data[1] = montantTVA;
	data[2] = ptttc;
	
	return data;
}