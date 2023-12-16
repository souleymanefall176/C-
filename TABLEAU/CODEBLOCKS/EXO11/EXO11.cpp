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

    cout << "Affichage du tableau avant rotation\n";
    for(int i : T) {
        cout << i << "\t";
    }
    cout << endl;
    int k;
    do{
        cout << "Saisir le rang de rotation : ";
        cin >> k;
    }while(k <= 0);
    int s;
    do{
        cout << "Sens de la rotation\n";
        cout << "\t1-Gauche\n";
        cout << "\t2-Droite\n";
        cin >> s;
    }while(s < 1 || s > 2);

    for(int i = 1; i <= k; i++) {
        if(s == 1) {
            int svg = T[0];
            for(int j = 0; j < n - 1; j++) {
                T[j] = T[j + 1];
            }
            T[n - 1] = svg;
        } else {
            int svg = T[n - 1];
            for(int j = n - 1; j >= 1; j--) {
                T[j] = T[j - 1];
            }
            T[0] = svg;
        }
    }


    cout << "Affichage du tableau apres rotation\n";
    for(int i : T) {
        cout << i << "\t";
    }

    return 0;
}

