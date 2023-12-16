#include <iostream>
#include <list>
#include <map>

using namespace std;

int main() {
    map<string,list<int>> tableau;
    list<int> maListPremier;
    list<int> maListParfait;
    list<int> maListArmstrong;
    list<int> maListDivisible;


    for(int i = 1; i<= 400; i++) {
            int cpt1 = 0;
            int n = i;
            do{
                n /= 10;
                cpt1++;
            }while(n != 0);

            int val = i;

            if(cpt1 == 1) {
                maListArmstrong.push_back(i);
            }else if(cpt1 == 2) {
                int otherVal = 0;
                int rest;
                while( val != 0){
                    rest = val % 10;
                    otherVal += rest*rest;
                    val /= 10;
                }
                if(otherVal == i) {
                    maListArmstrong.push_back(i);
                }
            }else if(cpt1 == 3) {
                int otherVal = 0;
                int rest;
                while( val != 0){
                    rest = val % 10;
                    otherVal += rest*rest*rest;
                    val /= 10;
                }
                if(otherVal == i) {
                    maListArmstrong.push_back(i);
                }
            }else if(cpt1 == 4) {
                int otherVal = 0;
                int rest;
                while( val != 0){
                    rest = val % 10;
                    otherVal += rest*rest*rest*rest;
                    val /= 10;
                }
                if(otherVal == i) {
                    maListArmstrong.push_back(i);
                }
            }else{
                int otherVal = 0;
                int rest;
                while( val != 0){
                    rest = val % 10;
                    otherVal += rest*rest*rest*rest*rest;
                    val /= 10;
                }
                cout << "5 : val " << i << " otherVal : " << otherVal << endl;
                if(otherVal == i) {
                    maListArmstrong.push_back(val);
                }
            }


            int cpt = 0;
            int som = 0;
            if(i % 4 == 0 && i % 6 == 0 && i % 5 != 0) {
                maListDivisible.push_back(i);
            }
            for(int j = 1; j < i; j++) {
                if(i % j == 0){
                    cpt++;
                    som += j;
                }
            }
            if(cpt == 1){
                maListPremier.push_back(i);
            }
            if(som == i) {
                maListParfait.push_back(i);
            }

        }




    tableau.emplace("Nombres Premiers", maListPremier);
    tableau.emplace("Nombres Parfaits", maListParfait);
    tableau.emplace("Nombres Divisible par 4, 6 et pas 5", maListDivisible);
    tableau.emplace("Nombres Armstrong", maListArmstrong);

    for(const auto & nombre : tableau) {
        cout << nombre.first << " : " << endl;
        for(const auto &val : nombre.second) {
            cout << val << "\t";
        }
        cout << endl;
    }

    return 0;

}
