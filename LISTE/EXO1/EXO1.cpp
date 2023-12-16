#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<string> prenoms;
    string prenom;

    do{
        cout << "Saisir un prenom ou fin pour quitter : ";
        cin >> prenom;
        if(prenom != "fin"){
            prenoms.push_back(prenom);
        }
    }while(prenom != "fin");
    cout << "Liste des prenoms apres saisies : " << endl;
    for (const auto & elem : prenoms) {
        cout << elem << " ";
    }
    cout << endl;
    cout << "Saisir un prenom a recherche : ";
    cin >> prenom;

    auto it = next(prenoms.begin(), prenoms.size());
    bool trouver = false;
    for (auto & elem : prenoms) {
        if(elem == prenom ) {
            trouver = true;
            string newPrenom;
            cout << "Saisir un nouveau prenom : ";
            cin >> newPrenom;
            elem = newPrenom;
        }
    }
    cout << endl;
    if(trouver == false) {
        cout << " le prenom n'est pas dans la liste." << endl;
    } else {
        cout << "Liste des prenoms apres modifications : " << endl;
        for (const auto & elem : prenoms) {
            cout << elem << " ";
        }
    }
    cout << endl;
    int cpt = 0;
     for (auto it = prenoms.begin(); it != prenoms.end();) {
        char dernierCaractere = it->back();
        if (dernierCaractere == 'e') {
            it = prenoms.erase(it);
            cpt++;
        } else {
            ++it; // Passer à l'élément suivant
        }
    }

    if(cpt == 0) {
        cout << "aucun prenom correspondant n'a ete trouve dans la liste." << endl;
    } else {
        cout << cpt << " prenoms ont ete supprimes" << endl;
    }





    return 0;
}
