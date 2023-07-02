#include "ihm.h"

Client::ihm::ihm(void) {
	this->obj = new PROCESS::Processus();
}

void Client::ihm::run() {
	this->obj->chiffrermsg("lol");
}