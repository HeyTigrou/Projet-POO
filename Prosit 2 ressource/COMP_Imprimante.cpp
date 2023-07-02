#include "COMP_Imprimante.h"
#ifndef _IOSTREAM_H
#include <iostream>
#endif // !_IOSTREAM_H

NS_COMP::COMP_Imprimante::COMP_Imprimante(void) {
	std::cout << "Construction du composant Imprimante" << std::endl;
}

void NS_COMP::COMP_Imprimante::imprimer(double* data, int qteFacture) {
	for (int i = 0; i < qteFacture; i++) {
		std::cout << "--------------------------------------------------------------" << "\n";
		std::cout << "--------------------------FACTURE-----------------------------" << "\n";
		std::cout << "--------------------------------------------------------------" << "\n";
		std::cout << "\n";
		std::cout << "Montant total ht : " << data[0] << "\n";
		std::cout << "Montant total tva : " << data[1] << "\n";
		std::cout << "Montant total ttc : " << data[2] << "\n";
		std::cout << std::endl;
	}
}