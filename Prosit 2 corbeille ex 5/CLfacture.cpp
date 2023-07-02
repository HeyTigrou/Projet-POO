#include "CLfacture.h"

void NS_composants::CLfacture::imprimerFacture(double montantHT, double montantTVA, double montantTTC) {
	ofstream flux("C:\\Users\\gauti\\source\\repos\\Projet POO\\Prosit 2 corbeille ex 5\\facture.txt");
	flux << "Le montant total HT est de : " << montantHT << "\n";
	flux << "Le montant de la TVA est de : " << montantTVA << "\n";
	flux << "Le montant total TTC est de : " << montantTTC;
	flux.close();
}