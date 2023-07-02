#pragma once
namespace NS_COMP {
	class COMP_calcul
	{
	private :
		double puht;
		double tva;
		double qteArticle;

	public:
		COMP_calcul(double, double, double);
		double* calculer(void);
	};
}


