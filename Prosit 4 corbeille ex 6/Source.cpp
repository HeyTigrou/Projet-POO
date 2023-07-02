#include <iostream>

using namespace std;

typedef struct Personne {
	int age;
	string prenom;
	Personne* NEXT;
}P;

void afficher(P*);

void main(void) {
	P* Startadress;
	P p1, p2, p3;

	Startadress = &p1;

	p1.age = 10;
	p1.prenom = "AA";
	p1.NEXT = &p2;

	p2.age = 20;
	p2.prenom = "BB";
	p2.NEXT = &p3;

	p3.age = 30;
	p3.prenom = "CC";
	p3.NEXT =NULL;

	afficher(Startadress);
	system("PAUSE");
}

void afficher(P* liste) {
	while (liste != NULL) {
		cout << liste << " " << liste->prenom << " " << liste->age << " " << liste->NEXT << endl;
		liste = liste->NEXT;
	}
}

