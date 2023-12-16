#include <iostream>

using namespace std;

const double TAUX_CONVERSION = 655.50;

int main() {

    double montantEuro;

    cout << "Saisir le montant en euro : ";
    cin >> montantEuro;

    double montantFcfa = montantEuro * TAUX_CONVERSION;

    cout << montantEuro << " euro correspond a " << montantFcfa << " Fcfa" << endl;



    return 0;
}

