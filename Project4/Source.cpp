#include <iostream>
#include <iomanip>
#include <math.h>
#include <ctime>
#include <cstdlib>

using namespace std;

const double VALEUR_PI = 3.141593;

double randomDans(double minimum, double maximum) {
    return ((double)rand() / (RAND_MAX)) * (maximum - minimum) - maximum;
}

int main(int argc, char* argv[]) {

    srand((unsigned)time(NULL));

    double iteration = 1;
    double dansLeCercle = 0;
    double x = 0, y;

    cout.precision(7);
    cout << "Entrer le nombdre d'iterations souhaitees : ";
    cin >> iteration;
    
    for (int i = 1; i <= iteration; i++) {
        x = randomDans(-1, 1);
        y = randomDans(-1, 1);

        if (pow(x, 2) + pow(y, 2) < 1) {
            dansLeCercle++;
        }
    }

    double pi = (dansLeCercle / iteration) * 4;
    double ecart = (abs(pi - VALEUR_PI) / VALEUR_PI) * 100;
    cout.fill('0');
    cout << "Votre valeur approxime de pi est de " <<  std::setw(6)<< left << pi << ". \n"
         <<"L'ecart relatif entre cette valeur et la valeur precise de pi est de " << std::setw(6) << left << ecart << "%.";
}