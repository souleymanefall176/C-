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



    for(int i = 0; i < n / 2; i++) {
        int svg = T[i];
        T[i] = T[n - i - 1];
        T[n - i - 1] = svg;
    }


    cout << "Affichage du tableau inverse\n";
    for(int i : T) {
        cout << i << "\t";
    }
    return 0;
}

