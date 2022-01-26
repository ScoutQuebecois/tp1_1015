#include <iostream>
#include <string.h>
#include <cmath>
#include <string>

using namespace std;

const double CONST_GRAVITE = 9.81;

double entreeValide(string message, double min, double max) {

	double valeur;
	do {
		cout << message;
		cin >> valeur;
	} while (valeur<min || valeur>max);

	return valeur;
}

int main(int argc, char* argv[]) {
	
	double hauteurInitiale = entreeValide("hauteur initial: ", 0 , INFINITY);
	double nRebonds = entreeValide("Hauteur apres combien de rebonds: ", 0 , INFINITY);
	double coeffRebond = entreeValide("Coefficient de rebond: ", 0 , 1);

	double hauteurProchaine=0;
	double vitesseInitiale=0, vitesseProchaine=0;

	for (int i = 1; i < nRebonds; i++) {   
		
		vitesseInitiale = sqrt(2 * CONST_GRAVITE * hauteurInitiale);
		vitesseProchaine = coeffRebond * vitesseInitiale;
		hauteurProchaine = pow(vitesseProchaine,2) / (2 * CONST_GRAVITE);

		hauteurInitiale = hauteurProchaine;
		vitesseInitiale = vitesseProchaine;
	}
	
	cout << "la hauteur apres les rebonds est: " + to_string(hauteurProchaine);


}

