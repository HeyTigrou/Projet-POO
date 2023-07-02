#include "CLanimal.h"

int main()
{
	int choix;
	CLanimal* animal;

	cout << "Quel animal voulez vous utiliser ?" << endl;
	cin >> choix;

	if (choix == 1)
	{
		animal = new CLchat();
	}
	else
	{
		animal = new CLchien();
	}

	animal->jeSuis();
	animal->expression();
	delete animal;

	animal = new CLchien();
	animal->jeSuis();
	animal->expression();
}