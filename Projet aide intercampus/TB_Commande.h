//TB_Commande.h *********************************************************************************
#pragma once
namespace NS_Comp_Mappage
{
	ref class TB_Commande
	{
	private:
		System::String^ sSql;

		//Commander
		int id_personne;
		int Reference_article;
		int id_date;
		System::String^ Reference_commande;
		int Quantite_commande;
		System::String^ Moyen_paiement;
		//Adresse
		System::String^ id_adresse;
		System::String^ id_type_adresse;
		int id_CP;
		System::String^ id_ville;
		//Dates
		System::String^ id_type_date;
		int Date;

	public:
		//CRUD
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		//SET
		void SetId_personne(int);
		void SetReference_article(int);
		void SetId_date(int);
		void SetReference_commande(System::String^);
		void SetQuantite_commande(int);
		void SetMoyen_paiement(System::String^);
		void SetId_adresse(System::String^);
		void SetId_type_adresse(System::String^);
		void SetId_CP(int);
		void SetId_ville(System::String^);
		void SetId_type_date(System::String^);
		void SetDate(int);

		//GET
		int GetId_personne(void);
		int GetReference_article(void);
		int GetId_date(void);
		System::String^ GetReference_commande(void);
		int GetQuantite_commande(void);
		System::String^ GetMoyen_paiement(void);
		System::String^ GetId_adresse(void);
		System::String^ GetId_type_adresse(void);
		int GetId_CP(void);
		System::String^ GetId_ville(void);
		System::String^ GetId_type_date(void);
		int GetDate(void);
	};
}

