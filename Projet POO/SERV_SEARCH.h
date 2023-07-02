#pragma once
#include "COMP_DATABASE.h"

namespace SERVICE
{
	ref class SERV_SEARCH
	{
	private :
		COMPONENT::COMP_DATABASE^ _compDatabase;
		String^ _columns;
		String^ _table;
		String^ _terms;
		String^ _value;

	public :
		SERV_SEARCH(String^, String^, String^, String^);
		DataSet^ loadDatabase(void);

		void set_columns(String^);
		void set_table(String^);
		void set_terms(String^);
		void set_value(String^);

		String^ get_colums(void);
		String^ get_table(void);
		String^ get_terms(void);
		String^ get_value(void);
	};
}


