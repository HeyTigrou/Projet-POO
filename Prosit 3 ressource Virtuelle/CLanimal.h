#pragma once
#include <iostream>
using namespace std;

class CLanimal{
public:
	virtual void jeSuis(void) = 0;
	virtual void expression(void) = 0;
};

class CLchien : public CLanimal{
public:
	void jeSuis(void) { 
		cout << "Je suis un chien" << endl; 
	}
	void expression(void) { 
		cout << "Whaouf Whaouf" << endl; 
	}
};

class CLchat : public CLanimal{
public:
	void jeSuis(void) { 
		cout << "Je suis un chat" << endl; 
	}
	void expression(void) { 
		cout << "Miaou Miaou" << endl; 
	}
};