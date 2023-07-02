#include "Point2D.h"
#include <iostream>

Point2D::Point2D(double x, double y) : m_x(x), m_y(y)
{

}

double Point2D::getX() { return m_x; }
double Point2D::getY() { return m_y; }


void Point2D::afficherCoordo()
{
	std::cout << "Les coordonnees du point " << this << ", d'ID " /*<< idPt*/ << " et de type 2D sont : (" << this->getX() << ", " << this->getY() << ")\n";
}

std::ostream& Point2D::afficher(std::ostream& flux) const
{
	flux << '(' << m_x << ',' << m_y << ')';
	return flux;
}

std::ostream& operator<<(std::ostream& flux, Point2D point)
{
	point.afficher(flux);
	return flux;
}