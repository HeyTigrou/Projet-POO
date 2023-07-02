#pragma once
#include "COMP_calcul.h"
#include "COMP_Imprimante.h"

namespace NS_SVC {
	class SVC_facture
	{
	private : 
		NS_COMP::COMP_calcul * Ocalcul;
		NS_COMP::COMP_Imprimante* oImprimante;
	public :
		SVC_facture(void);
		void calculer_et_editer_facture(double, double, double, int);
	};
}


