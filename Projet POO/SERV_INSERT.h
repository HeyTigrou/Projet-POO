#pragma once
#include "COMP_DATABASE.h"

namespace SERVICE
{
	ref class SERV_INSERT
	{
	private :
		COMPONENT::COMP_DATABASE^ _compDatabase;
		String^ _table;
		String^ _columns;
		String^ _values;

	public :
		SERV_INSERT(String^, String^, String^);
		void Insert(void);

		void set_table(String^);
		void set_columns(String^);
		void set_values(String^);

		String^ get_table(void);
		String^ get_columns(void);
		String^ get_value(void);
	};
}


