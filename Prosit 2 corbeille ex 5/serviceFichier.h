#pragma once
#include "CLfacture.h"

namespace NS_svc {
	class serviceFichier
	{
	private :
		NS_composants::CLfacture* facture;

	public :
		serviceFichier(void);
		void imprimerFacture(double, double, double);
	};
}


