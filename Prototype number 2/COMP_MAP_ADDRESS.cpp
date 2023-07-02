#include "COMP_MAP_ADDRESS.h"

using namespace COMPONENT;

void COMP_MAP_ADDRESS::setIdAddresses(int idAddresses)
{
	if (idAddresses > 0)
	{
		this->idAddresses = idAddresses;
	}
}

void COMP_MAP_ADDRESS::setAddress(String^ address)
{
	this->address = address;
}

void COMP_MAP_ADDRESS::setCity(String^ city)
{
	this->city = city;
}

void COMP_MAP_ADDRESS::setPostalCode(int PS)
{
	this->postalCode = PS;
}

void COMP_MAP_ADDRESS::setIdPerson(int idPerson)
{
	this->idPerson = idPerson;
}

int COMP_MAP_ADDRESS::getIdAddresses(void)
{
	return this->idAddresses;
}

String^ COMP_MAP_ADDRESS::getAddress(void)
{
	return this->address;
}

String^ COMP_MAP_ADDRESS::getCity(void)
{
	return this->city;
}

int COMP_MAP_ADDRESS::getPostalCode(void)
{
	return this->postalCode;
}

int COMP_MAP_ADDRESS::getIdPerson(void)
{
	return this->idPerson;
}