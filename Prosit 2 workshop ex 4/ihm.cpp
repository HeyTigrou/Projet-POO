#include "ihm.h"

Client::ihm::ihm(void) {
	this->Prs1 = new Process::Processus1();
	this->Prs2 = new Process::Processus2();
}

void Client::ihm::run(void) {
	short int choix;
	bool confirm = 0;
	while (confirm == 0) {
		cout << "Quel processus ?" << endl;
		cin >> choix;
		if (choix > 0 && choix < 3) {
			confirm = 1;
		}
	}
	switch (choix) {
	case 1:
		this->Prs1->useprocess();
		break;
	case 2:
		this->Prs2->useprocess();
		break;
	}
}