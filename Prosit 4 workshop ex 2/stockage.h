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
	~stockage(void); // cr�ation d'un destructeur (pas demand� mais osef c'est dr�le)
	void ajouter(A*);
	void ajouter(int, A*);
	void showallobj(void);
};

