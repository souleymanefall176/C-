#include <iostream>
#include <math.h>

using namespace std;


int main()
{

    int a = 13;
    int b = a;
    int cpt = 0;

    do{
        a /= 10;
        cpt++;
    }while( a != 0) ;


    cout << b << " est constitue de " << cpt << " chiffre(s)" << endl;

    return 0;

}

