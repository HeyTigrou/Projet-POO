#include "CL_map_TBCLIENTS.h"

namespace NS_Composants 
{
	CL_map_TBCLIENTS::CL_map_TBCLIENTS(void) 
	{
		this->Id_clients = -1;
		this->Nom = "RIEN";
		this->Prenom = "RIEN";
	}

	String^ CL_map_TBCLIENTS::SELECT(void) 
	{
		return "SELECT Id_clients, Nom, Prenom " + "FROM Clients;";
	}

	String^ CL_map_TBCLIENTS::INSERT(void) 
	{
		return "INSERT INTO Clients " + "(Nom, Prenom)" + "VALUES('" + this->getNom() + "', '" + this->getPrenom() + "');";
	}

	String^ CL_map_TBCLIENTS::UPDATE(void) 
	{
		return "UPDATE Clients " + "SET Nom = '" + this->getNom() + "', Prenom = '" + this->getPrenom() + "' " + "WHERE(Id_clients = " + this->getId_clients() + ");";
	}

	String^ CL_map_TBCLIENTS::DELETE(void) 
	{
		return "DELETE FROM CLIENTS	" + "WHERE(Id_clients = " + this->getId_clients() + ");";
	}

	void CL_map_TBCLIENTS::setId_clients(int Id_clients) 
	{
		if (Id_clients > 0) 
		{
			this->Id_clients = Id_clients;
		}
	}

	void CL_map_TBCLIENTS::setNom(String^ Nom) 
	{
		if (Nom != "") 
		{
			this->Nom = Nom;
		}
	}

	void CL_map_TBCLIENTS::setPrenom(String^ Prenom) 
	{
		if (Prenom != "") 
		{
			this->Prenom = Prenom;
		}
	}

	int CL_map_TBCLIENTS::getId_clients(void) 
	{
		return this->Id_clients;
	}

	String^ CL_map_TBCLIENTS::getNom(void) 
	{
		return this->Nom;
	}

	String^ CL_map_TBCLIENTS::getPrenom(void) 
	{
		return this->Prenom;
	}
}
