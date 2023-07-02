#include "CLpoint3D.h"

CLpoint3D::CLpoint3D(double x, double y, double z) : CLpoint(x,y), m_z(z){}

double CLpoint3D::getZ() {
	return m_z;
}

void CLpoint3D::afficherCoordo() {
	cout << "Les coordonnees du point " << this << " , d'ID : " << " et de type 3D sont : (" << this->getX() << ", " << this->getY() << ", " << this->getZ() << ")\n";
}