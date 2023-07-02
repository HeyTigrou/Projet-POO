#include <iostream>
using namespace std;

#pragma once
class CLanimal
{
public :
	void jeSuis(void) {
		cout << "Je suis un animal" << endl;
	}
	virtual void expression(void) = 0;
};

class CLchat : public CLanimal {
public:
	void expression(void) {
		cout << "Miaou Miaou" << endl;
	}
};

class CLchien : public CLanimal {
	void expression(void) {
		cout << "Whaouf Whaouf" << endl;
	}
};

