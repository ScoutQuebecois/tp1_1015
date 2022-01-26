#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const int NOMBRE_VALEURS = 10;

int main(int argc, char* argv[]) {
	int valeurs[NOMBRE_VALEURS];

	cout << "entrer une liste de 10 entiers separes par des espaces: ";
	for (int i = 0; i < 10; i++) {
		cin >> valeurs[i];
	}
	
	int valeursTriees[NOMBRE_VALEURS];
	int compteurPair = 0;
	int compteurImpair = 1;

	for (int element : valeurs) {
		if (element % 2 == 0) {
			valeursTriees[compteurPair] = element;
			compteurPair++;
		}
		else {
			valeursTriees[NOMBRE_VALEURS - compteurImpair] = element;
			compteurImpair++;
		}
	}

	string sortie = "{";

	for (int i = 0; i < 10;i++) {
		sortie =sortie+to_string(valeursTriees[i])+",";
	}
	sortie[sortie.size() - 1] = '}';
	cout << sortie;
}

