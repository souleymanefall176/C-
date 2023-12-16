#include <iostream>

using namespace std;



int main() {

    double poids;

    cout << "Saisir votre poids en kg : ";
    cin >> poids;

    double taille;

    cout << "Saisir votre taille en m : ";
    cin >> taille;

    double imc = poids / (taille * taille);

    cout << "IMC = " << imc << " kg/m²" << endl;

    return 0;
}

