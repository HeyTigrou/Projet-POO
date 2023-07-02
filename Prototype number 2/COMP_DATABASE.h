#pragma once
#include "pch.h"
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

namespace COMPONENT {
	ref class COMP_DATABASE
	{
	private:
		String^ _connectionString;

	public:
		COMP_DATABASE(void);
		DataSet^ sendRequestAddress(String^, String^);
	};
}


