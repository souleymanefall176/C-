#include <iostream>

using namespace std;

int main() {
    int choix;
    char car;
    int n = 5;

    do {
        cout << "\tMENU" << std::endl;
        cout << "1.Triangle rectangle\n";
        cout << "2.Pyramide\n";

        cout << "Choix : ";
        cin >> choix;
        cout << "Caractere : ";
        cin >> car;
        if(choix != 1 && choix != 2) {
            cout << "Veuillez choisir entre 1 et 2" << std::endl;
        }
    }while( choix != 1 && choix != 2);

    if(choix == 1) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << car;
            }
            cout << "\n";
        }
    } else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; k++) {
                cout << car;
            }
            cout <<endl;
        }
    }
    return 0;
}
