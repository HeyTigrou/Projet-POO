#include <iostream>
using namespace std;

void fx1(void);
void fx2(void);
void fx3(void);

typedef void (*pf)(void);
pf* index;

int main() {
	int nombre;
	pf addOFFunc[3];

	addOFFunc[0] = &fx1;
	addOFFunc[1] = &fx2;
	addOFFunc[2] = &fx3;

	cout << "Combien de fonctions voulez-vous ?" << endl;
	cin >> nombre;

	index = new pf[nombre];

	for (int i = 0; i < nombre; i++) {
		int ii;
		cout << "Quelle fonction souhaitez-vous a l'indice " << i << " de votre index de fonctions ?" << endl;
		cin >> ii;

		index[i] = addOFFunc[ii];
	}

	for (int i = 0; i < nombre; i++) {
		index[i]();
	}
}

void fx1(void) {
	cout << "fx1" << endl;
}

void fx2(void) {
	cout << "fx2" << endl;
}

void fx3(void) {
	cout << "fx3" << endl;
}