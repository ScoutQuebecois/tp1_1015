#include <iostream>
#include <string.h>
#include <cmath>
#include <string>

using namespace std;



double entreeValide(string message, double min, double max) {

	double valeur;
	do {
		cout << message;
		cin >> valeur;
	} while (valeur<min || valeur>max);

	return valeur;

}


int main(int argc, char* argv[]) {
	

	double pret = entreeValide("montant du pret: ", 0, INFINITY);
	double montant = entreeValide("montant remboursee chaque mois: ",0, pret);
	double interetAnnuel = entreeValide("taux interets annuel: " ,0, 100);
	
	double interetMensuel = interetAnnuel / 12;

	int nMonth=0;
	double sumInteret = 0;

	while (pret>0) {
		nMonth++;
		sumInteret += pret * interetMensuel;           // mettre dans une variable ????
		pret = pret * interetMensuel;
		pret -= montant;
		
	}
	string out = "la dette sera rembourser apres "+to_string(nMonth)+" mois\n" +
				"la somme des interets est: " + to_string(sumInteret)+"$";
	
	cout << out;
	

}




