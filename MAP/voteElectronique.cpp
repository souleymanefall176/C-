#include <iostream>
#include <map>
#include <windows.h>


using namespace std;

int main() {
    map<string,map<string, int>> tableauVote, tableau2;
    tableauVote = {
        {"Dakar", {{"Ousmane Sonko", 4}, {"Bassirou Diomaye Faye", 3}, {"Thione Niang", 2}} },
        {"Saint_Louis",{{"Ousmane Sonko", 3}, {"Bassirou Diomaye Faye", 2}, {"Thione Niang", 1}} },
        {"Casamance", {{"Ousmane Sonko", 2}, {"Bassirou Diomaye Faye", 1}, {"Thione Niang", 0}} }
    };
    tableau2 = tableauVote;
    int choixMenu, choixLieu, choixCandidat, choixRetour;

    do{
        do{
            cout << "\t\tMenu : " << endl;
            cout << "1- Vote" << endl;
            cout << "2- Affichage" << endl;
            cout << "3- Statistique" << endl;
            cout << "0- Quitter" << endl;
            cout << "choixMenu : ";
            cin >> choixMenu;
        }while(choixMenu < 0 || choixMenu > 3);
        Sleep(2000);
        system("cls");
        switch(choixMenu){
            case 1:
                do{
                    cout << "\t\tLieu de vote." << endl;
                    cout << "1-Dakar" << endl;
                    cout << "2-Saint-Louis" << endl;
                    cout << "3-Casamance" << endl;
                    cout << "Choix :" << endl;
                    cin >> choixLieu;
                }while(choixLieu < 1 || choixLieu > 3);
                Sleep(2000);
                system("cls");
                do{
                    cout << "\t\tCandidats." << endl;
                    cout << "1-Ousmane Sonko" << endl;
                    cout << "2-Bassirou Diomaye Faye" << endl;
                    cout << "3-Thione Niang" << endl;
                    cout << "Choix :" << endl;
                    cin >> choixCandidat;
                }while(choixCandidat < 1 || choixCandidat > 3);
                Sleep(2000);
                system("cls");
                switch(choixLieu){
                    case 1:
                        if(choixCandidat == 1) {
                            tableauVote["Dakar"]["Ousmane Sonko"]++;
                            int voie = 0;
                            for(const auto & lieu : tableauVote) {
                                for(const auto candidat : lieu.second){
                                    if(candidat.first == "Ousmane Sonko"){
                                        voie += candidat.second;
                                    }
                                }
                            }
                            cout << "Votre candidat Ousmane Sonko a maintenant : " << voie << " voies." << endl;
                        }else if(choixCandidat == 2) {
                            tableauVote["Dakar"]["Bassirou Diomaye Faye"]++;
                            int voie = 0;
                            for(const auto & lieu : tableauVote) {
                                for(const auto candidat : lieu.second){
                                    if(candidat.first == "Bassirou Diomaye Faye"){
                                        voie += candidat.second;
                                    }
                                }
                            }
                            cout << "Votre candidat Bassirou Diomaye Faye a maintenant : " << voie << " voies." << endl;
                        }else{
                            tableauVote["Dakar"]["Thione Niang"]++;
                            int voie = 0;
                            for(const auto & lieu : tableauVote) {
                                for(const auto candidat : lieu.second){
                                    if(candidat.first == "Thione Niang"){
                                        voie += candidat.second;
                                    }
                                }
                            }
                            cout << "Votre candidat Thione Niang a maintenant : " << voie << " voies." << endl;

                        }
                        break;
                    case 2:
                        if(choixCandidat == 1) {
                            tableauVote["Saint_Louis"]["Ousmane Sonko"]++;
                            int voie = 0;
                            for(const auto & lieu : tableauVote) {
                                for(const auto candidat : lieu.second){
                                    if(candidat.first == "Ousmane Sonko"){
                                        voie += candidat.second;
                                    }
                                }
                            }
                            cout << "Votre candidat Ousmane Sonko a maintenant : " << voie << " voies." << endl;
                        }else if(choixCandidat == 2) {
                            tableauVote["Saint_Louis"]["Bassirou Diomaye Faye"]++;
                            int voie = 0;
                            for(const auto & lieu : tableauVote) {
                                for(const auto candidat : lieu.second){
                                    if(candidat.first == "Bassirou Diomaye Faye"){
                                        voie += candidat.second;
                                    }
                                }
                            }
                            cout << "Votre candidat Bassirou Diomaye Faye a maintenant : " << voie << " voies." << endl;
                        }else{
                            tableauVote["Saint_Louis"]["Thione Niang"]++;
                            int voie = 0;
                            for(const auto & lieu : tableauVote) {
                                for(const auto candidat : lieu.second){
                                    if(candidat.first == "Thione Niang"){
                                        voie += candidat.second;
                                    }
                                }
                            }
                            cout << "Votre candidat Thione Niang a maintenant : " << voie << " voies." << endl;
                        }

                        break;
                    default:
                        if(choixCandidat == 1) {
                            tableauVote["Casamance"]["Ousmane Sonko"]++;
                            int voie = 0;
                            for(const auto & lieu : tableauVote) {
                                for(const auto candidat : lieu.second){
                                    if(candidat.first == "Ousmane Sonko"){
                                        voie += candidat.second;
                                    }
                                }
                            }
                            cout << "Votre candidat Ousmane Sonko a maintenant : " << voie << " voies." << endl;
                        }else if(choixCandidat == 2) {
                            tableauVote["Casamance"]["Bassirou Diomaye Faye"]++;
                            int voie = 0;
                            for(const auto & lieu : tableauVote) {
                                for(const auto candidat : lieu.second){
                                    if(candidat.first == "Bassirou Diomaye Faye"){
                                        voie += candidat.second;
                                    }
                                }
                            }
                            cout << "Votre candidat Bassirou Diomaye Faye a maintenant : " << voie << " voies." << endl;
                        }else{
                            tableauVote["Casamance"]["Thione Niang"]++;
                            int voie = 0;
                            for(const auto & lieu : tableauVote) {
                                for(const auto candidat : lieu.second){
                                    if(candidat.first == "Thione Niang"){
                                        voie += candidat.second;
                                    }
                                }
                            }
                            cout << "Votre candidat Thione Niang a maintenant : " << voie << " voies." << endl;
                        }
                        break;
                }
                Sleep(2000);
                system("cls");
                tableau2 = tableauVote;
                break;
            case 2:
                 for(const auto & lieu : tableauVote) {
                    cout << "Lieu : " << lieu.first << endl;
                    for(const auto & candidat : lieu.second) {
                        cout << "Nom : " << candidat.first << " => Voies = " << candidat.second << endl;
                    }
                 }
                 Sleep(5000);
                 system("cls");
                 break;
            case 3:
                for(int i = 10; i >= 1; i--){
                        if(i == 10) {
                            cout << "^" << endl;
                        }else if(i > 0) {
                            cout << "|\t";

                            for(auto & lieu : tableau2) {
                                if(i == 9) {
                                    cout <<"OBT";
                                }
                                for( auto & candidat : lieu.second){


                                    if(candidat.second == i) {

                                        cout << "*";
                                        candidat.second = candidat.second - 1;
                                    }
                                }
                                cout << "\t";
                            }
                            if(i > 1) {
                                cout << "\n";
                            }
                        }

                }
                cout << "\n|";
                for(int j = 1; j < 50; j++) {
                    cout << "_";
                }
                cout << ">" << endl;
                for(const auto & lieu : tableauVote) {
                    cout << lieu.first << "\t";
                }
                cout << endl;
                do{
                    cout << "1-Retour\n";
                    cout << "Choix : ";
                    cin >> choixRetour;
                }while(choixRetour != 1 );
                if(choixRetour == 1) {
                    Sleep(2000);
                    system("cls");
                    do{
                        cout << "\t\tLieu de vote." << endl;
                        cout << "1-Dakar" << endl;
                        cout << "2-Saint-Louis" << endl;
                        cout << "3-Casamance" << endl;
                        cout << "Choix :" << endl;
                        cin >> choixLieu;
                    }while(choixLieu < 1 || choixLieu > 3);
                    Sleep(2000);
                    system("cls");
                    do{
                        cout << "\t\tCandidats." << endl;
                        cout << "1-Ousmane Sonko" << endl;
                        cout << "2-Bassirou Diomaye Faye" << endl;
                        cout << "3-Thione Niang" << endl;
                        cout << "Choix :" << endl;
                        cin >> choixCandidat;
                    }while(choixCandidat < 1 || choixCandidat > 3);
                    Sleep(2000);
                    system("cls");
                    switch(choixLieu){
                        case 1:
                            if(choixCandidat == 1) {
                                tableauVote["Dakar"]["Ousmane Sonko"]++;
                            }else if(choixCandidat == 2) {
                                tableauVote["Dakar"]["Bassirou Diomaye Faye"]++;
                            }else{
                                tableauVote["Dakar"]["Thione Niang"]++;

                            }
                            break;
                        case 2:
                            if(choixCandidat == 1) {
                                tableauVote["Saint_Louis"]["Ousmane Sonko"]++;
                            }else if(choixCandidat == 2) {
                                tableauVote["Saint_Louis"]["Bassirou Diomaye Faye"]++;
                            }else{
                                tableauVote["Saint_Louis"]["Thione Niang"]++;
                            }

                            break;
                        default:
                            if(choixCandidat == 1) {
                                tableauVote["Casamance"]["Ousmane Sonko"]++;
                            }else if(choixCandidat == 2) {
                                tableauVote["Casamance"]["Bassirou Diomaye Faye"]++;
                            }else{
                                tableauVote["Casamance"]["Thione Niang"]++;
                            }
                            break;
                    }
                    tableau2 = tableauVote;
                    break;

                }
                break;
            default:
                cout << "Fin du programme." << endl;
                break;

        }

    }while(choixMenu != 0);

    return 0;
}
