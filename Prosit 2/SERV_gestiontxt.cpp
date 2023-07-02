#include "SERV_gestiontxt.h"

void SERV::SERV_gestiontxt::ServEcrire(string text) {
	this->txt->ecrire(text, path);
}

string SERV::SERV_gestiontxt::Servlire() {
	stc=this->txt->lire(path);
	return this->stc;
}

void SERV::SERV_gestiontxt::ServEcrireBin(string text, int buffLenght) {
	this->txt->ecrireBIN(text, path, buffLenght);
}

string SERV::SERV_gestiontxt::ServLireBin(int buffLenght) {
	stc=this->txt->lireBIN(path, buffLenght);
	return this->stc;
}