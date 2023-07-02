#include "CLpoint.h"
#include <iostream>

double calcul(CLpoint A, CLpoint B);
void hypothese();
void distance();

int main() {
	short int choix;
	short int mode;
	std::cout << "Que voulez vous faire ? \n" << "1 : Verifier l'hypothese\n" << "2 : Calculer une distance" << std::endl;
	std::cin >> choix;
	if (choix >= 1 && choix <= 2) {
		std::cout << "Choix du mode valide\n" << std::endl;
		mode = choix;
	}
	else {
		std::cout << "Choix du mode invalide\n" << std::endl;
	}
	switch (mode)
	{
	case 1:
		hypothese();
		break;

	case 2:
		distance();
		break;
	}
}

double calcul(CLpoint A, CLpoint B) {
	double dist = sqrt((pow((B.getX() - A.getX()), 2)) + (pow((B.getY() - A.getY()), 2)));
	return dist;
}

void hypothese() {
	CLpoint A;
	CLpoint B(1, 1);

	double expected;
	std::cout << "Quelle est valeur que vous pensez avoir ? " << std::endl;
	std::cin >> expected;

	double valeur = calcul(A, B);

	if (valeur == expected) {
		std::cout << "Votre hypothese est juste" << std::endl;
	}
	else {
		std::cout << "Votre hypothese est fausse" << std::endl;
	}
}

void distance() {
	CLpoint* A;
	CLpoint* B;

	double x1; double y1; double x2; double y2;

	std::cout << "Coordonnees de votre premier point :\n" << "X ?" << std::endl;
	std::cin >> x1;
	std::cout << "Y ?" << std::endl;
	std::cin >> y1;
	A = new CLpoint(x1, y1);

	std::cout << "Coordonnees de votre deuxieme point :\n" << "X ?" << std::endl;
	std::cin >> x2;
	std::cout << "Y ?" << std::endl;
	std::cin >> y2;
	B = new CLpoint(x2, y2);

	double valeur = calcul(*A, *B);

	std::cout << "Voici la distance entre nos deux points " << valeur << std::endl;

	delete A;
	delete B;
}