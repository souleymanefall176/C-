#include <iostream>

using namespace std;

int main() {

    int val;

    cout << "Saisir une valeur de depart : ";
    cin >> val;

    cout << "Comptage a rebours : " << std::endl;
    cout << val << "\n";

    do {
        cout << --val << "\n" ;

    }while(val != 0);


    return 0;
}
