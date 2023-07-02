#pragma once
#include "COMP_DATABASE.h"

namespace SERVICE
{
	ref class SERV_STATS
	{
	private :
		COMPONENT::COMP_DATABASE^ _compDatabase;
		String^ _month;
		String^ _client;
		DataSet^ _dataSet;

	public :
		SERV_STATS();
		SERV_STATS(int^, String^);

		String^ MonthTurnover(void);
		DataSet^ Top10Products(void);
		DataSet^ Less10Products(void);
		String^ AverageOrder(void);
		String^ TotalClient(void);

		void set_month(String^);
		void set_client(String^);

		String^ get_month(void);
		String^ get_client(void);
	};
}


