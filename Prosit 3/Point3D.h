#ifndef POINT3D_H
#define POINT3D_H

#include "Point2D.h"
#include <iostream>

class Point3D : public Point2D
{
public:
	Point3D(double x, double y, double z = 0);
	double getZ();
	void afficherCoordo() override;

private:
	double m_z;
};

//std::ostream& operator<<(std::ostream& flux, Point3D point);

#endif // !POINT3D_H