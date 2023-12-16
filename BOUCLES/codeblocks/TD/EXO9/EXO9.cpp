#include <iostream>

using namespace std;

int main() {

    cout << "Les nombres premiers compris entre 1 et 1000 sont : ";
    for(int i = 2; i <= 1000; i++) {
        int cpt = 0;
        for(int j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                cpt++;
                break;
            }
        }
        if(cpt == 0) {
            cout << i << " ";
        }
    }
    return 0;
}
