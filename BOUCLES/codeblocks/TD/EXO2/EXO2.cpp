#include <iostream>

using namespace std;

int main() {
    cout << "Affichage des nombres pairs : " << std::endl;
    for(int i = 2; i <= 100; i+=2) {
        cout << i << " ";
    }

    cout << "\nAffichage des nombres impairs : " << std::endl;
    for(int i = 1; i <= 100; i+=2) {
        cout << i << " ";
    }
    return 0;
}
