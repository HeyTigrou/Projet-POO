#include "SERV_SHOW.h"

SERVICE::SERV_SHOW::SERV_SHOW(String^ table, int id, int column)
{
	this->_compDatabase = gcnew COMPONENT::COMP_DATABASE();
	this->set_table(table);
	this->set_id(id);
	this->set_column(column);
}

String^ SERVICE::SERV_SHOW::Show()
{
	String^ request = "SELECT * FROM " + this->get_table() + ";";
	this->_dataSet = this->_compDatabase->sendRequestAddress(request, this->get_table());
	String^ table = this->get_table();
	int id = this->get_id();
	int column = this->get_column();
	return Convert::ToString(this->_dataSet->Tables[table]->Rows[id]->ItemArray[column]);
}

void SERVICE::SERV_SHOW::set_table(String^ table)
{
	if (table != "")
	{
		this->_table = table;
	}
}

void SERVICE::SERV_SHOW::set_id(int id)
{
	if (id != 0)
	{
		this->_id = id;
	}
}

void SERVICE::SERV_SHOW::set_column(int column)
{
	if (column != 0)
	{
		this->_column = column;
	}
}

String^ SERVICE::SERV_SHOW::get_table(void)
{
	return this->_table;
}

int SERVICE::SERV_SHOW::get_id(void)
{
	return this->_id;
}

int SERVICE::SERV_SHOW::get_column(void)
{
	return this->_column;
}