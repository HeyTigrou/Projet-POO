#include "CLpoint.h"

CLpoint::CLpoint(double x, double y) : m_x(x), m_y(y) {}

double CLpoint::getX() {
	return m_x;
}

double CLpoint::getY() {
	return m_y;
}

void CLpoint::afficherCoordo() {
	cout << "Les coordonnees du point	" << this << " , d'ID :" << " et de type 2D sont : (" << this->getX() << ", " << this->getY() << ")\n";
}