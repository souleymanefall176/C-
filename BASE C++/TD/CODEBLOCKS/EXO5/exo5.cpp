
#include <iostream>

using namespace std;


int main()
{

    int annee = 2000;

    if((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        cout << annee << " est bissextile" << endl;
    } else {
        cout << annee << " n'estpass bissextile" << endl;
    }
    return 0;

}
