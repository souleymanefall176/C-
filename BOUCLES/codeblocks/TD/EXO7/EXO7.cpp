#include <iostream>

using namespace std;

int main() {

    cout << "Les nombres parfaits compris entre 1 et 1000 : ";

    for(int i = 1; i <= 1000; i++) {

        int j = 2;
        int som = 1;
        while(j <= i / 2) {
            if(i % j == 0) {
                som += j;
            }
            j++;
        }
        if(som == i) {
            cout << i << " ";
        }
    }

    return 0;
}
