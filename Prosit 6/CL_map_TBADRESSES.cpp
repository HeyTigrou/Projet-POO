#include "CL_map_TBADRESSES.h"
using namespace NS_Composants;
String^ CL_map_TBADRESSES::SELECT() 
{
	return "SELECT [Id_adresses], [Adresse], [Ville], [Code_Postal], [Id_personne] FROM [DB_P6_prosit].[dbo].[Adresses]";
}

String^ CL_map_TBADRESSES::INSERT()
{
	return "INSERT INTO [DB_P6_prosit].[dbo].[Adresses] (Adresse, Ville, Code_Postal, Id_personne) VALUES('"+this->getAdresse()+"', '"+this->getVille()+"', '"+this->getCode_Postal()+"', '"+this->getCode_Postal()+"');";
}

String^ CL_map_TBADRESSES::DELETE()
{
	return "DELETE FROM [DB_P6_prosit].[dbo].[Adresses] WHERE(Id_personne = " + this->getId_personne() + ");";
}

String^ CL_map_TBADRESSES::UPDATE()
{
	return "UPDATE Adresse SET Adresse = '"+this->getAdresse()+"', Ville = '"+this->getVille()+"', Code_Postal = '"+this->getCode_Postal()+"' WHERE(Id_personne ='"+this->getId_personne()+"');";
}

void CL_map_TBADRESSES::setId_adresses(int Id_adresses) 
{
	if (Id_adresses > 0) {
		this->Id_adresses = Id_adresses;
	}
}

void CL_map_TBADRESSES::setAdresse(String^ adresse) 
{
	this->Adresse = adresse;
}

void CL_map_TBADRESSES::setVille(String^ ville) 
{
	this->Ville = ville;
}

void CL_map_TBADRESSES::setCode_Postal(int CP)
{
	this->Code_Postal = CP;
}

void CL_map_TBADRESSES::setId_personne(int Id_personne)
{
	if (Id_personne > 0) {
		this->Id_personne = Id_personne;
	}
}

int CL_map_TBADRESSES::getId_adresses()
{
	return this->Id_adresses;
}

String^ CL_map_TBADRESSES::getAdresse() 
{
	return this->Adresse;
}

String^ CL_map_TBADRESSES::getVille() 
{
	return this->Ville;
}

int CL_map_TBADRESSES::getCode_Postal()
{
	return this->Code_Postal;
}

int CL_map_TBADRESSES::getId_personne()
{
	return this->Id_personne;
}
