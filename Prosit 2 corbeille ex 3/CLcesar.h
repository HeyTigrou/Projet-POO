#include <iostream> 
#include <string> 
#include <fstream> 

#pragma once 

class CLcesar
{
private :
	char alphabetCL[27];
	char alphabetCR[27];
public :
	CLcesar(void);
	char getCL(char);
	char getCR(char);
};

