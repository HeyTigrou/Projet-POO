#include <iostream>	
#include "CLcalcul.h"

using namespace std;

int main() {
	int pause;
	CLcalcul o1;
	CLcalcul o2(1, 2);
	CLcalcul* o3;

	o3 = new CLcalcul(30, 2);

	cout << "Resultat : " << o1.add() << endl;
	cout << "Resultat : " << o2.add() << endl;
	cout << "Resultat : " << o2.sous() << endl;
	cout << "Resultat : " << o3->add() << endl;
	cout << "o2.NB1 : " << o2.getNB1() << endl;
	cout << "o2.NB2 : " << o2.getNB2() << endl;

	o2.setNB1(1);
	o2.setNB2(1);

	cout << "Resultat : " << o2.getNB2() << endl;
	cin >> pause;

	delete o3;
}