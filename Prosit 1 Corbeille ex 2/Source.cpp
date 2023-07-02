#include "CLobject.h"

using namespace std;

void comparer(CLobject, CLobject);
void comparer(CLobject*, CLobject*);

int main() {
	CLobject o1;
	CLobject o2(2,2);
	CLobject* o3;
	CLobject* o4;

	o3 = new CLobject(4, 32);
	o4 = new CLobject(*o3);

	o1.calculer();
	o2.calculer();
	comparer(o1, o2);
	
	o3->calculer();
	o4->calculer();
	comparer(o3, o4);

	delete o3;
	cout << o4->getMasse() << o4->getVitesse() << endl;
}

void comparer(CLobject o1, CLobject o2) {
	if (o1.getEc() > o2.getEc()) {
		cout << "Objet 1 + Energie que Objet 2" << endl;
	}
	if (o1.getEc() == o2.getEc()) {
		cout << "Les deux objets ont la meme energie" << endl;
	}
	else {
		cout << "Objet 2 + Energie que Objet 1" << endl;
	}
}

void comparer(CLobject* obj1, CLobject* obj2) {
	if (obj1->getEc() > obj2->getEc()) {
		cout << "Objet 1 + Energie que Objet 2" << endl;
	}
	if (obj1->getEc() == obj2->getEc()) {
		cout << "Les deux objets ont la meme energie" << endl;
	}
	else {
		cout << "Objet 2 + Energie que Objet 1" << endl;
	}
}