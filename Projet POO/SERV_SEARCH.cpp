#include "SERV_SEARCH.h"

SERVICE::SERV_SEARCH::SERV_SEARCH(String^ columns, String^ table, String^ terms, String^ value)
{
	this->_compDatabase = gcnew COMPONENT::COMP_DATABASE();
	this->set_columns(columns);
	this->set_table(table);
	this->set_terms(terms);
	this->set_value(value);
}

DataSet^ SERVICE::SERV_SEARCH::loadDatabase(void)
{
	String^ sql;
	sql = "SELECT " + this->get_colums() + " FROM " + this->get_table() + " WHERE ("+ this->get_terms()+" "+ this->get_value() + ");";
	return this->_compDatabase->sendRequestAddress(sql, get_colums());
}

void SERVICE::SERV_SEARCH::set_columns(String^ columns)
{
	if (columns != "")
	{
		this->_columns = columns;
	}
}

void SERVICE::SERV_SEARCH::set_table(String^ table)
{
	if (table != "")
	{
		this->_table = table;
	}
}

void SERVICE::SERV_SEARCH::set_terms(String^ terms)
{
	if (terms != "")
	{
		this->_terms = terms;
	}
}

void SERVICE::SERV_SEARCH::set_value(String^ value)
{
	if (value != "")
	{
		this->_value = value;
	}
}

String^ SERVICE::SERV_SEARCH::get_colums(void)
{
	return this->_columns;
}

String^ SERVICE::SERV_SEARCH::get_table(void)
{
	return this->_table;
}

String^ SERVICE::SERV_SEARCH::get_terms(void)
{
	return this->_terms;
}

String^ SERVICE::SERV_SEARCH::get_value(void)
{
	return this->_value;
}