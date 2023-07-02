#include <iostream>
#include <string>

using namespace std;

typedef struct Message{
	int multiplexeur;
	string data;
	Message* NEXT;
}MSG;

typedef void(*pf)(MSG*);
pf espaceHertzien;

class posteFM{
private:
	static MSG* list;
	static MSG* save;
	int* multiplexeur;
	int taille;
	string nomUtilisateur;

public:
	posteFM(int* multiplexeur, int taille, string nomUtilisateur){
		this->multiplexeur = multiplexeur;
		this->nomUtilisateur = nomUtilisateur;
		espaceHertzien = &posteFM::antennePhysique;
		this->taille = taille;
	}

	~posteFM(void){
		cout << "liberation de canaux d'ecoutes" << endl;
		delete[] multiplexeur;
	}

	static void antennePhysique(MSG* signal){
		if (list == NULL){
			list = signal;
			save = list;
		}
		else{
			list->NEXT = signal;
			list = list->NEXT;
		}
	}

	void ecouter(void){
		list = save;
		while (list != NULL){
			for (int i = 0; i < this->taille; i++){
				if (list->multiplexeur == this->multiplexeur[i]){
					cout << "Je suis le poste de : " << this->nomUtilisateur << endl;
					cout << list->multiplexeur << " " << list->data << endl;
				}
			}
			list = list->NEXT;
		}
	}
};

MSG* posteFM::list = NULL;
MSG* posteFM::save = NULL;

class stationRadio{
public:
	void emmettre(MSG* message){
		cout << "\nEmmission d'un signal Hertzien en cours\n" << endl;
		espaceHertzien(message);
	}
};

void main(void){
	stationRadio NRJ;
	stationRadio FunRadio;

	posteFM* poste1;
	posteFM* poste2;

	MSG* messageNRJ1;
	MSG* messageNRJ2;

	MSG* messageFUNRadio1;
	MSG* messageFUNRadio2;

	poste1 = new posteFM(new int[1]{ 1 }, 1, "Manu");
	poste2 = new posteFM(new int[2]{ 1,2 }, 2, "Marina");

	messageNRJ1 = new MSG;
	messageNRJ2 = new MSG;
	messageFUNRadio1 = new MSG;
	messageFUNRadio2 = new MSG;

	messageNRJ1->data = "Musique NRJ\n";
	messageNRJ1->multiplexeur = 1;
	messageNRJ1->NEXT = NULL;

	messageNRJ2->data = "La suite du programme de NRJ\n";
	messageNRJ2->multiplexeur = 1;
	messageNRJ2->NEXT = NULL;

	messageFUNRadio1->data = "Musique Fun Radio\n";
	messageFUNRadio1->multiplexeur = 2;
	messageFUNRadio1->NEXT = NULL;

	messageFUNRadio2->data = "La suite du programme de Fun Radio\n";
	messageFUNRadio2->multiplexeur = 2;
	messageFUNRadio2->NEXT = NULL;

	NRJ.emmettre(messageNRJ1);
	FunRadio.emmettre(messageFUNRadio1);
	FunRadio.emmettre(messageFUNRadio2);

	poste1->ecouter();
	poste2->ecouter();

	NRJ.emmettre(messageNRJ2);

	poste1->ecouter();
	poste2->ecouter();

	delete poste1;
	delete poste2;
	system("PAUSE");
}
