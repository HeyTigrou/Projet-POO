#include "CLpersonnage.h"

CLpersonnage::CLpersonnage(void)
{
	this->ini_obj(10, 10);
}
CLpersonnage::CLpersonnage(int vitesse, int force)
{
	if (vitesse > 100) { vitesse = 100; } 
	if (force > 100) { force = 100; }
	this->ini_obj(vitesse, force);
}
void CLpersonnage::ini_obj(int vitesse, int force)
{
	this->vitesse = vitesse;
	this->force = force;
	this->invisibilite = 0;
}
void CLpersonnage::afficher(void)
{
	cout << "Je suis le joueur : " << this << ", ma vitesse : " << this->vitesse << " ma force : " << this->force << endl;
}
