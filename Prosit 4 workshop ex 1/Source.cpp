#include "A.h"
#include "B.h"

int main() {
	// Utilisation classique 
	A* obj1;
	B* obj2;
	obj1 = new A();
	obj2 = new B();
	obj1->m();
	obj2->m();

	//Objet classe A transformé en objet classe B :
	A* obj3 = new B();
	obj3->m();

}