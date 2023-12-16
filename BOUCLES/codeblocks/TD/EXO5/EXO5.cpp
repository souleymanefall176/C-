#include <iostream>
#include <cstring>

using namespace std;

int main() {

    string chaine,inverse;


    cout << "Saisir une chaine : ";
    cin >> chaine;

    int l = chaine.length();
    cout << l;
    for(int i = l -1; i >= 0; i--) {
        inverse += chaine[i];
    }

    cout << endl;

    cout << "inverse : " <<inverse;
    return 0;
}
