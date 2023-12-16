#include <iostream>

using namespace std;

const double PI = 3.14;
int main() {
    double rayon;

    cout << "Veuillez entrer le rayon du cercle : ";
    cin >> rayon;

    double perimetre = 2 * PI * rayon;
    double aire = PI * rayon * rayon;

    cout << "Le perimetre du cercle est : " << perimetre << " unites." << endl;
    cout << "L'aire du cercle est : " << aire << " unites carrees." << endl;


    return 0;
}
