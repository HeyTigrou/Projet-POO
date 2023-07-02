#pragma once
#include "pch.h"

namespace COMP {
	class COMP_gestiontxt{
	private:
		string message;
		ifstream f_in;
		ofstream f_out;
		FILE* file;
	public:
		void ecrire(string, string);
		string lire(string);
		void ecrireBIN(string, string, int);
		string lireBIN(string, int);
	};
}


