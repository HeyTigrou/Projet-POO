#include <iostream>

using namespace std;

void fx1(void) {
	cout << "fx1" << endl;
}

void fx2(void) {
	cout << "fx2" << endl;
}

void fx3(void) {
	cout << "fx3" << endl;
}

typedef void(*fx)(void);

fx addOfFx[3];
fx *pcs;

int main(void) {
	int nombreFx;
	int indice;

	addOfFx[0] = &fx1;
	addOfFx[1] = &fx2;
	addOfFx[2] = &fx3;

	cout << "Combien de fonction(s) doit contenir votre proccessus ?" << endl;
	cin >> nombreFx;

	pcs = new fx[nombreFx];
	indice = 0;

	for (int i = 0; i < nombreFx; i++) {
		cout << "Quelle fonction sera l'etape (" << i + 1 << ") de votre processus ?" << endl;
		cin >> indice;
		pcs[i] = addOfFx[indice];
	}

	cout << "Votre processus va s'executer" << endl;

	for (int i = 0; i < nombreFx; i++) {
		pcs[i]();
	}
	system("PAUSE");
}