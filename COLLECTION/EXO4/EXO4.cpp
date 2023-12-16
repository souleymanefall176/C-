#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myVecteur1;
    vector<int> myVecteur2;
    vector<int> myVecteur3;

    int tmp;
    int i = 0;
    cout << "\nVecteur 1 : \n";
    do{
        cout << "Saisir la valeur " << ++i << " Ou 0 pour quitter : ";
        cin >> tmp;
        if(tmp != 0) {
            myVecteur1.push_back(tmp);

        }else{
            i = 0;
        }
    }while(tmp != 0);

    cout << "\nVecteur 2 : \n";
    do{
        cout << "Saisir la valeur " << ++i << " Ou 0 pour quitter : ";
        cin >> tmp;
        if(tmp != 0) {
            myVecteur2.push_back(tmp);
        }
    }while(tmp != 0);

    cout << "\nAffichage du vecteur 1 : " << endl;
    for(int a : myVecteur1) {
        cout << a << "\t";
    }

    cout << "\nAffichage du vecteur 2 : " << endl;
    for(int a : myVecteur2) {
        cout << a << "\t";
    }


    for(i = 0; i < myVecteur1.size(); i++) {
        int j = 0;
        while(j < i && myVecteur1[i] != myVecteur1[j]) {
            j++;
        }

        if(i == j) {
            tmp = myVecteur1[i];
            myVecteur3.push_back(tmp);

        }
    }



    for(i = 0; i < myVecteur2.size(); i++) {
        bool trouver = false;
        for(int j = 0; j < myVecteur3.size(); j++) {
            if(myVecteur2[i] == myVecteur3[j]) {
                trouver = true;
                break;
            }
        }
        if(trouver == false) {
            tmp = myVecteur2[i];
            myVecteur3.push_back(tmp);
        }
    }

    cout << "\nAffichage du vecteur de fusion : " << endl;
    for(int a : myVecteur3) {
        cout << a << "\t";
    }


    return 0;
}

