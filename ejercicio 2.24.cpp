#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    int impar1 = num1%2;
    int impar2 = num2%2;

    int suma = num1 + num2;

    int sumaimpar = suma%2;

    cout << num1 << " es ";
    if (impar1){
        cout << "impar" <<endl;
    }
    else {
        cout << "par" <<endl;
    }

    cout << num2 << " es ";
    if (impar2) {
        cout << "impar" <<endl;
    } 
    else {
        cout << "par" <<endl;
    }

    cout << "La suma de " << num1 << " y " << num2 << " es ";
    if (sumaimpar) {
        cout << "impar" <<endl;
    } else {
        cout << "par" <<endl;
    }

    return 0;
}    