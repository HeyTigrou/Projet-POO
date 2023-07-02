#pragma once
#include "CL_CAD.h"
#include "CL_map_TBADRESSES.h"

namespace NS_Comp_Svc
{
	ref class CL_svc_afficherAdresses
	{
	private :
		NS_Composants::CL_CAD^ oCad;
		NS_Composants::CL_map_TBADRESSES^ oMappTB;

	public :
		CL_svc_afficherAdresses(void);
		DataSet^ selectionnerToutesLesAdresses(String^);
		void effacerAdresse(int);
		void ajouterAdresse(String^, String^, int, int);
	};
}


