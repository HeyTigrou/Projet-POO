#pragma once
#include <iostream>

using namespace std;

class Afficher
{
private :
	string message;
	void ini_obj(string);

public : 
	Afficher(void);
	Afficher(string);
	Afficher(Afficher&);
	string getmsg();
	void setmsg(string);
	void show();

};

