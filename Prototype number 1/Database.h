#pragma once
using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Data;

ref class Database
{
private:
	String^ _connectionString;

public:
	Database(void);
	DataSet^ sendRequest(String^, String^);
};