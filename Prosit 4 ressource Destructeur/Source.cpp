#include <iostream>

using namespace std;

class Cla {
private :
	int* p;

public :
	Cla(int);
	~Cla(void);
};

Cla::Cla(int nb) {
	p = new int[nb];
}

Cla::~Cla(void) {
	delete[] p;
}

int main() {
	Cla* pa;
	pa = new Cla(42);
	delete pa;
}