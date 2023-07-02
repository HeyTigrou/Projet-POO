//TB_Commande.cpp *****************************************************************************************
#include "pch.h"
#include "TB_Commande.h"


//CRUD
System::String^ NS_Comp_Mappage::TB_Commande::Select(void)
{
	return "SELECT DISTINCT reference_commande, Commander.id_personne AS Numéro_client, Nom, Commander.reference_article, Nom_article, Couleur, Prix_HT, Taux_TVA, quantite_commande, (Prix_HT * quantite_commande) AS Montant_total_HT, ((Prix_HT * quantite_commande) * Taux_TVA) AS Montant_total_TVA, (Prix_HT * quantite_commande) + ((Prix_HT * quantite_commande) * Taux_TVA) AS Montant_total_TTC, Commander.id_date, Date, id_type_date, moyen_paiement, Posseder.id_adresse, Adresse.id_CP, Code_postal.id_ville, Associer_adresse.id_type_adresse FROM Commander INNER JOIN Date ON Commander.id_date = Date.id_date INNER JOIN Avoir ON Date.id_date = Avoir.id_date INNER JOIN Article ON Commander.reference_article = Article.reference_article INNER JOIN Personne ON Commander.id_personne = Personne.id_personne INNER JOIN Posseder ON Posseder.id_personne = Personne.id_personne INNER JOIN Adresse ON Adresse.id_adresse = Posseder.id_adresse INNER JOIN Associer_adresse ON Associer_adresse.id_adresse = Adresse.id_adresse INNER JOIN Code_postal ON Code_postal.id_CP = Adresse.id_CP WHERE id_type_date = 'emission' AND id_type_adresse = 'facturation' OR id_type_date = 'paiement' AND id_type_adresse = 'facturation' OR id_type_date = 'date_solde_enregistre' AND id_type_adresse = 'facturation' OR id_type_date = 'livraison' AND id_type_adresse = 'livraison';";

}
System::String^ NS_Comp_Mappage::TB_Commande::Insert(void)
{
	return "INSERT INTO Date(Date) SELECT '" + this->Date + "' FROM Personne WHERE id_personne = '" + this->id_personne + "';INSERT INTO Avoir(id_type_date, id_date) SELECT 'emission', id_date FROM Personne, Date WHERE id_personne = '" + this->id_personne + "' AND Date = '" + this->Date + "';";
}
System::String^ NS_Comp_Mappage::TB_Commande::Delete(void)
{
	return ""; //DELETE FROM Date WHERE id_date = '"+this->Id_Date+"' OR id_date = '" + this->Id_Date + "'; DELETE FROM Avoir WHERE id_date = '" + this->Id_Date + "' OR id_date = '" + this->Id_Date + "'; DELETE FROM Commander WHERE reference_commande = '"+this->Reference_Commande+"';";
}
System::String^ NS_Comp_Mappage::TB_Commande::Update(void)
{
	return "";
}

//SET
void NS_Comp_Mappage::TB_Commande::SetId_personne(int id_personne)
{
	this->id_personne = id_personne;
}
void NS_Comp_Mappage::TB_Commande::SetReference_article(int Reference_article)
{
	this->Reference_article = Reference_article;
}
void NS_Comp_Mappage::TB_Commande::SetId_date(int id_date)
{
	this->id_date = id_date;
}
void NS_Comp_Mappage::TB_Commande::SetReference_commande(System::String^ Reference_commande)
{
	this->Reference_commande = Reference_commande;
}
void NS_Comp_Mappage::TB_Commande::SetQuantite_commande(int Quantite_commande)
{
	this->Quantite_commande = Quantite_commande;
}
void NS_Comp_Mappage::TB_Commande::SetMoyen_paiement(System::String^ Moyen_paiement)
{
	this->Moyen_paiement = Moyen_paiement;
}
void NS_Comp_Mappage::TB_Commande::SetId_adresse(System::String^ id_adresse)
{
	this->id_adresse = id_adresse;
}
void NS_Comp_Mappage::TB_Commande::SetId_type_adresse(System::String^ id_type_adresse)
{
	this->id_type_adresse = id_type_adresse;
}
void NS_Comp_Mappage::TB_Commande::SetId_CP(int id_CP)
{
	this->id_CP = id_CP;
}
void NS_Comp_Mappage::TB_Commande::SetId_ville(System::String^ id_ville)
{
	this->id_ville = id_ville;
}
void NS_Comp_Mappage::TB_Commande::SetId_type_date(System::String^ id_type_date)
{
	this->id_type_date = id_type_date;
}
void NS_Comp_Mappage::TB_Commande::SetDate(int Date)
{
	this->Date = Date;
}



//GET
int NS_Comp_Mappage::TB_Commande::GetId_personne(void) { return this->id_personne; }
int NS_Comp_Mappage::TB_Commande::GetReference_article(void) { return this->Reference_article; }
int NS_Comp_Mappage::TB_Commande::GetId_date(void) { return this->id_date; }
System::String^ NS_Comp_Mappage::TB_Commande::GetReference_commande(void) { return this->Reference_commande; }
int NS_Comp_Mappage::TB_Commande::GetQuantite_commande(void) { return this->Quantite_commande; }
System::String^ NS_Comp_Mappage::TB_Commande::GetMoyen_paiement(void) { return this->Moyen_paiement; }
System::String^ NS_Comp_Mappage::TB_Commande::GetId_adresse(void) { return this->id_adresse; }
System::String^ NS_Comp_Mappage::TB_Commande::GetId_type_adresse(void) { return this->id_type_adresse; }
int NS_Comp_Mappage::TB_Commande::GetId_CP(void) { return this->id_CP; }
System::String^ NS_Comp_Mappage::TB_Commande::GetId_ville(void) { return this->id_ville; }
System::String^ NS_Comp_Mappage::TB_Commande::GetId_type_date(void) { return this->id_type_date; }
int NS_Comp_Mappage::TB_Commande::GetDate(void) { return this->Date; }
