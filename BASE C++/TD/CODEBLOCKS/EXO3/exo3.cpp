#include <iostream>

using namespace std;


int main()
{

    int a, b, c;


    cout << "Saisir a : ";
    cin >> a;

    do {
        cout << "Saisir b : ";
        cin >> b;
    }while(b == a );

    do {
        cout << "Saisir c : ";
        cin >> c;
    }while(c == a || c == b );

     int svg;


    if(a > b) {
        svg = a;
        a = b;
        b = svg;
    }
     if(b > c) {
        svg = b;
        b = c;
        c = svg;
     }

     if(a > b) {
        svg = a;
        a = b;
        b = svg;
     }

     cout << a << " " << b << " " << c << endl;

     return 0;

}
