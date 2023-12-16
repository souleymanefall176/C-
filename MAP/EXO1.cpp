#include <iostream>
#include <map>
#include <string>
#include <windows.h>
using namespace std;


int main() {
    map<string,float>produit = { {"lait", 150.5}, {"sucre", 175.5} };
    int nbr;
    string nom;
    float prix;
    int choix;
    map<string, float>::iterator it;

    do{
        do{
            cout << "\t\tMENU\n1-Insertion\n2-Modification\n3-Suppression\n4-Recherche\n5-Affichage\n0-Quitter\n choix : ";
            cin >> choix;
        }while(choix < 0 || choix > 5);
        switch(choix){
            case 1 :
                do{
                    cout << "Saisir le nombre de produits a inserer : ";
                    cin >> nbr;
                }while(nbr < 0);

                for(int i = 1; i <= nbr; i++){
                    cout << "Saisir la nom du produit " << i << " : ";
                    cin >> nom;
                    cout << "Saisir la prix du produit " << i << " : ";
                    cin >> prix;
                    produit.emplace(nom, prix);
                }
                break;
            case 2:
                cout << "Saisir le nom du produit a modifie : ";
                cin >> nom;

                it = produit.find(nom);
                if(it != produit.end()) {
                    cout << "Entrez le nouveau prix du produit : ";
                    cin >> prix;
                    it->second = prix;
                }else{
                    cout << "Ce produit n'existe pas" << endl;
                }
                break;
            case 3:
                cout << "Saisir le nom du produit a supprime : ";
                cin >> nom;

                it = produit.find(nom);
                if(it != produit.end()) {
                    produit.erase(it);
                }else{
                    cout << "Ce produit n'existe pas" << endl;
                }
                break;
            case 4:
                cout << "Saisir le nom du produit a recherche : ";
                cin >> nom;

                it = produit.find(nom);
                if(it != produit.end()) {
                    cout << it->first << " : " << it->second << endl;
                }else{
                    cout << "Ce produit n'existe pas" << endl;
                }
                break;
            case 5:
                for(const auto & prod : produit) {
                    cout << prod.first << " : " << prod.second << "\t";
                }
                break;
            default:
                cout << "Fin du programme" << endl;

        }

        Sleep(2000);
        system("cls");
    }while(choix != 0);














    return 0;
}
