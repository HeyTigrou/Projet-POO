#include "SERV_INSERT.h"

SERVICE::SERV_INSERT::SERV_INSERT(String^ table, String^ columns, String^ values)
{
	this->_compDatabase = gcnew COMPONENT::COMP_DATABASE();
	this->set_table(table);
	this->set_columns(columns);
	this->set_values(values);
}

void SERVICE::SERV_INSERT::Insert(void)
{
	String^ sql;
	sql = "INSERT INTO " + this->get_table() + " (" + this->get_columns() + ") VALUES (" + this->get_value() + ");";
	this->_compDatabase->sendRequestAddress(sql, this->get_table());
}

void SERVICE::SERV_INSERT::set_table(String^ table)
{
	if (table != "")
	{
		this->_table = table;
	}
}

void SERVICE::SERV_INSERT::set_columns(String^ columns)
{
	if (columns != "")
	{
		this->_columns = columns;
	}
}

void SERVICE::SERV_INSERT::set_values(String^ values)
{
	if (values != "")
	{
		this->_values = values;
	}
}

String^ SERVICE::SERV_INSERT::get_table(void)
{
	return this->_table;
}

String^ SERVICE::SERV_INSERT::get_columns(void)
{
	return this->_columns;
}

String^ SERVICE::SERV_INSERT::get_value(void)
{
	return this->_values;
}