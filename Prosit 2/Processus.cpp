#include "Processus.h"

void PROCESS::Processus::chiffrermsg(string message) {
	SERV::SERV_gestiontxt* fichier;
	int buffLenght;

	fichier = new SERV::SERV_gestiontxt();
	buffLenght = message.length();

	fichier->ServEcrireBin(message, buffLenght);
	message = fichier->ServLireBin(buffLenght);
	cout << message << endl;
}
