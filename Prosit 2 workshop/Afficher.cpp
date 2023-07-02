#include "Afficher.h"
#include <iostream>

using namespace std;

Afficher::Afficher(void) {
	this->ini_obj("Il n'y a pas de msg");
}

Afficher::Afficher(string message) {
	this->ini_obj(message);
}

Afficher::Afficher(Afficher& texte) {
	this->ini_obj(texte.getmsg());
}

string Afficher::getmsg() {
	return this->message;
}

void Afficher::ini_obj(string message) {
	this->setmsg(message);
}

void Afficher::setmsg(string message) {
	this->message = message;
}

void Afficher::show() {
	cout << message << endl;
}
