#include "CLvoiture.h"
#include <iostream>

using namespace std;

int main() {
	CLvoiture v1(20, 1);
	CLvoiture v2(300, 10);
	CLvoiture* v3;

	v3 = new CLvoiture(160, 2);

	v1.accelerer();
	v2.accelerer();
	v3->accelerer();
}