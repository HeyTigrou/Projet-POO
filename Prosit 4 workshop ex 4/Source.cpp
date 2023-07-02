#include <iostream> 
#include <string> 

using namespace std;

class B
{
public:
	void recevoir(string msg);
};

typedef void (B::* p)(string);
p signal = &B::recevoir;

class A
{
public:
	void envoyer(B, string);
};

void A::envoyer(B o, string msg) {
	(o.*signal)(msg);
}

void B::recevoir(string msg) {
	cout << msg << endl;
}

int main(){
	A a;
	B b, c;

	a.envoyer(b, "Hello");
	a.envoyer(c, "Bonjour");
}