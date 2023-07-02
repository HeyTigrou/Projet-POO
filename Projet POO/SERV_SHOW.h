#pragma once
#include "COMP_DATABASE.h"

namespace SERVICE
{
	ref class SERV_SHOW
	{
	private :
		COMPONENT::COMP_DATABASE^ _compDatabase;
		String^ _table;
		int _id;
		int _column;
		DataSet^ _dataSet;

	public :
		SERV_SHOW(String^, int, int);
		String^ Show(void);

		void set_table(String^);
		void set_id(int);
		void set_column(int);

		String^ get_table(void);
		int get_id(void);
		int get_column(void);
	};
}


