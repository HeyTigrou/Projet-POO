#include "CLsuperHero.h"

int main()
{
	CLpersonnage p1;
	CLsuperHero p2;
	CLpersonnage* poly;

	p1.afficher();
	p2.afficher();

	poly = &p1;
	poly->afficher();

	poly = &p2;
	poly->afficher();

	poly = new CLsuperHero(80, 80, 80);
	poly->afficher();
}