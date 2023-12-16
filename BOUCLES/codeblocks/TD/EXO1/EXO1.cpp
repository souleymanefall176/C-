#include <iostream>

using namespace std;

int main() {



    int val;
    int sum = 0;
    int cpt = 0;

    while(true) {
        cout << "Saisir une valeur : ";
        cin >> val;
        sum += val;
        if(val == 0) {
            break;
        } else {
            cpt++;
        }

    }
    cout << "La somme des valeurs est : " << sum << std::endl;
    if(cpt != 0) {
        double moy = (double)sum / cpt;
        cout << "La moyenne des valeurs est : " << moy << std::endl;
    }

    return 0;
}
