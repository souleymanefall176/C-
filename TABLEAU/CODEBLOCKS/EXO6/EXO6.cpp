#include <iostream>

using namespace std;

int main() {
    int n;

    do{
        cout << "Saisir la taille du tableau : ";
        cin >> n;
    }while(n <= 0);

    int T[n];
    cout << "Remplissage du tableau\n";
    for(int i = 0; i < n; i++) {
        cout << "Saisir T[" << i << "] : ";
        cin >> T[i];
    }

    int val;
    bool trouver = false;
    cout << "Saisir la valeur : ";
    cin >> val;
    for(int i = 0; i < n;  i++) {
        if(T[i] == val) {
            cout << "Le nombre " << val << " est present dans le tableau a la position " << i <<endl;
            trouver = true;
            break;
        }
    }


    if(trouver == false) {
        cout << "Le nombre " << val << " n'est pas present dans le tableau." << endl;
    }

    return 0;
}

