#include "ihm.h"

ihm::ihm(void) {
	this->prs = new CLprocessus();
}

void ihm::run() {
	short int choix;
	bool confirm = 0;

	while (confirm == 0) {
		cout << "Quel type de parcours ?\n" << "1 : Parcours 2D\n" << "2 : Parcours 3D\n"<<"3 : Afficher coordonnees point 2D\n"<<"4 : Afficher coordonnees point 3D\n"<<"5 : Convertir un point 3D en 2D\n";
		cin >> choix;
		if (choix > 0 && choix < 6) {
			confirm = 1;
		}
	}
	switch (choix){
	case 1 :
		this->prs->proccess2D();
		delete prs;
		break;

	case 2 :
		this->prs->proccess3D();
		delete prs;
		break;

	case 3 :
		CLpoint * p1;
		p1 = new CLpoint(0.0, 1.0);
		this->prs->affichercoord(p1);
		delete prs;
		break;

	case 4 :
		CLpoint3D * p2;
		p2 = new CLpoint3D(0.0, 1.0, 2.0);
		this->prs->affichercoord(p2);
		delete prs;
		break;

	case 5 :
		CLpoint* p3;
		CLpoint3D* p4;
		p3 = new CLpoint(0.0, 0.0);
		p4 = new CLpoint3D(1.0, 2.0, 3.0);
		p3 = p4;
		p3->afficherCoordo();
		break;
	}
}