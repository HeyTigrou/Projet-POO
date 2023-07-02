#include <iostream>

using namespace std;

void fx1(void) {
	cout << "FX1" << endl;
}

void fx2(void) {
	cout << "FX2" << endl;
}

void fx3(void) {
	cout << "FX3" << endl;
}

typedef void (*fx)(void);
fx pf[3];

void main(void) {
	pf[0] = &fx1;
	pf[1] = &fx2;
	pf[2] = &fx3;

	for (int i = 0; i < 3; ++i) {
		pf[i]();
	}
	system("PAUSE");
}