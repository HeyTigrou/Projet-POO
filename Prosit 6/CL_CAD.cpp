#include "CL_CAD.h"

namespace NS_Composants 
{
	CL_CAD::CL_CAD(void) 
	{
		this->rq_sql = "RIEN";
		this->cnx = "Data Source=MSI\\POO;Initial Catalog=DB_P6_prosit;Integrated Security=True";
		//this->cnx = "Data Source=MSI\\POO;Initial Catalog=DB_P6_prosit;User ID=User;Password=***********";
		this->CNX = gcnew SqlConnection(this->cnx);
		this->CMD = gcnew SqlCommand(this->rq_sql, this->CNX);
		this->CMD->CommandType = CommandType::Text;
	}

	int CL_CAD::actionRowsID(String^ rq_sql) 
	{
		int id;
		this->setSQL(rq_sql);
		this->CMD->CommandText = this->rq_sql;
		this->CNX->Open();
		id = Convert::ToInt32(this->CMD->ExecuteScalar());
		this->CNX->Close();
		return id;
	}

	void CL_CAD::actionRows(String^ rq_sql) 
	{
		this->setSQL(rq_sql);
		this->CMD->CommandText = this->rq_sql;
		this->CNX->Open();
		this->CMD->ExecuteNonQuery();
		this->CNX->Close();
	}

	DataSet^ CL_CAD::getRows(String^ rq_sql, String^ dataTableName) 
	{
		this->setSQL(rq_sql);
		this->DA = gcnew SqlDataAdapter(this->CMD);
		this->CMD->CommandText = this->rq_sql;
		this->DS = gcnew DataSet();
		this->DA->Fill(this->DS, dataTableName);
		return this->DS;
	}

	void CL_CAD::setSQL(String^ rq_sql) 
	{
		if (rq_sql == "" || rq_sql == "RIEN") 
		{
			this->rq_sql = "RIEN";
		}

		else 
		{
			this->rq_sql = rq_sql;
		}
	}
}
