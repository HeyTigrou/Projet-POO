#ifndef PARCOURS3D_H
#define PARCOURS3D_H

#include "Parcours2D.h"
#include "Point3D.h"
#include <vector>

class Parcours3D : public Parcours2D
{
public:
	Parcours3D();
	void ajouterPoint(const Point3D& point);
	double calculDistance(); // appeler les points crees via ajouterPoint
	void message() const override;

private:
	double distance(Point3D& a, Point3D& b) const;
	std::vector<Point3D> tabPt;
};

#endif // !PARCOURS3D_H