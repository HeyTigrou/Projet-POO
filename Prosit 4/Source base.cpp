/*#include <iostream>
#include <string> 

using namespace std;


typedef struct signal {
	string message;
	struct signal* suivant;
}S;

S* Signal1_chain = NULL;
S* Signal2_chain = NULL;

class Message {
public:
	string msg;
};

class EM {
public:
	void diffuser(double, string);
};

class REC {
public:
	void ecouter(double);
};

void EM::diffuser(double frequence, string message) {
	cout << "Le message envoye est : " << message << ", sur la frequence : " << frequence << "\n" << endl;
	if (frequence == 90) {
		S* signal1 = new S;
		signal1->message = message;
		signal1->suivant = Signal1_chain;
		Signal1_chain = signal1;
	}

	else if (frequence == 108) {
		S* signal2 = new S;
		signal2->message = message;
		signal2->suivant = Signal2_chain;
		Signal2_chain = signal2;
	}

	else {
		cout << "Il n'y a aucune radio sur la frequence : " << frequence << "\n" << endl;
	}
}

void REC::ecouter(double frequence) {
	if (frequence == 90) {
		S* signal1 = Signal1_chain;
		while (signal1 != NULL) {
			cout << signal1->message << "\n";
			signal1 = signal1->suivant;
		}
		cout << "Fin message sur la frequence : " << frequence << "\n" << endl;
	}

	else if (frequence == 108) {
		S* signal2 = Signal2_chain;
		while (signal2 != NULL) {
			cout << signal2->message << "\n";
			signal2 = signal2->suivant;
		}
		cout << "Fin message sur la frequence : " << frequence << "\n" << endl;
	}

	else {
		cout << "Il n'y a aucune radio sur la frequence : " << frequence << endl;
	}
}

int main(void) {
	EM France;
	France.diffuser(90, "non.");
	France.diffuser(90, "LOLILOL");

	EM Espagne;
	Espagne.diffuser(108, "Je crois que ca marche");

	REC Cesi;
	Cesi.ecouter(108);

	REC Perso;
	Perso.ecouter(90);
	return 0;
}*/