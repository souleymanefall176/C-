#include <iostream>

using namespace std;

int main() {

    string nom;
    int age;

    cout << "Saisir votre nom : " <<endl;
    cin >> nom;

    cout << "Saisir votre age : " <<endl;
    cin >> age;

    cout << "Votre nom est : " << nom << " et vous avez " << age << " ans" <<endl;

    int anneeRestantes = 100 - age;

    cout << "Il vous reste " << anneeRestantes << " ans avant d'atteindre 100 ans" <<endl;

    return 0;
}
