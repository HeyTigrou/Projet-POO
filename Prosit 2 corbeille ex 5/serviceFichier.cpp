#include "serviceFichier.h" 

NS_svc::serviceFichier::serviceFichier(void){
	this->facture = new NS_composants::CLfacture();
}
void  NS_svc::serviceFichier::imprimerFacture(double  montantHT, double  montantTVA, double montantTTC){
	this->facture->imprimerFacture(montantHT, montantTVA, montantTTC);
}