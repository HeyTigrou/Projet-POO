#include "SVC_facture.h"
#ifndef _IOSTREAM_H
#include<iostream>
#endif 

NS_SVC::SVC_facture::SVC_facture(void) {
	std::cout << "Construction du service Facture" << std::endl;
	this->Ocalcul = NULL;
	this->oImprimante = NULL;
}

void NS_SVC::SVC_facture::calculer_et_editer_facture(double puht, double tva, double nbArticle, int qteFacture) {
	double* data;
	this->Ocalcul = new NS_COMP::COMP_calcul(puht, tva, nbArticle);
	this->oImprimante = new NS_COMP::COMP_Imprimante();

	data = this->Ocalcul->calculer();
	this->oImprimante->imprimer(data, qteFacture);

	delete data;
	delete this->Ocalcul;
	delete this->oImprimante;
}
