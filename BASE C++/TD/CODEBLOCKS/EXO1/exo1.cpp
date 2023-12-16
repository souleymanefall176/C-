#include <iostream>

using namespace std;

int main()
{

    int chiffre_affaire;
    cout << "Veuillez saisir le chiffre d'affaire : ";
    cin >> chiffre_affaire;

    double commission;

    if(chiffre_affaire < 10000)
    {
        commission = chiffre_affaire * 0.05;
    }
    else if(chiffre_affaire <= 100000)
    {
        commission = chiffre_affaire * 0.1;
    }
    else
    {
        commission = chiffre_affaire * 0.15;
    }

    cout << "Le montant de la commission est : " << commission << endl;

    return 0;
}
