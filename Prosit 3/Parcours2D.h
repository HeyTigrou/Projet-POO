#ifndef PARCOURS2D_H
#define PARCOURS2D_H

#include "Point2D.h"
#include <vector>

class Parcours2D
{
public:
	Parcours2D();
	virtual void ajouterPoint(const Point2D& point);
	virtual double calculDistance(); // appeler les points créés via ajouterPoint
	virtual void message() const;

protected:
	virtual double distance(Point2D& a, Point2D& b) const;
	double m_distanceTotale;
	std::vector<Point2D> tabPt;
};

#endif // !PARCOURS2D_H