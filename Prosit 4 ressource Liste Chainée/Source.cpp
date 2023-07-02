#include <iostream>

using namespace std;

typedef struct Personne {
	int age;
	char prenom[30];
	char nom[30];
	struct Personne* suivant;
}P;

void afficher(P*);

int main() {
	P p1, p2, p3, * liste;

	p1.age = 10;
	p2.age = 20;
	p3.age = 30;

	strcpy_s(p1.nom, "A");
	strcpy_s(p2.nom, "B");
	strcpy_s(p3.nom, "C");

	strcpy_s(p1.prenom, "a");
	strcpy_s(p2.prenom, "b");
	strcpy_s(p3.prenom, "c");

	liste = &p1;
	p1.suivant = &p2;
	p2.suivant = &p3;
	p3.suivant = NULL;

	afficher(liste);
}

void afficher(P* l) {
	while (l != NULL) {
		cout << l->age << " " << l->prenom << " " << l->nom << endl;
		l = l->suivant;
	}
}