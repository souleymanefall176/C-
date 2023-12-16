#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <windows.h>

using namespace std;

int menu(){
    int choix;
    cout << "\tMENU" << endl;
    cout << "1-Remplissage du vecteur." << endl;
    cout << "2-Affichage du vecteur." << endl;
    cout << "3-Affichage de la taille du vecteur." << endl;
    cout << "4-Suppression du dernier element du vecteur." << endl;
    cout << "0-Quitter" << endl;
    do{
        cout << "Choix : ";
        cin >> choix;
    }while(choix < 0 || choix > 4);
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



int taille(const vector<int>& myVector) {
    return myVector.size();
}

vector <int> suppression(vector<int> myVector) {
    myVector.pop_back();
    affichage(myVector, "Affichage du vecteur apres suppression");
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
                affichage(myVector, "Affichage du vecteur.");
                Sleep(5000);
                system("cls");
                break;
            case 3:
                cout << "La taille du vecteur est : " << taille(myVector) << endl;
                Sleep(5000);
                system("cls");
                break;
            case 4:
                myVector = suppression(myVector);
                Sleep(5000);
                system("cls");
                break;
            default :
                cout << "Fin du programme" << endl;
        }

    }while(choixMenu != 0);






    return 0;
}
