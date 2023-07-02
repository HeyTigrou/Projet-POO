#include <iostream>

using namespace std;

class A{
private:
	int* t;
public:
	A(int tailleTab){
		t = new int[tailleTab];
	}
	~A(void) {
		delete[]t;
		cout << "d" << endl;
	}
};

void main(void){
	double i;
	A* p;

	for (i = 0; i < 100; i++){
		p = new A(10);
		//p->~A();
		delete p;
		
	}

	system("PAUSE");
}