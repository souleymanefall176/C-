#include <iostream>

using namespace std;

int main() {
    int n = 6;
    int tab[] = {7, -1, 3, 9, 6, 10};
    for(int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n/2; i++) {
        int tmp = tab[i];
        tab[i] = tab[n-i-1];
        tab[n-i-1] = tmp;
    }
    for(int i : tab) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}

