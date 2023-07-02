#include "Point3D.h"
#include <iostream>

Point3D::Point3D(double x, double y, double z) : Point2D(x, y), m_z(z)
{

}

double Point3D::getZ() { return m_z; }

void Point3D::afficherCoordo()
{
	std::cout << "Les coordonnees du point " << this << ", d'ID " /*<< idPt*/ << " et de type 3D sont : (" << this->getX() << ", " << this->getY() << ", " << this->getZ() << ")\n";
}

//std::ostream& operator<<(std::ostream& flux, Point3D point)
//{
//	point.afficher(flux);
//	return flux;
//}