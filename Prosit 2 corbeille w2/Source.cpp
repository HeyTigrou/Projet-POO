#include "CLcorbeille2.h"; 

int main(void)
{
	CLcorbeille2* fichier;
	string path;
	string message;
	int buffLenght;

	fichier = new CLcorbeille2();
	path = "C:\\Users\\gauti\\source\\repos\\Projet POO\\Prosit 2 corbeille w2\\Texte.txt";
	message = "bonjour lol";
	buffLenght = message.length();

	fichier->ecrireBIN(message, path, buffLenght);
	message = fichier->lireBIN(path, buffLenght);

	cout << message << endl;

	delete fichier;

	system("PAUSE");
	return 0;
}