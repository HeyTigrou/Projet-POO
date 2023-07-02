#include <iostream>

using namespace std;

typedef void(*fx)(void);
fx event;

class A {
public :
	void m(void) {
		cout << "A" << endl;
		event();
	}
};

class B {
public :
	B(void) {
		event = &B::m;
	}
	static void m(void) {
		cout << "B" << endl;
	}
};

void main(void) {
	A oA;
	B oB;

	oA.m();

	system("PAUSE");
}