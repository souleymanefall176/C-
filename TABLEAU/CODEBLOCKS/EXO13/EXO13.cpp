#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int>myvector = {20, 30, 5, 7};
    cout << myvector.size();

    for(int i : myvector) {
        cout << i << "\t";
    }
    /*
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
    int som1 = 0;
    int som2 = 0;
    for(int i = 0, j = n - 1; (i + j + 1 == n) && (i < n - 1 && j > 0); i++, j--) {
        som1 += T[i];
        som2 += T[j];
        if(som1 == som2) {
            cout << "Oui Le tableau peut etre divise en deux parties de somme egale\n";
            return 0;
        }
    }
    cout << "Non Le tableau ne peutpas etre divise en deux parties de somme egale\n";
    */
    return 0;
}
