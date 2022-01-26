#include <iostream>
#include <string.h>
#include <cmath>
#include <string>

using namespace std;

const double valeurMaximaleTaux = 100.0;
const double valeurMinimale = 0.0;

double entreeValide(string message, double min, double max) {

	double valeur;
	do {
		cout << message;
		cin >> valeur;
	} while (valeur<min || valeur>max);

	return valeur;

}


int main(int argc, char* argv[]) {
	
	double pret = entreeValide("montant du pret: ", valeurMinimale, INFINITY);
	double montant = entreeValide("montant remboursee chaque mois: ", valeurMinimale, pret);
	double interetAnnuel = entreeValide("taux interets annuel: " ,valeurMinimale, valeurMaximaleTaux);
	
	double interetMensuel = interetAnnuel / 12.0;

	int nMonth=0;
	double sommeInteret = 0;

	while (pret>0) {
		nMonth++;
		sommeInteret += pret * interetMensuel;
		pret = pret * interetMensuel;
		pret -= montant;
	}
	string out = "la dette sera rembourser apres "+to_string(nMonth)+" mois\n" +
				"la somme des interets est: " + to_string(sommeInteret)+"$";
	cout << out;

}




