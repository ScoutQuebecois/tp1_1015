#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <iostream>
#include <fstream>


using namespace std;

struct Mot {
	string mot, nature, definition;
};

const int nMots = 4;
const string nomFichier = "dictionnaire.txt";


Mot remplirMot(string ligne) {
			
	struct Mot mot;
	mot.mot = ligne.substr(0, ligne.find("\t"));
	mot.nature = ligne.substr(ligne.find("\t") + 1, (ligne.find_last_of("\t") - ligne.find("\t")) - 1);
	mot.definition = ligne.substr(ligne.find_last_of("\t") + 1);

	return mot;
	
}


int main(int argc, char* argv[]) {

	Mot dictionnaires[nMots];
	
	ifstream fileDictionnaire(nomFichier);

	string ligne = "";

	for (int i = 0; i < nMots; i++) {
		getline(fileDictionnaire, ligne);
		dictionnaires[i] = remplirMot(ligne);
	}

	int longMot = 0;

	for (int i = 0; i < nMots; i++) {
		if (dictionnaires[i].mot.size() > dictionnaires[longMot].mot.size()) {
			longMot = i;
		}
	}

	string out = dictionnaires[longMot].mot + " ( "+
				dictionnaires[longMot].nature + " ) : "+
				dictionnaires[longMot].definition;

	cout << out;

}








