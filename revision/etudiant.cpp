#include <iostream>
#include <map>
#include<string>
#include <windows.h>
#include <algorithm>
#include <cctype>

using namespace std;

int menu(){
    cout << "\tMenu." << endl;
    int choix;
    do{
        cout << "1-Ajouter une nouvelle note a un etudiant specifique." << endl;
        cout << "2-Calculer la moyenne des notes d'un etudiant." << endl;
        cout << "3-Afficher toutes les notes d'un etudiant specifique." << endl;
        cout << "4-Mettre a jour une note specifique d'un etudiant." << endl;
        cout << "5-Supprimer toutes les notes d'un etudiant." << endl;
        cout << "0-Quitter" << endl;
        cout << "Choix : ";
        cin >> choix;
    }while(choix < 0 || choix > 6);

    return choix;
}

map<int, map<string, float>> ajoutNote(map<int, map<string, float>> & etudiants) {
    int id;

    do{
        cout << "Ajouter une nouvelle note a un etudiant specifique." << endl;
        cout << "Veuillez saisir l'id de l'etudiant : ";
        cin >> id;
        auto it = etudiants.find(id);
        if(it != etudiants.end()){
            int note;
            string matiere;
            cout << "Matiere : ";
            cin >> matiere;
            for(char & c : matiere) {
                c = toupper(c);
            }
            do{
                cout << "Note : ";
                cin >> note;
            }while(note < 0 || note > 20);
            it->second.emplace(matiere, note);
            break;
        }else {
            cout << "Id inexistant" << endl;
        }
        Sleep(2000);
        system("cls");
    }while(true);

    return etudiants;
}

float moyenne(map<int,map<string, float>> etudiants) {
    int id;
    float moy = 0;
    do{
        cout << "Calculer la moyenne des notes d'un etudiant." << endl;
        cout << "Veuillez saisir l'id de l'etudiant : ";
        cin >> id;
        auto it = etudiants.find(id);
        if(it != etudiants.end()){
            for(const auto & note : it->second){
                moy += note.second;
            }
            moy /= it->second.size();
            break;
        }else {
            cout << "Id inexistant" << endl;
        }
        Sleep(2000);
        system("cls");
    }while(true);

    return moy;
}

void afficheNote(map<int,map<string, float>> etudiants) {
    int id;
    do{
        cout << "Veuillez saisir l'id de l'etudiant : ";
        cin >> id;
        auto it = etudiants.find(id);
        if(it != etudiants.end()){
            cout << "Les notes de l'etudiant avec l'id : " << it->first << endl;
            for(const auto & note : it->second){
                cout << note.first << " : " << note.second << endl;
            }
            break;
        }else {
            cout << "Id inexistant" << endl;
        }
        Sleep(2000);
        system("cls");
    }while(true);
}

map<int,map<string, float>> modification(map<int,map<string, float>> & etudiants) {
    int id;
    do{
        cout << "Veuillez saisir l'id de l'etudiant : ";
        cin >> id;
        auto it = etudiants.find(id);
        if(it != etudiants.end()){
            string matiere;
            cout << "Veuillez saisir la matiere de la note a modifie : ";
            cin >> matiere;
            for(char & c: matiere) {
                c = toupper(c);
            }
            auto it1 = it->second.find(matiere);
            if(it1 != it->second.end()) {
                float newNote;
                do{
                    cout << "Saisir une nouvelle note : ";
                    cin >> newNote;
                }while(newNote < 0 || newNote > 20);
                it1->second = newNote;
            }else{
                cout << "Matiere inexistante." << endl;
            }
            break;
        }else {
            cout << "Id inexistant" << endl;
        }
        Sleep(2000);
        system("cls");
    }while(true);

    return etudiants;
}

map<int,map<string, float>> supression(map<int,map<string, float>> & etudiants) {
    int id;
    do{
        cout << "Veuillez saisir l'id de l'etudiant : ";
        cin >> id;
        auto it = etudiants.find(id);
        if(it != etudiants.end()){
            it->second.clear();
            break;
        }else {
            cout << "Id inexistant" << endl;
        }
        Sleep(2000);
        system("cls");
    }while(true);

    return etudiants;
}

int main() {
    map<int,map<string, float>> etudiants = {
        {1, {{"MATH", 12.3}, {"PC", 15.7}, {"SVT", 14.2}}},
        {2, {{"MATH", 12.3}, {"PC", 15.7}, {"SVT", 14.2}}},
        {3, {{"MATH", 12.3}, {"PC", 15.7}, {"SVT", 14.2}}},
        {4, {{"MATH", 12.3}, {"PC", 15.7}, {"SVT", 14.2}}},
    };

    int choixMenu;

    do{
        choixMenu = menu();
        float moy;
        Sleep(2000);
        system("cls");
        switch(choixMenu){
            case 1:
                etudiants = ajoutNote(etudiants);
                Sleep(2000);
                system("cls");
                break;
            case 2:
                moy = moyenne(etudiants);
                cout << "La moyenne de l'etudiant est : " << moy << endl;
                Sleep(2000);
                system("cls");
                break;
            case 3:
                afficheNote(etudiants);
                Sleep(2000);
                system("cls");
                break;
            case 4:
                etudiants = modification(etudiants);
                Sleep(2000);
                system("cls");
                break;
            case 5:
                etudiants = supression(etudiants);
                Sleep(2000);
                system("cls");
                break;
            default:
                cout << "Fin du programme." << endl;
                break;
        }
    }while(choixMenu != 0);



    return 0;
}

