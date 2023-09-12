#include <iostream>
using namespace std;

int main(){
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    int formula1 = 220 - edad;
    int formula2 = 208 - int(0.7*edad);
    int formula3 = 211 - int(0.64 * edad);
    
    int pequeño = formula1;
    if (formula2 < pequeño){
        pequeño = formula2;
    }
    if (formula3 < pequeño){
        pequeño = formula3;
    }

    int grande = formula1;
    if (formula2 > grande){
        grande = formula2;
    }
    if (formula3 > grande){
        grande = formula3;
    }

    cout << "El MHR tiene estos posibles valores: " << endl;
    cout << "Primera formula: " << formula1 << " latidos por minuto" << endl;
    cout << "Segunda formula: " << formula2 << " latidos por minuto" << endl;
    cout << "Tercera formula: " << formula3 << " latidos por minuto" << endl;
    cout << "Rango de valores de MHR: " << pequeño << " a " << grande << " latidos por minuto" << endl;

    return 0;
}