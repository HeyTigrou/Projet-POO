
#include "CLaddition.h"
#include "CLtva.h"

#pragma once

namespace NS_svc {
	class serviceCalcul
	{
	private :
		NS_composants::CLaddition* addition;
		NS_composants::CLtva* tva;
		double grilleCouts[3];

	public :
		serviceCalcul(void);
		double* calculerMontantTTC(double*, int);
	};
}


