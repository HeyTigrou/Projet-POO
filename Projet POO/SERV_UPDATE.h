#pragma once
#include "COMP_DATABASE.h"

namespace SERVICE
{
	ref class SERV_UPDATE
	{
	private :
		COMPONENT::COMP_DATABASE^ _compDatabase;
		String^ _table;
		String^ _value;
		String^ _condition;

	public :
		SERV_UPDATE(String^, String^, String^);
		void Update(void);

		void set_table(String^);
		void set_value(String^);
		void set_condition(String^);

		String^ get_table(void);
		String^ get_value(void);
		String^ get_condition(void);
	};
}


