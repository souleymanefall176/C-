#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <windows.h>
#include <algorithm>

using namespace std;

int menu(){
    int choix;
    cout << "\tMENU" << endl;
    cout << "1-Remplissage du vecteur." << endl;
    cout << "2-Modification du vecteur." << endl;
    cout << "3-Affichage du vecteur." << endl;
    cout << "0-Quitter" << endl;
    do{
        cout << "Choix : ";
        cin >> choix;
    }while(choix < 0 || choix > 3);
    return choix;
}

void affichage(const vector<int>& myVector, string msg) {
    cout << msg << endl;

    for(int val : myVector) {
        cout << val << "\t";
    }
    cout << endl;
}

vector<int>  remplissage(vector<int> myVector) {
    cout << "\tRemplissage du vecteur" << endl;

    string reponse;

    do{
       int val;
       cout << "Saisir une valeur : ";
       cin >> val;
       myVector.push_back(val);
       do{
            cout << "Voulez vous continuez la saisie \"oui/non\" : ";
            cin >> reponse;
            for(char &c : reponse){
                c = toupper(c);
           }
       }while(reponse != "OUI" && reponse != "NON");
       if(reponse == "NON") {
            cout << "Vous avez termine la saisie." << endl;
       }
    }while(reponse == "OUI");

    affichage(myVector, "Affichage du vecteur apres remplissage.");

    return myVector;
}

vector<int> modification(vector<int>& myVector) {
    cout << "Modification" << endl;
    int val;
    do{
        cout << "Saisir la valeur a modifier : ";
        cin >> val;
        auto it = find(myVector.begin(), myVector.end(), val);
        if(it != myVector.end()){
            break;
        }else{
            cout << "La valeur saisit ne se trouve pas dans le vecteur" << endl;
        }
    }while(true);

    int dval;
    cout << "Saisir la nouvelle valeur : ";
    cin >> dval;

    for(int & el : myVector) {
        if(el == val) {
            el = dval;
        }
    }

    affichage(myVector, "Affichage du vecteur apres modification.");

    return myVector;
}



int main() {
    int choixMenu;
    vector<int> myVector;
    do{
        choixMenu = menu();
        Sleep(2000);
        system("cls");
        switch(choixMenu){
            case 1:
                myVector = remplissage(myVector);
                Sleep(5000);
                system("cls");
                break;
            case 2:
                myVector = modification(myVector);
                Sleep(5000);
                system("cls");
                break;
            case 3:
                affichage(myVector, "Affichage du vecteur.");
                Sleep(5000);
                system("cls");
                break;
            default:
                cout << "Fin du programme" << endl;
                break;

        }
    }while(choixMenu != 0);



    return 0;
}
