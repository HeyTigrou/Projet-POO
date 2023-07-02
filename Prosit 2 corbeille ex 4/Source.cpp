#include "CifrXor.h"

int main(void) {
	CifrXor* xOR;
	int x = 'lol';
	char r;

	xOR = new CifrXor();

	r = xOR->Xor('b', x);
	cout << r << endl;
	r = xOR->Xor(r, x);
	cout << r << endl;
	system("PAUSE");
}