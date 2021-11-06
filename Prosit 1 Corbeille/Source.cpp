#include "Cla.h"
#include <iostream>

using namespace std;

int main() {
    Cla o1;
    Cla* o2;

    o2 = new Cla();

    o1.afficher();
    o2->afficher();

   cout<< "Adresse de o1 : " << &o1 << endl;
   cout<< "Adresse de o2 : " << &o2 << endl;
   cout<< "Adresse pointee par o2 : " << o2 << endl;
   cout<< "Taille type : " << sizeof(Cla) << " Octets" << endl;
   cout<< "Taille o1 : " << sizeof(o1) << " Octets" << endl;
   cout<< "Taille o2 : " << sizeof(o2) << " Octets" << endl;

    delete o2;
}