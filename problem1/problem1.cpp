#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
	int valeur = 0;
	string sortie = "Ce nombre est premier";
	
	cout << "Entrer un nombre entier : ";
	cin >> valeur;

	if (valeur % 2 != 0) {
		for (int i = 3; i <= sqrt(valeur); i += 2) {
			if (valeur % i == 0) {
				sortie = "Ce nombre n'est pas premier car il est divisible par " + to_string(i);
				break;
			}
		}
	} else if (valeur != 2 && valeur != 0) {
		sortie = "Ce nombre n'est pas premier car il est divisible par 2.";
	}
	else {
		sortie = "0 n'est pas un nombre premier.";
	}

	cout << sortie;
}









