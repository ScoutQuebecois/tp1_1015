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
    double iter = 1;
    double dansLeCercle = 0;
    double x, y;
    cin >> iter;
    for (int i = 1; i <= iter; i++) {
        x = randomIn(-1, 1);
        y = randomIn(-1, 1);
        if (pow(x, 2) + pow(y, 2) < 1) {
            dansLeCercle++;
        }
    }
    double pi = (dansLeCercle / iter) * 4;
    double ecart = (abs(pi - valeurPI) / valeurPI) * 100;
    cout << "Votre valeur approxime de pi est de " << pi << ". L'ecart relatif entre cette valeur et la valeur precise de pi est de " << ecart << "%.";
}