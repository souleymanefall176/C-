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

    int som = 0;
    for(int i : T) {
        som += i;
    }

    cout << "La somme des elements du tableau est : " << som <<endl;
    return 0;
}
