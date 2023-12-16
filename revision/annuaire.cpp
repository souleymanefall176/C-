#include <iostream>
#include <list>
#include <map>
#include <string>
#include <windows.h>
#include <algorithm>
#include <cctype>

using namespace std;

int menu() {
    cout << "\tMenu" << endl;
    int choixMenu;
    do{
        cout << "1-Ajouter un nouveau numero de telephone a un nom existant." << endl;
        cout << "2-Ajouter un nouveau nom avec un numero de telephone." << endl;
        cout << "3-Trouver tous les numeros de telephone associes a un nom." << endl;
        cout << "4-Supprimer un numero de telephone specifique d'un nom." << endl;
        cout << "5-Supprimer un nom et tous ses numeros associes." << endl;
        cout << "6-Affichage." << endl;
        cout << "0-Quitter" << endl;
        cout << "Choix : ";
        cin >> choixMenu;
    }while(choixMenu < 0|| choixMenu > 6);
    return choixMenu;
}
int afficheContact(map<string, list<string>> & annuaire) {
    int choix;
    int i = 0;
    do{
        cout << "\tContact" << endl;
        for(const auto & contact : annuaire) {
            cout << ++i << "-" << contact.first << endl;
        }
        cout << "0-Quitter" << endl;
        cout << "choix : ";
        cin >> choix;
        if(choix < 0 || choix > i) {
            cout << "Choix non valide" << endl;
        }
        Sleep(2000);
        system("cls");
    }while(choix < 0 || choix > i);

    return choix;
}
bool verifNum(string num) {
    bool verif = false;
    if(num.length() == 9 && (num.substr(0, 2) == "70" || num.substr(0, 2) == "75"|| num.substr(0, 2) == "76" || num.substr(0, 2) == "77" || num.substr(0, 2) == "78")) {
        verif = true;
        for(char c : num) {
            if(c < '0' || c > '9') {
                verif = false;
                break;
            }
        }
    }
    return verif;
}
string saisiePhone(){
    string num;
    do{
        cout << "Numero de telephone : ";
        cin >> num;
        if(!verifNum(num)){
            cout << "Le numero de telephone doit contenir 9 chiffres et commencer par (70, 75, 76, 77 oubien 78)." << endl;
        }
    }while(!verifNum(num));
    return num;
}
string saisieNom() {
    string nom;
    cout << "Nom : ";
    cin >> nom;
    for(char & c : nom) {
        c = toupper(c);
    }
    return nom;
}
map<string, list<string>> ajoutNomAvecNumero(map<string, list<string>> annuaire, list<string>& numeros) {
    cout << "\tAjouter un nouveau nom avec un numero de telephone." << endl;
    string nom = saisieNom();
    list<string> contact;
    do{
        string phone = saisiePhone();
        auto it = find(numeros.begin(), numeros.end(), phone);

        if (it == numeros.end()) {
            numeros.push_back(phone);
            contact.push_back(phone);
            break;
        } else {
            cout << "Contact deja existant." << endl;
        }
    }while(true);
    annuaire.emplace(nom, contact);

    return annuaire;

}

map<string, list<string>> ajoutNumeroaNom(map<string, list<string>> annuaire, list<string>& numeros) {

    int choixContact;
    do{

        if(annuaire.size() == 0){
            cout << "L'annuaire est vide veuillez creer un nouveau contact." << endl;
            annuaire = ajoutNomAvecNumero(annuaire, numeros);
        }else {
            cout << "\tSupprimer un nom et tous ses numeros associes." << endl;
            choixContact = afficheContact(annuaire);
            if(choixContact != 0) {
                string numero = saisiePhone();
                int it = 0;
                for(auto &  contact : annuaire) {
                    it++;
                    if(choixContact == it){
                        auto other = find(numeros.begin(), numeros.end(), numero);
                        if(other == numeros.end()) {
                            numeros.push_back(numero);
                            contact.second.push_back(numero);
                        } else {
                            cout << "Contact deja existant." << endl;
                        }
                    }
                }
            }

        }


        Sleep(2000);
        system("cls");
    }while(choixContact != 0);

    return annuaire;

}

void trouveNum(map<string, list<string>> annuaire){
    bool trouver = false;
    char reponse;
    cout << "\tTrouver tous les numeros de telephone associes a un nom." << endl;
    do{
        string nom;
        cout << "Saisir un nom : ";
        cin >> nom;
        for(char & c : nom){
            c = toupper(c);
        }
        auto it = annuaire.find(nom);
        if(it != annuaire.end()){
            trouver = true;
            for(const auto & contact : annuaire) {
                if(contact.first == nom) {
                    for(string num : contact.second){
                        cout << num << "\t";
                    }
                    cout << endl;
                }
            }
        }else{
            cout << "Le nom saisit ne se trouve pas dans les contacts" << endl;

            do{
                cout << "Voulez vous continuer (o/n) : ";
                cin >> reponse;
            }while(toupper(reponse) != 'O' && toupper(reponse) != 'N');
        }
    }while(!trouver && toupper(reponse) == 'O');
}

map<string, list<string>> supressionNum(map<string, list<string>>& annuaire, list<string> & numeros){
    int choixContact;
    if(annuaire.size() == 0){
        cout << "L'annuaire est vide." << endl;
    }else {
        cout << "\tSupprimer un numero de telephone specifique d'un nom." << endl;
        choixContact = afficheContact(annuaire);
        if(choixContact != 0) {
            string numero = saisiePhone();
            int it = 0;
            for(auto &  contact : annuaire) {
                it++;
                if(choixContact == it){
                    auto other = find(contact.second.begin(), contact.second.end(), numero);
                    if(other != contact.second.end()) {
                        numeros.remove(numero);
                        contact.second.remove(numero);
                    } else {
                        cout << "Le numero ne se trouve pas dans ce contact" << endl;
                    }
                }
            }
        }

    }

    return annuaire;
}

map<string, list<string>> suppressionContact(map<string, list<string>>& annuaire, list<string> & numeros) {
    int choixContact;
    if(annuaire.size() == 0){
        cout << "L'annuaire est vide." << endl;
    }else {
        cout << "\tSupprimer un numero de telephone specifique d'un nom." << endl;
        choixContact = afficheContact(annuaire);
        if(choixContact != 0) {
            int it = 0;
            for(auto &  contact : annuaire) {
                it++;
                if(choixContact == it){
                    for(const auto num : contact.second){
                        numeros.remove(num);
                    }
                    annuaire.erase(contact.first);
                }
            }
        }

    }
    return annuaire;
}

void affichage(map<string, list<string>> annuaire) {
    for(const auto & contact : annuaire) {
        cout << "Nom : " << contact.first << endl;
        for(string num : contact.second) {
            cout << num << "\t";
        }
        cout << endl;
    }
}
int main() {
    map<string, list<string>> annuaire;
    list<string>numeros;

    //annuaire = ajoutNumeroaNom(annuaire);
    int choixMenu;

    do{
        choixMenu = menu();
        Sleep(2000);
        system("cls");
        switch(choixMenu){
            case 1:
                annuaire = ajoutNumeroaNom(annuaire, numeros);
                break;
            case 2:
                annuaire = ajoutNomAvecNumero(annuaire, numeros);
                Sleep(2000);
                system("cls");
                break;
            case 3:
                trouveNum(annuaire);
                Sleep(2000);
                system("cls");
                break;
            case 4:
                annuaire= supressionNum(annuaire, numeros);
                Sleep(2000);
                system("cls");
                break;
            case 5:
                annuaire = suppressionContact(annuaire, numeros);
                Sleep(2000);
                system("cls");
                break;
            case 6:
                affichage(annuaire);
                Sleep(2000);
                system("cls");
                break;
            default :
                cout << "Fin du programme";
                break;
       }
    }while(choixMenu != 0);


    return 0;
}
