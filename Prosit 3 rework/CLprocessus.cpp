#include "CLprocessus.h"

void CLprocessus::proccess2D() {
	CLpoint* p1;
	CLpoint* p2;
	CLpoint* p3;
	CLparcours2D* parcours;

	p1 = new CLpoint(0.0, 0.0);
	p2 = new CLpoint(1.0, 1.0);
	p3 = new CLpoint(2.0, 2.0);
	parcours = new CLparcours2D();

	parcours->ajouterPoint(*p1);
	parcours->ajouterPoint(*p2);
	parcours->ajouterPoint(*p3);

	cout << parcours->calculDistance() << endl;
	parcours->message();

	delete p1, p2, p3, parcours;
}

void CLprocessus::proccess3D() {
	CLpoint3D* p4;
	CLpoint3D* p5;
	CLpoint3D* p6;
	CLparcours3D* parcours3D;

	p4 = new CLpoint3D(0.0, 0.0, 0.0);
	p5 = new CLpoint3D(1.0, 1.0, 1.0);
	p6 = new CLpoint3D(2.0, 2.0, 2.0);

	parcours3D = new CLparcours3D;

	parcours3D->ajouterPoint(*p4);
	parcours3D->ajouterPoint(*p5);
	parcours3D->ajouterPoint(*p6);

	cout << parcours3D->calculDistance() << '\n';
	parcours3D->message();

	delete p4, p5, p6, parcours3D;
}

void CLprocessus::affichercoord(CLpoint* p1) {
	p1->afficherCoordo();
	delete p1;
}

void CLprocessus::affichercoord(CLpoint3D* p1) {
	p1->afficherCoordo();
	delete p1;
}