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

    cout << "Affichage du tableau avant tri\n";
    for(int i : T) {
        cout << i << "\t";
    }
    cout <<endl;
    for(int i = 0; i < n - 1; i++) {
        for(int j =  i + 1; j < n; j++) {
            if(T[i] > T[j]) {
                int svg = T[i];
                T[i] = T[j];
                T[j] = svg;
            }
        }
    }

    cout << "Affichage du tableau apres tri\n";
    for(int i : T) {
        cout << i << "\t";
    }
    return 0;
}
