#include "SERV_ADDRESS.h"

SERVICE::SERV_ADDRESS::SERV_ADDRESS(void)
{
	this->_compDatabase = gcnew COMPONENT::COMP_DATABASE();
	this->_compMapAddress = gcnew COMPONENT::COMP_MAP_ADDRESS();
}

DataSet^ SERVICE::SERV_ADDRESS::loadDatabase(void)
{
	String^ sql;
	sql = "SELECT * FROM [DB_P6_prosit].[dbo].[Adresses]";
	return this->_compDatabase->sendRequestAddress(sql, "Adresses");
}

void SERVICE::SERV_ADDRESS::deleteData(int idAddress)
{
	String^ sql;
	this->_compMapAddress->setIdAddresses(idAddress);
	sql = "DELETE FROM [DB_P6_prosit].[dbo].[Adresses] WHERE(Id_adresses = " + this->_compMapAddress->getIdAddresses() + ")";
	this->_compDatabase->sendRequestAddress(sql, "Adresses");
}

void SERVICE::SERV_ADDRESS::addData(String^ Address, String^ City, int postalCode, int idPerson)
{
	String^ sql;
	this->_compMapAddress->setAddress(Address);
	this->_compMapAddress->setCity(City);
	this->_compMapAddress->setPostalCode(postalCode);
	this->_compMapAddress->setIdPerson(idPerson);

	sql = "INSERT INTO [DB_P6_prosit].[dbo].[Adresses] (Adresse, Ville, Code_Postal, Id_personne) VALUES('" + this->_compMapAddress->getAddress() + "', '" + this->_compMapAddress->getCity() + "', '" + this->_compMapAddress->getPostalCode() + "', '" + this->_compMapAddress->getIdPerson() + "');";
	this->_compDatabase->sendRequestAddress(sql, "Adresses");
}

void SERVICE::SERV_ADDRESS::updateData(int idAddress, String^ Address, String^ City, int postalCode, int idPerson)
{
	String^ sql;
	this->_compMapAddress->setIdAddresses(idAddress);
	this->_compMapAddress->setAddress(Address);
	this->_compMapAddress->setCity(City);
	this->_compMapAddress->setPostalCode(postalCode);
	this->_compMapAddress->setIdPerson(idPerson);

	sql = "UPDATE [DB_P6_prosit].[dbo].[Adresses] SET Adresse = '" + this->_compMapAddress->getAddress() + "', Ville = '" + this->_compMapAddress->getCity() + "', Code_Postal = '" + this->_compMapAddress->getPostalCode() + "', Id_personne = '" + this->_compMapAddress->getIdPerson() + "' WHERE(Id_adresses ='" + this->_compMapAddress->getIdAddresses() + "');";
	this->_compDatabase->sendRequestAddress(sql, "Adresses");
}