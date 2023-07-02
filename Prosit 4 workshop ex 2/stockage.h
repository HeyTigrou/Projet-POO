#pragma once
#include "A.h"

class stockage
{
private : 
	int taille;
	int index;
	A** tab;


public :
	stockage(int);
	~stockage(void); // création d'un destructeur (pas demandé mais osef c'est drôle)
	void ajouter(A*);
	void ajouter(int, A*);
	void showallobj(void);
};

