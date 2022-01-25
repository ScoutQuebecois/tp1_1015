#include <iostream>
#include <math.h>

using namespace std;




int main(int argc, char* argv[])
{

	int input;
	string out = "";
	
	cout << "entrer un nombre entier : ";
	cin >> input;

	if (input % 2 != 0) {
		for (int i = 3; i < sqrt(input); i += 2) {
			out = "ce nombre est premier";
			if (input % i == 0) {
				out = "ce nombre n'est pas premier car il est divisible par " + i;
				break;
			}
		}
		
	} else if (input != 2) {
		out = "ce nombre n'est pas premier car il est divisible par 2.";
	} else {
		out = "ce nombre est premier";
	}

	cout << out;
	
}









