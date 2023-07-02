#include "pch.h"
#include "Database.h"



Database::Database(void) {
	this->_connectionString = "Data Source = MSI\\POO;"
		+ "Initial Catalog = DB_P6;"
		+ "Persist Security Info = True;"
		+ "User ID = User;"
		+ "Password = password"; //Integrated Security = true;
	//TODO: read these informations from a file (not clear passString)
}

/*
	sendRequest envoie une commande à la bdd et return un résultat dans le dataSet
*/
DataSet^ Database::sendRequest(String^ requestString, String^ dataSetTableName) {
	SqlConnection^ sqlConnection = gcnew SqlConnection(this->_connectionString);	//Etablir connection
	SqlCommand^ command = gcnew SqlCommand(requestString, sqlConnection);			//Ouvrir onj SQL command
	command->CommandType = CommandType::Text;										//Commande de binaire à SQL
	SqlDataAdapter^ datasetAdapter = gcnew SqlDataAdapter(command);					//Design Pattern, patron de conception, ici Adapter
	DataSet^ dataSet = gcnew DataSet();												//Créer un DataSet
	datasetAdapter->Fill(dataSet, dataSetTableName);								//Utiliser l'Adapter Pattern pour faire dataSet
	return dataSet;
}