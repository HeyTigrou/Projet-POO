#include <iostream>

using namespace std;

typedef void (*evt)(const char*);

evt e;

//------------------------------------------------------------------

class REC {
public : 
	static void ecoute(const char*);
};

void REC::ecoute(const char* message) {
	cout << message << endl;
}

//------------------------------------------------------------------

class EM {
public : 
	void signal(const char*);
};

void EM::signal(const char* message) {
	e = &REC::ecoute;
	e(message);
}

//------------------------------------------------------------------

int main() {
	EM emission;
	emission.signal("Salut");
}