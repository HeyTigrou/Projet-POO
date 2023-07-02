#include "ihm.h" 

NS_client::ihm::ihm(void)
{
	this->calcul = new NS_svc::serviceCalcul();
	this->fichier = new NS_svc::serviceFichier();
}
void NS_client::ihm::run(void)
{
	int nbArticle;
	double* prixDesArticles;
	double* grille;
	int i;
	int prix;

	cout << "Combien d'article(s) dans la commande ?" << endl;
	cin >> nbArticle;

	prixDesArticles = new double[nbArticle];

	for (i = 0; i < nbArticle; i++)
	{
		cout << "Quel est le prix de l'article " << i + 1 << " ?" << endl;
		cin >> prix;
		prixDesArticles[i] = prix;
	}

	cout << "Nous allons proceder au calcul h.t. de la commande..." << endl;
	grille = this->calcul->calculerMontantTTC(prixDesArticles, nbArticle);

	cout << "Le montant TTC de la facture est de : " << grille[2] << " E" << endl;
	cout << "Nous allons proceder a l'impression de votre facture" << endl;

	this->fichier->imprimerFacture(grille[0], grille[1], grille[2]);
	cout << "Le traitement est termine" << endl;

}