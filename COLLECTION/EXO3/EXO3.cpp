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

    cout << "Affichage du tableau apres saisi : " << endl;
    for(int a : myVecteur) {
        cout << a << "\t";
    }

    for(i = 0; i < myVecteur.size() - 1; i++) {
        for(int j = i; j < myVecteur.size(); j++) {
            if(myVecteur[i] > myVecteur[j]) {
                int svg = myVecteur[i];
                myVecteur[i] = myVecteur[j];
                myVecteur[j] = svg;
            }
        }
    }

    cout << "\nAffichage du tableau apres tri : " << endl;
    for(int a : myVecteur) {
        cout << a << "\t";
    }

    for(i = 0; i < myVecteur.size() / 2; i++) {
        int svg = myVecteur[i];
        myVecteur[i] = myVecteur[myVecteur.size() - 1 - i];
        myVecteur[myVecteur.size() - 1 - i] = svg;
    }

    cout << "\nAffichage du tableau apres inversion : " << endl;
    for(int a : myVecteur) {
        cout << a << "\t";
    }


    return 0;
}


