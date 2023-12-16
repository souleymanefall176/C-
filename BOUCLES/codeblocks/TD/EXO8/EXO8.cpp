#include <iostream>

using namespace std;

int main() {
    double x;
    cout << "Saisir un nombre reel : ";
    cin >> x;

    int n;

    do{
        cout << "Saisir un entier non negatif : ";
        cin >> n;
    }while(n < 0);

    double p = 1;
    for(int i = 1; i <= n; i++) {
        p *= x;
    }

    cout << x << "^" << n << " = " << p <<std::endl;


    return 0;
}
