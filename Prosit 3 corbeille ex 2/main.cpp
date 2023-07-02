#include "CLpiano.h"
#include "CLsaxo.h"

int main() {
	int pause;

	instrument* instrument;
	int choix;

	cout << "De quel instrument voulez-vous jouer ?" << endl;
	cin >> choix;

	if (choix == 1) {
		instrument = new CLpiano();
	}
	else {
		instrument = new CLsaxo();
	}

	instrument->jouer();
	cin >> pause;
}