#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>

using namespace std;

const double valeurPI = 3.141593;

double randomIn(double min, double max) {
    return ((double)rand() / (RAND_MAX)) * (max - min) - max;
}

void main() {
    srand((unsigned)time(NULL));
    cout.precision(7);
    cout << "Entrer le nombdre d'iterations souhaitees : ";
    double nIterations = 1.0;
    double valeurX, valeurY, nPointsDansLeCercle = 0;
    cin >> nIterations;
    for (int i = 1; i <= nIterations; i++) {
        valeurX = randomIn(-1, 1);
        valeurY = randomIn(-1, 1);
        if (pow(valeurX, 2) + pow(valeurY, 2) < 1) {
            nPointsDansLeCercle++;
        }
    }
    double piApproxime = (nPointsDansLeCercle / nIterations) * 4;
    double ecartRelatif = (abs(piApproxime - valeurPI) / valeurPI) * 100;
    cout << "Votre valeur approxime de pi est de " << piApproxime << ". L'ecart relatif entre cette valeur et la valeur precise de pi est de " << ecartRelatif << "%.";
}