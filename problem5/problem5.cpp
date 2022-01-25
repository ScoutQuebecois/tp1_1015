#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;
const int nValeurs = 10;

int main(int argc, char* argv[]) {

	

	int list[nValeurs];

	cout << "entrer une liste de 10 entier: ";
	for (int i = 0; i < 10; i++) {
		cin >> list[i];

	}
	
	int trier[nValeurs];
	int pointPair = 0;
	int pointImpair = 1;

	for (int element : list) {
		if (element % 2 == 0) {
			trier[pointPair] = element;
			pointPair++;
		}
		else {
			trier[nValeurs - pointImpair] = element;
			pointImpair++;
		}
	}


	string sortie = "{";

	for (int i = 0; i < 10;i++) {
		sortie =sortie+to_string(trier[i])+",";
	}
	sortie[sortie.size() - 1] = '}';
	cout << sortie;

}

