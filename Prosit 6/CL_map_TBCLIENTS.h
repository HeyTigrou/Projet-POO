#pragma once

using namespace System;

namespace NS_Composants 
{
	ref class CL_map_TBCLIENTS{
	private :
		int Id_clients;
		String^ Nom;
		String^ Prenom;

	public :
		CL_map_TBCLIENTS(void);

		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		void setId_clients(int);
		void setNom(String^);
		void setPrenom(String^);

		int getId_clients(void);
		String^ getNom(void);
		String^ getPrenom(void);
	};
}


