#pragma once
#include "pch.h"

using namespace System;

namespace COMPONENT
{
	ref class COMP_MAP_ADDRESS
	{
	private :
		int idAddresses;
		String^ address;
		String^ city;
		int postalCode;
		int idPerson;

	public :
		void setIdAddresses(int);
		void setAddress(String^);
		void setCity(String^);
		void setPostalCode(int);
		void setIdPerson(int);

		int getIdAddresses(void);
		String^ getAddress(void);
		String^ getCity(void);
		int getPostalCode(void);
		int getIdPerson(void);
	};
}


