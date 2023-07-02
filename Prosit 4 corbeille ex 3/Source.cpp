#include <iostream>

using namespace std;

void fx1(void) {
	cout << "fx1" << endl;
}

void fx2(void) {
	cout << "fx2" << endl;
}

void fx3(void) {
	cout << "fx3" << endl;
}

typedef void(*fx)(void);
fx* pf;

void main(void) {
	int val;
	cin >> val;
	pf = new fx[val];

	for (int i = 0; i < val; i++)
	{
		pf[i] = &fx2;
	}

	for (int j = 0; j < val; j++) {
		pf[j]();
	}
	system("PAUSE");
}