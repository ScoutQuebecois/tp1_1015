#include <iostream>
#include <string.h>
#include <cmath>
#include <string>

using namespace std;

const double constGravite = 9.81;

double entreeValide(string message, double min, double max) {

	double valeur;
	do {
		cout << message;
		cin >> valeur;
	} while (valeur<min || valeur>max);

	return valeur;
}

int main(int argc, char* argv[]) {
	

	double hauteurDep = entreeValide("hauteur initial: ", 0 , INFINITY);
	double nRebonds = entreeValide("Hauteur apres combien de rebonds: ", 0 , INFINITY);
	double coeffReb = entreeValide("Coefficient de rebond: ", 0 , 1);

	// variable de travaille intermediaire
	double hi = hauteurDep, hApres=0;
	double vi=0, vApres=0;

	for (int i = 1; i < nRebonds; i++) {           // A revoir et corriger possible erreure de calcule 
		
		vi = sqrt(2 * constGravite * hi);
		vApres = coeffReb * vi;
		hApres = pow(vApres,2) / (2 * constGravite);

		hi = hApres;
		vi = vApres;
	}
	
	cout << "la hauteur apres les rebonds est: " + to_string(hApres);


}

