//Serv_Commande.cpp ***************************************************************************************
#include "pch.h"
#include "Serv_Commande.h"

NS_Comp_Svc::Serv_Commande::Serv_Commande(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oCommande = gcnew NS_Comp_Mappage::TB_Commande();

}
System::Data::DataSet^ NS_Comp_Svc::Serv_Commande::selectionnerToutesLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oCommande->Select();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::Serv_Commande::ajouterUneCommande(int id_personne, int Reference_article, int id_date, System::String^ Reference_commande, int Quantite_commande, System::String^ Moyen_paiement, System::String^ id_adresse, System::String^ id_type_adresse, int id_CP, System::String^ id_ville, System::String^ id_type_date, int Date)
{
	System::String^ sql;

	this->oCommande->SetId_personne(id_personne);
	this->oCommande->SetReference_article(Reference_article);
	this->oCommande->SetId_date(id_date);
	this->oCommande->SetReference_commande(Reference_commande);
	this->oCommande->SetQuantite_commande(Quantite_commande);
	this->oCommande->SetMoyen_paiement(Moyen_paiement);
	this->oCommande->SetId_adresse(id_adresse);
	this->oCommande->SetId_type_adresse(id_type_adresse);
	this->oCommande->SetId_CP(id_CP);
	this->oCommande->SetId_ville(id_ville);
	this->oCommande->SetId_type_date(id_type_date);
	this->oCommande->SetDate(Date);

	sql = this->oCommande->Insert();

	return this->oCad->actionRows(sql);
}
