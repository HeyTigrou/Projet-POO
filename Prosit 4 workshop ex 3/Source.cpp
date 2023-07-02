#include <iostream>

using namespace std;

typedef struct valeur {
	int nombre;
	valeur* suivant;
};

void Afficher(valeur* tab) {
	while (tab != NULL) {
		cout << tab->nombre << endl;
		tab = tab->suivant;
	}
}

int main() {
	valeur o1, o2, o3;
	valeur* start;

	o1.nombre = 1;
	o2.nombre = 2;
	o3.nombre = 3;

	start = &o1;

	o1.suivant = &o2;
	o2.suivant = &o3;
	o3.suivant = NULL;

	Afficher(start);
}