
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

    cout << "Affichage du tableau\n";
    for(int i : T) {
        cout << i << "\t";
    }
    cout << endl;


    int k = -1;
    int cpt = 0;
    int TSD[n];
    for(int i = 0; i < n; i++) {
        bool estTrouve = false;

        for (int j = 0; j < cpt; j++) {
            if (T[i] == TSD[j]) {
                estTrouve = true;
                break;
            }
        }
        if(estTrouve == false) {
            TSD[cpt] = T[i];
            cpt++;
        }

    }
    k++;
    cout << "Affichage du tableau sans doublon\n";
    for(int i : TSD) {
        cout << i << "\t";
    }

    return 0;
}
