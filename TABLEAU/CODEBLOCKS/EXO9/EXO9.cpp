#include <iostream>

using namespace std;

int main() {
    int n1;

    do{
        cout << "Saisir la taille du tableau : ";
        cin >> n1;
    }while(n1 <= 0);

    int T1[n1];
    cout << "Remplissage du tableau\n";
    for(int i = 0; i < n1; i++) {
        cout << "Saisir T1[" << i << "] : ";
        cin >> T1[i];
    }

    int n2;

    do{
        cout << "Saisir la taille du tableau : ";
        cin >> n2;
    }while(n2 <= 0);

    int T2[n2];
    cout << "Remplissage du tableau\n";
    for(int i = 0; i < n2; i++) {
        cout << "Saisir T2[" << i << "] : ";
        cin >> T2[i];
    }
    int T[n1+n2];
    int k = 0;
    for(int i = 0; i < n1; i++) {
        T[k] = T1[i];
        k++;
    }
    for(int i = 0; i < n2; i++) {
        T[k] = T2[i];
        k++;
    }

    cout << "Affichage du tableau\n";
    for(int i : T) {
        cout << i << "\t";
    }
    return 0;
}

