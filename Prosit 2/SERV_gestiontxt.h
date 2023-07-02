#include "COMP_gestiontxt.h"
#pragma once

namespace SERV {
	class SERV_gestiontxt{
	private :
		COMP::COMP_gestiontxt* txt;
		string stc;
		

	public :
		string path = "C:\\Users\\gauti\\source\\repos\\Projet POO\\Prosit 2\\Texte.txt";
		void ServEcrire(string);
		string Servlire();
		void ServEcrireBin(string, int);
		string ServLireBin(int);
	};
}


