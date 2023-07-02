#include "CLsuperHero.h"

CLsuperHero::CLsuperHero(void)
{
	this->ini_obj(10);
}
CLsuperHero::CLsuperHero(int vitesse, int force, int invisibilite) : CLpersonnage(vitesse, force)
{
	if (invisibilite > 100) { invisibilite = 100; }
	this->ini_obj(invisibilite);
}
void CLsuperHero::ini_obj(int invisibilite)
{
	this->invisibilite = invisibilite;
}
void CLsuperHero::afficher(void)
{
	CLpersonnage::afficher();
	cout << "Mon invisibilite : " << this->invisibilite << endl;
}