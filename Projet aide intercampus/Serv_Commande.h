//Serv_Commande.h ********************************************************************************
#pragma once
#include "TB_Commande.h"
#include "CAD.h"

namespace NS_Comp_Svc
{
	ref class Serv_Commande
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::TB_Commande^ oCommande;
	public:
		Serv_Commande(void);
		System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);
		System::Data::DataSet^ ajouterUneCommande(int, int, int, System::String^, int, System::String^, System::String^, System::String^, int, System::String^, System::String^, int);
	};
}

