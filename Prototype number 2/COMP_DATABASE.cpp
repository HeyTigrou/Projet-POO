#include "COMP_DATABASE.h"

COMPONENT::COMP_DATABASE::COMP_DATABASE(void)
{
	this->_connectionString = "Data Source = MSI\\POO;"
		+ "Initial Catalog = DB_P6;"
		+ "Persist Security Info = True;"
		+ "User ID = User;"
		+ "Password = password";
}

DataSet^ COMPONENT::COMP_DATABASE::sendRequestAddress(String^ requestString, String^ dataSetTableName)
{
	SqlConnection^ sqlConnection = gcnew SqlConnection(this->_connectionString);
	SqlCommand^ command = gcnew SqlCommand(requestString, sqlConnection);
	command->CommandType = CommandType::Text;
	SqlDataAdapter^ dataSetAdapter = gcnew SqlDataAdapter(command);
	DataSet^ dataSet = gcnew DataSet();
	dataSetAdapter->Fill(dataSet, dataSetTableName);
	return dataSet;
}