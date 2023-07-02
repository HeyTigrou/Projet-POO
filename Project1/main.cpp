#include "CLvoiture.h"
#include "CLstationLavage.h"
#include "CLmoto.h"

int main() {
	int pause;

	CLvoiture* v1, * v2, * m1;
	CLstationLavage station(3);

	v1 = new CLvoiture();
	v2 = new CLvoiture();
	m1 = new CLmoto();

	station.add(v1);
	station.add(v2);
	station.add(m1);

	station.laverLeParc();

	v1 = m1;

	station.update(0, v1);

	station.laverLeParc();

	cin >> pause;
}