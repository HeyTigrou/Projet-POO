#include "SVC_facture.h"
#include <iostream>

int main() {
	NS_SVC::SVC_facture facture;
	facture.calculer_et_editer_facture(100.00, 10.00, 2, 3);
	std::cout << "fin" << std::endl;
}