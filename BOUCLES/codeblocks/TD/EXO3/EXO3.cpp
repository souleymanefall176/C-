#include <iostream>

using namespace std;

int main() {

    int val;

    cout << "Saisir une valeur : ";
    cin >> val;
    /*int sum = 1;
    for(int i = 2; i <= val/2 ; i++) {
        if(val % i == 0) {
            sum += i;
        }
    }*/
    int j = 2;
    int som = 1;
    while(j <= val / 2) {
        if(val % j == 0) {
            som += j;
        }
        j++;
    }

    if(som == val) {
        cout << val << " est un nombre parfait." << std::endl;
    } else {
        cout << val << " n'est pas un nombre parfait." << std::endl;
    }


    /*if(sum == val) {
        cout << val << " est un nombre parfait." << std::endl;
    } else {
        cout << val << " n'estpas un nombre parfait." << std::endl;
    }*/


    return 0;
}
