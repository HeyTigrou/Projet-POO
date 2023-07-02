#include "SERV_STATS.h"

SERVICE::SERV_STATS::SERV_STATS()
{
	this->_compDatabase = gcnew COMPONENT::COMP_DATABASE();
}

SERVICE::SERV_STATS::SERV_STATS(int^ mode, String^ text)
{
	if (mode == 1)
	{
		this->_compDatabase = gcnew COMPONENT::COMP_DATABASE();
		this->set_client(text);
	}
	if (mode == 2)
	{
		this->_compDatabase = gcnew COMPONENT::COMP_DATABASE();
		this->set_month(text);
	}
}

String^ SERVICE::SERV_STATS::MonthTurnover(void)
{
	String^ sql;
	sql = "SELECT ..... WHERE Month =" + this->get_month(); +";";
	this->_dataSet = this->_compDatabase->sendRequestAddress(sql, "Colonnes");
	return Convert::ToString(this->_dataSet->Tables["Nom table"]->Rows[1]->ItemArray[1]);
}

DataSet^ SERVICE::SERV_STATS::Top10Products(void)
{
	String^ sql;
	sql = "Requête";
	return this->_compDatabase->sendRequestAddress(sql, "Colonnes");
}

DataSet^ SERVICE::SERV_STATS::Less10Products(void)
{
	String^ sql;
	sql = "Requête";
	return this-> _compDatabase->sendRequestAddress(sql, "Colonnes");
}

String^ SERVICE::SERV_STATS::AverageOrder(void)
{
	String^ sql;
	sql = "Requête";
	this->_dataSet = this->_compDatabase->sendRequestAddress(sql, "Colonnes");
	return Convert::ToString(this->_dataSet->Tables["Nom table"]->Rows[1]->ItemArray[1]);
}

String^ SERVICE::SERV_STATS::TotalClient(void)
{
	String^ sql;
	sql = "Requête";
	this->_dataSet = this->_compDatabase->sendRequestAddress(sql, "Colonnes");
	return Convert::ToString(this->_dataSet->Tables["Nom table"]->Rows[1]->ItemArray[1]);
}

void SERVICE::SERV_STATS::set_month(String^ month)
{
	if (month != "")
	{
		this->_month = month;
	}
}

void SERVICE::SERV_STATS::set_client(String^ client)
{
	if (client != "")
	{
		this->_client = client;
	}
}

String^ SERVICE::SERV_STATS::get_month(void)
{
	return this->_month;
}

String^ SERVICE::SERV_STATS::get_client(void)
{
	return this->_client;
}