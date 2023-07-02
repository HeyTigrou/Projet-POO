#include <iostream> 
#include <string> 
#include <fstream> 

using namespace std;

#pragma once
namespace NS_composants {
	class CLtva
	{
	private :
		const double TVA = 1.20;

	public :
		double calculTVA(double);
	};
}


