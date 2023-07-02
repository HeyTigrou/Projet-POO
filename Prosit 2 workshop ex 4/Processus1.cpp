#include "Processus1.h"

void Process::Processus1::process1(void) {
	this->Serv1 = new Serv::gpcs1s1();
	this->Serv2 = new Serv::gpcs1s2();
}

void Process::Processus1::useprocess(void) {
	this->Serv1->afficher();
	this->Serv2->afficher();
}