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

    int cptPo = 0;
    int cptNe = 0;
    for(int i : T) {
        if(i > 0) {
            cptPo++;
        }
        if(i < 0) {
            cptNe++;
        }
    }

    cout << "Le nombre de valeur positif est : " << cptPo <<endl;
    cout << "Le nombre de valeur negatif est : " << cptNe <<endl;
    return 0;
}

