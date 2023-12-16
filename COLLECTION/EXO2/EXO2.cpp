#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myVecteur;
    int tmp;
    int i = 0;
    do{
        cout << "Saisir la valeur " << ++i << " Ou 0 pour quitter : ";
        cin >> tmp;
        if(tmp != 0) {
            myVecteur.push_back(tmp);
        }

    }while(tmp != 0);

    cout << "Affichage du tableau avant changement : " << endl;
    for(int a : myVecteur) {
        cout << a << "\t";
    }
    cout << endl;

    int val;
    cout << "Veuillez saisir la valeur  a chercher : ";
    cin >> val;

    int dval;
    cout << "Veuillez saisir la valeur  remplacant : ";
    cin >> dval;

    for(i = 0; i < myVecteur.size(); i++){
        if(myVecteur[i] == val) {
            myVecteur[i] = dval;
        }
    }
    cout << "Affichage du tableau apres supression : " << endl;
    for(int a : myVecteur) {
        cout << a << "\t";
    }
    cout << endl;


    return 0;
}

