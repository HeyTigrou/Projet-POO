#include "Parcours3D.h"
#include "Parcours2D.h"
#include "Point3D.h"
#include <cmath>
#include <vector>

Parcours3D::Parcours3D() : Parcours2D()
{

}

void Parcours3D::ajouterPoint(const Point3D& point)
{
	tabPt.emplace_back(point);
}

double Parcours3D::calculDistance()
{
	unsigned nbPts(tabPt.size());
	if (nbPts >= 2) // verifier qu'il y a au moins deux elements pour calculer la distance
	{
		for (unsigned i(1); i < nbPts; ++i) // <= nbPoints a cause des cases du tableau tabPt -> ex : tab[5] <=> 6e indexe
		{
			this->m_distanceTotale += distance(tabPt[i - 1], tabPt[i]); // tableau de pointeurs vers le tas pour recuperer l'objet de type point ?
		}
	}

	return m_distanceTotale;
}


double Parcours3D::distance(Point3D& a, Point3D& b) const
{
	return (sqrt(pow((b.getX() - a.getX()), 2) + pow((b.getY() - a.getY()), 2) + pow((b.getZ() - a.getZ()), 2)));
}


void Parcours3D::message() const
{
	std::cout << "Calcul d'un parcours de type 3D\n";
}