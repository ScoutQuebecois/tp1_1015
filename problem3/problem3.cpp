#include <iostream>
#include <string.h>
#include <cmath>
#include <string>

using namespace std;

const double GRAVITE = 9.81;
const double VALEUR_MINIMALE = 0;
const double VALEUR_MAXIMALE_TAUX = 100;

double entreeValide(string message, double min, double max) {
	double valeur = 0.0;

	do {
		cout << message;
		cin >> valeur;
	} while (valeur<min || valeur>max);

	return valeur;
}

int main(int argc, char* argv[]) {
	double vitesseInitiale = 0.0, vitesseProchaine = 0.0, hauteurProchaine = 0.0;

	double hauteurInitiale = entreeValide("hauteur initial: ", VALEUR_MINIMALE, INFINITY);
	double nRebonds = entreeValide("Hauteur apres combien de rebonds: ", VALEUR_MINIMALE, INFINITY);
	double coefficientRebond = entreeValide("Coefficient de rebond: ", VALEUR_MINIMALE, VALEUR_MAXIMALE_TAUX);

	for (int i = 1; i < nRebonds; i++) {   
		vitesseInitiale = sqrt(2 * GRAVITE * hauteurInitiale);
		vitesseProchaine = coefficientRebond * vitesseInitiale;
		hauteurProchaine = pow(vitesseProchaine,2) / (2 * GRAVITE);

		hauteurInitiale = hauteurProchaine;
		vitesseInitiale = vitesseProchaine;
	}
	
	cout << "la hauteur apres les rebonds est: " + to_string(hauteurProchaine);


}

