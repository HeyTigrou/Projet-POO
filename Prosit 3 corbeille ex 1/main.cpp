#include "CLvoiture.h"
#include "CLvoitureSport.h"

int main(void){
	int pause;

	CLvoiture* voiture1 = new CLvoitureSport(500, 9);
	CLvoiture* voiture2 = new CLvoiture(500, 9);
	voiture1->accelerer();
	voiture2->accelerer();
	(voiture1 = voiture2)->accelerer();
	cin >> pause;
}