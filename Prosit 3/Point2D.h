#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>

class Point2D
{
public:
	Point2D(double x = 0.0, double y = 0.0);
	double getX();
	double getY();
	virtual void afficherCoordo();
	//std::ostream& afficher(std::ostream& flux) const;

protected:
	double m_x, m_y;
};

//std::ostream& operator<<(std::ostream& flux, Point2D point);

#endif // !POINT2D_H