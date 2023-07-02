#pragma once
#include "serviceCalcul.h"
#include "serviceFichier.h"

namespace NS_client {
	class ihm
	{
	private :
		NS_svc::serviceCalcul* calcul;
		NS_svc::serviceFichier* fichier;

	public:
		ihm(void);
		void run(void);
	};
}


