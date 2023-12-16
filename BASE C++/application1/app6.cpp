#include <iostream>

using namespace std;

int main() {

    int secondes;

    cout << "Saisir le nombre de seconde : ";
    cin >> secondes;

    int heure = secondes / 3600;

    int minute = (secondes % 3600) / 60;

    int seconde = (secondes % 3600) % 60;

    cout << secondes << "s correspond a " << heure << "h " << minute << "mn " << seconde << "s." << endl;

    return 0;
}


