#pragma once
#include "CL_CAD.h"
#include "CL_map_TBCLIENTS.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_Svc 
{
	ref class CL_svc_gestionPersonnes
	{
	private :
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_TBCLIENTS^ personne;
		DataSet^ ds;

	public :
		CL_svc_gestionPersonnes(void);
		DataSet^ ListePersonnes(String^);
		int ajouter(String^, String^);
		void modifier(int, String^, String^);
		void supprimer(int);
	};
}