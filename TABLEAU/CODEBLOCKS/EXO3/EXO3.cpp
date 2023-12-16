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

    int maxi = T[0];

    for(int i = 1; i < n; i++) {
        if(maxi < T[i]) {
            maxi = T[i];
        }
    }


    cout << "La maximum des elements du tableau est : " << maxi <<endl;
    return 0;
}

