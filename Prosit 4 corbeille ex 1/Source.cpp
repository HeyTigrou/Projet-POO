#include <iostream>

using namespace std;

void fx1(void) {
	cout << "FX1" << endl;
}

typedef void(*fx)(void);
fx pf;

void main(void) {
	pf = &fx1;
	pf();
	system("PAUSE");
}


