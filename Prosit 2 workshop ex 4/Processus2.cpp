#include "Processus2.h"

void Process::Processus2::process2(void) {
	this->Serv = new Serv::gpcs2s1();
}

void Process::Processus2::useprocess(void) {
	this->Serv->afficher();
}