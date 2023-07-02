#include "Header.h"

using namespace std;

int main()
{
    Point2D* p1;
    Point2D* p2;
    Point2D* p3;
    Parcours2D* parcours2D;

    p1 = new Point2D(0.0, 0.0);
    p2 = new Point2D(-1.0, 1.0);
    p3 = new Point2D(1.0, 3.0);

    parcours2D = new Parcours2D;

    parcours2D->ajouterPoint(*p1);
    parcours2D->ajouterPoint(*p2);
    parcours2D->ajouterPoint(*p3);

    std::cout << parcours2D->calculDistance() << '\n'; // calculDistance() retourne forcement qqch a cause du std::cout
    parcours2D->message();

    delete p1, p2, p3;
    delete parcours2D;


    Point3D* p5;
    Point3D* p6;
    Point3D* p7;
    Parcours3D* parcours3D;

    p5 = new Point3D(0.0, 0.0, 0.0);
    p6 = new Point3D(1.0, 1.0, 1.0);
    p7 = new Point3D(2.0, 2.0, 2.0);

    parcours3D = new Parcours3D;

    parcours3D->ajouterPoint(*p5);
    parcours3D->ajouterPoint(*p6);
    parcours3D->ajouterPoint(*p7);

    std::cout << parcours3D->calculDistance() << '\n';
    parcours3D->message();

    delete p5, p6, p7;
    delete parcours3D;


    p1 = new Point2D(0.0, 0.0);
    p5 = new Point3D(1.0, 1.0, 1.0);

    (p1 = p5)->afficherCoordo();

    delete p1, p5;


    return 0;
}