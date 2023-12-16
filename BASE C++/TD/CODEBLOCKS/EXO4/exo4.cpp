#include <iostream>

using namespace std;


int main()
{

    int a, b, c, d;

    cout << "Saisir a : ";
    cin >> a;

    cout << "Saisir a : ";
    cin >> b;

    cout << "Saisir a : ";
    cin >> c;

    cout << "Saisir a : ";
    cin >> d;

    int maxi = a;

    maxi = (maxi < b) ? b : maxi;

    maxi = (c > maxi) ? c : maxi;

    maxi = (d > maxi) ? d : maxi;

    cout << maxi;

    return 0;

}

