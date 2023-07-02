#include <iostream> 
#include <string> 
#include <fstream> 


#include "classe.h"
//#include "stdafx.h"


int main() {
	classe* fichier;
	std::string path;
	std::string message;
	fichier = new classe();
	path = "C:\\Users\\gauti\\source\\repos\\Projet POO\\Prosit 2 corbeille ex1\\unfichier.txt";
	message = "bonjour";
	fichier->ecrire(message, path);
	message = fichier->lire(path);
	std::cout << message << std::endl;
	delete fichier;
	system("PAUSE");
	return 0;
}