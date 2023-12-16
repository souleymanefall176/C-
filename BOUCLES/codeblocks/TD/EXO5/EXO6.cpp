#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int val;

    do{
        cout << "Saisir une valeur positif : ";
        cin >> val;
    }while(val < 0);

    int fact = 1;
    if(val ==1 || val == 0) {
        fact = 1;
    }else {
        int j = 1;
        while(j <= val) {
            fact *= j;
            j++;
        }
    }

    cout << "Le factoriel de " << val << " est :" << fact << std::endl;
    return 0;
}
