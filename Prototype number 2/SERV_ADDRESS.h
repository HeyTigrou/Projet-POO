#pragma once
#include "COMP_DATABASE.h"
#include "COMP_MAP_ADDRESS.h"

namespace SERVICE
{
	ref class SERV_ADDRESS
	{
	private :
		COMPONENT::COMP_MAP_ADDRESS^ _compMapAddress;
		COMPONENT::COMP_DATABASE^ _compDatabase;

	public :
		SERV_ADDRESS(void);
		DataSet^ loadDatabase(void);
		void deleteData(int);
		void addData(String^, String^, int, int);
		void updateData(int, String^, String^, int, int);
	};
}


