#pragma once
//#include <pch.h>	
#include <string>
#include <fstream>


class classe
{
private :
	std::string message;
	std::ifstream f_in;
	std::ofstream f_out;

public:
	void ecrire(std::string, std::string);
	std::string lire(std::string);
};

