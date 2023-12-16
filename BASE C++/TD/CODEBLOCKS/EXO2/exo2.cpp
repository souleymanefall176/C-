#include <iostream>

using namespace std;


int main()
{

    int note;

    do
    {
        cout << "Saisir la note de l'eleve : ";
        cin >> note;

        if(note < 0 || note > 20) {
            cout << "Note invalide." << endl;
        }
    }
    while(note < 0 || note > 20);

    switch(note)
    {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        cout << "Fail" << endl;
        break;
    case 8:
    case 9:
        cout << "Passable" << endl;
        break;
    case 10:
    case 11:
    case 12:
    case 13:
        cout << "Bien" << endl;
        break;
    case 14:
    case 15:
    case 16:
        cout << "Tres bien" << endl;
        break;
    default:
        cout << "Excellent" << endl;
        break;
    }

    return 0;
}
