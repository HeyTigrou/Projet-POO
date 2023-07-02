#pragma once
using namespace System;

namespace NS_Composants 
{
	ref class CL_map_TBADRESSES
	{
	private :
		int Id_adresses;
		String^ Adresse;
		String^ Ville;
		int Code_Postal;
		int Id_personne;

	public :
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);

		void setId_adresses(int);
		void setAdresse(String^);
		void setVille(String^);
		void setCode_Postal(int);
		void setId_personne(int);

		int getId_adresses(void);
		String^ getAdresse(void);
		String^ getVille(void);
		int getCode_Postal(void);
		int getId_personne(void);
	};
}


