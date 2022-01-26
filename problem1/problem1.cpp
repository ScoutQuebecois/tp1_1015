#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
	int input = 0;
	string out = "Ce nombre est premier";
	
	cout << "Entrer un nombre entier : ";
	cin >> input;

	if (input % 2 != 0) {
		for (int i = 3; i < sqrt(input); i += 2) {
			if (input % i == 0) {
				out = "Ce nombre n'est pas premier car il est divisible par " + to_string(i);
				break;
			}
		}
	} else if (input != 2 && input != 0) {
		out = "Ce nombre n'est pas premier car il est divisible par 2.";
	}
	else {
		out = "0 n'est pas un nombre premier.";
	}
	cout << out;
}









