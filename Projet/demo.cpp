/*// Une variable ------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{

	int i;

	i = 10;
	cout << i << endl;
	cout << &i << endl;
	cout << sizeof(i) << endl;

}*/

/*//Des variables--------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{

	int v1, v2, v3;

	v1 = 1;
	v2 = 2;
	v3 = 3;

	cout << v1 << endl;
	cout << v2 << endl;
	cout << v3 << endl;

}*/

/*// Un tableau ------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int tab[3];
	int i;

	tab[0] = 10;
	tab[1] = 20;
	tab[2] = 30;

	for (i = 0; i < 3; i++)
	{
		cout << tab[i] << endl;
	}
}*/

/*// Un tableau dynamique -----------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
	int* tab;
	int i;
	int taille;
	int nombre;

	cout << "Quelle taille pour votre tableau ?" << endl;
	cin >> taille;

	tab = new int[taille];

	for (i = 0; i < taille; i++)
	{
		cout << "Quel nombre pour l'indexe " << i << " de votre tableau ?" << endl;
		cin >> nombre;
		tab[i] = nombre;
	}

	for (i = 0; i < taille; i++)
	{
		cout << tab[i] << endl;
	}
	delete tab;
}*/

/*// Un pointeur
#include <iostream>
using namespace std;

int main()
{
	int var;
	int* p;

	var = 10;
	p = &var;

	cout << "La valeur de var : " << var << endl;
	cout << "L'adresse de var : " << &var << endl;
	cout << "La taille de var (taille d'un int) " << sizeof(int) << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << "La valeur pointee par p : " << *p << endl; 
	cout << "L'adresse de p : " << &p << endl;
	cout << "L'adresse pointee par p : " << p << endl; // en octet
	cout << "La taille de p (taille d'un *int) " << sizeof(int*) << endl; // en octet
	cout << "La taille d'une adresse de type double) " << sizeof(double*) << endl; // en octet
	cout << "La taille d'un double " << sizeof(double) << endl; // en octet
	cout << "------------------------------------------------------------------------" << endl;
	*p = 200;
	cout << "La valeur de var : " << var << endl;

}*/

/*// Une structure
#include <iostream>
using namespace std;

typedef struct PERSONNE
{

public:char nom[30];
public:public:char prenom[30];
public:int age;
}P;

int main()
{
	P p1;

	strcpy_s(p1.nom, "A");
	strcpy_s(p1.prenom, "a");
	p1.age = 30;

	cout << p1.nom << endl;
	cout << p1.prenom << endl;
	cout << p1.age << endl;
}*/

/*// Un tableau de structure------------------------------------------------------------
#include <iostream>
using namespace std;

typedef struct PERSONNE
{

public:char nom[30];
public:public:char prenom[30];
public:int age;
}P;

int main()
{
	P p[3];
	int i;

	strcpy_s(p[0].nom, "A");
	strcpy_s(p[0].prenom, "a");
	p[0].age = 30;

	strcpy_s(p[1].nom, "B");
	strcpy_s(p[1].prenom, "b");
	p[1].age = 40;

	strcpy_s(p[2].nom, "C");
	strcpy_s(p[2].prenom, "c");
	p[2].age = 50;

	for (i = 0; i < 3; i++)
	{
		cout << p[i].nom << endl;
		cout << p[i].prenom << endl;
		cout << p[i].age << endl;
	}
}*/

/*// Un tableau dynamique de structure ------------------------------------------------
#include <iostream>
using namespace std;

typedef struct PERSONNE
{

public:char nom[30];
public:public:char prenom[30];
public:int age;
}P;

int main()
{
	P* p;
	int i;

	p = new P[3];
	strcpy_s(p[0].nom, "A");
	strcpy_s(p[0].prenom, "a");
	p[0].age = 30;

	strcpy_s(p[1].nom, "B");
	strcpy_s(p[1].prenom, "b");
	p[1].age = 40;

	strcpy_s(p[2].nom, "C");
	strcpy_s(p[2].prenom, "c");
	p[2].age = 50;

	for (i = 0; i < 3; i++)
	{
		cout << p[i].nom << endl;
		cout << p[i].prenom << endl;
		cout << p[i].age << endl;
	}
}*/

