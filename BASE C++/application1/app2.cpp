#include <iostream>

using namespace std;

int main() {

    string nom, prenom, profession;
    int age;

    cout << "Saisir votre nom : " <<endl;
    cin >> nom;

    cout << "Saisir votre prenom : " <<endl;
    cin >> prenom;

    cout << "Saisir votre profession : " <<endl;
    cin >> profession;



    cout << "Bonjour " << prenom << " " << nom << ". Vous etes un(e) " << profession << " impressionnant(e)" <<endl;



    return 0;
}
