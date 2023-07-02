#include <iostream>

using namespace std;

typedef struct Personne {
	int age;
	string prenom;
	Personne* NEXT;
}P;

void afficher(P*);
void ajouter(P*);
P* liste;
P* save;

int main() {
	P p1, p2, p3, p4, p5;
	p1.age = 10;
	p1.prenom = "AA";
	p1.NEXT = NULL;

	p2.age = 20;
	p2.prenom = "BB";
	p2.NEXT = NULL;

	p3.age = 30;
	p3.prenom = "CC";
	p3.NEXT = NULL;

	p4.age = 40;
	p4.prenom = "DD";
	p4.NEXT = NULL;

	p5.age = 50;
	p5.prenom = "EE";
	p5.NEXT = NULL;

	ajouter(&p1);
	ajouter(&p2);
	ajouter(&p3);
	ajouter(&p4);
	ajouter(&p5);

	afficher(liste);

	system("PAUSE");
}

void ajouter(P* maillon) {
	if (liste == NULL) {
		liste = maillon;
		save = liste;
	}
	else {
		liste->NEXT = maillon;
		liste = liste->NEXT;
	}
}

void afficher(P* liste) {
	liste = save;
	while (liste != NULL) {
		cout << liste << " " << liste->prenom << " " << liste->age << " " << liste->NEXT << endl;
		liste = liste->NEXT;
	}
}