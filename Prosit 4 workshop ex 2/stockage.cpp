#include "stockage.h"

stockage::stockage(int taille) {
	this->taille = taille;
	this->index = 0;
	tab = new A* [this->taille];
}

stockage::~stockage() {
	delete* tab;
	cout << "\nStockage supprime" << endl;
}

void stockage::ajouter(A* obj) {
	tab[this->index] = obj;
	this->index++;
}

void stockage::ajouter(int index, A* obj) {
	tab[index-1] = obj;
}

void stockage::showallobj() {
	for (int i(0); i < this->taille; i++) {
		tab[i]->m();	
	}
	cout << "\n" << endl;
}