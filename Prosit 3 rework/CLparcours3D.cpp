#include "CLparcours3D.h"

CLparcours3D::CLparcours3D() : CLparcours2D() {}

void CLparcours3D::ajouterPoint(CLpoint3D& point) {
	tabPt.emplace_back(point);
}

double CLparcours3D::calculDistance() {
	unsigned nbPts(tabPt.size());
	if (nbPts >= 2) {
		for (unsigned i(1); i < nbPts; ++i) {
			this->m_distanceTotale += distance(tabPt[i - 1], tabPt[i]);
		}
	}
	return m_distanceTotale;
}

double CLparcours3D::distance(CLpoint3D& a, CLpoint3D& b) {
	return (sqrt(pow((b.getX() - a.getX()), 2) + pow((b.getY() - a.getY()), 2) + pow((b.getZ() - a.getZ()), 2)));
}

void CLparcours3D::message() {
	cout << "Calcul d'un parcours de type 3D\n";
}