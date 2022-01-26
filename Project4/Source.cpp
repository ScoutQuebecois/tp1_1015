#include <iostream>
#include <iomanip>
#include <math.h>
#include <ctime>
#include <cstdlib>

using namespace std;

const int CONSTANTE_PRECISION = 7;
const double VALEUR_PI = 3.141593;
const int LIMITE_INFERIEUR = -1, LIMITE_SUPERIEUR=1;

double randomDans(double minimum, double maximum) {
    return ((double)rand() / (RAND_MAX)) * (maximum - minimum) - maximum;
}

int main(int argc, char* argv[]) {

    srand((unsigned)time(NULL));

    double iteration = 1.0;
    double dansLeCercle = 0.0;
    double x = 0.0, y=0.0;

    cout.precision(CONSTANTE_PRECISION);
    cout << "Entrer le nombre d'iterations souhaitees : ";
    cin >> iteration;
    
    for (int i = 1; i <= iteration; i++) {
        x = randomDans(LIMITE_INFERIEUR, LIMITE_SUPERIEUR);
        y = randomDans(LIMITE_INFERIEUR, LIMITE_SUPERIEUR);

        if (pow(x, 2) + pow(y, 2) < 1) {
            dansLeCercle++;
        }
    }

    double pi = (dansLeCercle / iteration) * 4;
    double ecart = (abs(pi - VALEUR_PI) / VALEUR_PI) * 100;
    cout.fill('0');
    cout << "Votre valeur approxime de pi est de " <<  std::setw(8)<< left << pi << ". \n"
         <<"L'ecart relatif entre cette valeur et la valeur precise de pi est de " << ecart << "%.";
}