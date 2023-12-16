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

    cout << "Affichage du tableau avant supression : " << endl;
    for(int a : myVecteur) {
        cout << a << "\t";
    }
    cout << endl;
    int taille = myVecteur.size();
    cout << "La taille du vecteur est : " << taille << endl;
    myVecteur.pop_back();

    cout << "Affichage du tableau apres supression : " << endl;
    for(int a : myVecteur) {
        cout << a << "\t";
    }

    return 0;
}
