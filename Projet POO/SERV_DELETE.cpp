#include "SERV_DELETE.h"

SERVICE::SERV_DELETE::SERV_DELETE(String^ table, String^ value, String^ condition) 
{
	this->_compDatabase = gcnew COMPONENT::COMP_DATABASE();
	this->set_table(table);
	this->set_value(value);
	this->set_condition(condition);
}

void SERVICE::SERV_DELETE::Delete(void)
{
	String^ sql;
	sql = "UPDATE " + this->get_table() + " SET " + this->get_value() + " WHERE " + this->get_condition()+";";
	this->_compDatabase->sendRequestAddress(sql, this->get_table());
}

void SERVICE::SERV_DELETE::set_table(String^ table)
{
	if (table != "")
	{
		this->_table = table;
	}
}

void SERVICE::SERV_DELETE::set_value(String^ value)
{
	if (value != "")
	{
		this->_value = value;
	}
}

void SERVICE::SERV_DELETE::set_condition(String^ condition)
{
	if (condition != "")
	{
		this->_condition = condition;
	}
}

String^ SERVICE::SERV_DELETE::get_table(void)
{
	return this->_table;
}

String^ SERVICE::SERV_DELETE::get_value(void)
{
	return this->_value;
}

String^ SERVICE::SERV_DELETE::get_condition(void)
{
	return this->_condition;
}