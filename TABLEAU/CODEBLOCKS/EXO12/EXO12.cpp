#include <iostream>

using namespace std;

int main() {
    int n;

    do{
        cout << "Saisir la taille du tableau : ";
        cin >> n;
    }while(n <= 0);

    int T[n];
    cout << "Remplissage du tableau\n";
    for(int i = 0; i < n; i++) {
        cout << "Saisir T[" << i << "] : ";
        cin >> T[i];
    }

    cout << "Affichage du tableau\n";
    for(int i : T) {
        cout << i << "\t";
    }
    cout << endl;


     int ordre;
     bool estTrie = true;

     for(int i = 0; i < n - 1; i++){
        bool estVerif = true;
        for(int j = i + 1; j < n; j++) {
            if(i == 0){
                do{
                    if(T[i] < T[j]) {
                        ordre = 1;
                    } else if(T[i] > T[j]) {
                        ordre = 2;
                    }
                    j++;
                }while(T[i] == T[j]);
            }else {
                if(ordre == 1) {
                    if(T[i] > T[j]) {
                        estVerif = false;
                        break;
                    }
                } else {
                    if(T[i] < T[j]) {
                        estVerif = false;
                        break;
                    }
                }
            }
        }
        if(!estVerif){
            estTrie = false;
            break;
        }
     }
     if(estTrie) {
        if(ordre == 1) {
            cout << "Le tableau est trie dans l'ordre croissant\n";
        }else{
            cout << "Le tableau est trie dans l'ordre decroissant\n";
        }
     }else{
        cout << "Le tableau est non trie\n";
     }
     return 0;
}
