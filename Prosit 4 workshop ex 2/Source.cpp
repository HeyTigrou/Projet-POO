#include "Header.h"

int main() {
	// Création de nos objets
	A* o1, *o2, *o3, *o4;
	o1 = new A(); 
	o2 = new A();
	o3 = new A();
	o4 = new A();

	stockage* data;
	data = new stockage(4);

	//On ajoute nos objets à notre liste
	data->ajouter(o1);
	data->ajouter(o2);
	data->ajouter(o3);
	data->ajouter(o4);

	data->showallobj();// on use nos f()

	// on modifie l'objet n°2 et le transforme en classe B
	delete o2;
	o2 = new B();

	data->ajouter(2, o2);

	data->showallobj();// on use nos f()

	delete data;// On utilise nos destructeurs 
}