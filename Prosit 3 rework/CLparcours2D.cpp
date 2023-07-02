#include "CLparcours2D.h"

CLparcours2D::CLparcours2D() : m_distanceTotale(0) {}

void CLparcours2D::ajouterPoint(CLpoint& point) {
	tabPt.emplace_back(point);
}

double CLparcours2D::calculDistance() {
	unsigned nbPts(tabPt.size());
	if (nbPts >= 2) {
		for (unsigned i(1); i < nbPts; ++i) {
			this->m_distanceTotale += distance(tabPt[i - 1], tabPt[i]);
		}
	}
	return m_distanceTotale;
}

double CLparcours2D::distance(CLpoint& a, CLpoint& b) {
	return (sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2)));
}

void CLparcours2D::message() {
	cout << "Calcul d'un parcours de type 2D\n";
}