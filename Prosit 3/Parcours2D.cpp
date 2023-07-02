#include "Parcours2D.h"
#include "Point2D.h"
#include <cmath>
#include <vector>

Parcours2D::Parcours2D() : m_distanceTotale(0)
{

}

void Parcours2D::ajouterPoint(const Point2D& point)
{
	tabPt.emplace_back(point);
}


double Parcours2D::calculDistance()
{
	unsigned nbPts(tabPt.size());
	if (nbPts >= 2) // verifier qu'il y a au moins deux elements pour calculer la distance
	{
		for (unsigned i(1); i < nbPts; ++i) // <= nbPoints a cause des cases du tableau tabPt -> ex : tab[5] <=> 6e indexe
		{
			this->m_distanceTotale += distance(tabPt[i - 1], tabPt[i]); // tableau de pointeurs vers le tas pour r�cup�rer l'objet de type point ?
		}
	}

	return m_distanceTotale;
}

double Parcours2D::distance(Point2D& a, Point2D& b) const
{
	return (sqrt(pow((b.getX() - a.getX()), 2) + pow((b.getY() - a.getY()), 2)));
}


void Parcours2D::message() const
{
	std::cout << "Calcul d'un parcours de type 2D\n";
}