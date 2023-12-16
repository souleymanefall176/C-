#include <iostream>

using namespace std;

int main() {
    int val;
    cout << "Saisir une valeur et 0 pour quitter : ";
    cin >> val;

    int maxi = val;

    while(val != 0) {
        cout << "Saisir une valeur et 0 pour quitter : ";
        cin >> val;
        if(val > maxi) {
            maxi = val;
        }

    }

    cout << "Le plus grand nombre de la serie est : " << maxi << std::endl;
    return 0;
}
