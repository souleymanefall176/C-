#include <iostream>

using namespace std;

int main() {

    int a = 17;
    int b = 13;
    cout << "Avant transposition " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    a = a + b;
    b = a - b;

    a = a - b;
    cout << "Apres transposition " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    return 0;
}

