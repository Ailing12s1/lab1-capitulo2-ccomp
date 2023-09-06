#include <iostream>
using namespace std;

int main() {
    double peso, altura;
    double bmi;

    cout << "Ingrese su peso en libras: ";
    cin >> peso;
    cout << "Ingrese su altura en pulgadas: ";
    cin >> altura;

    bmi = (peso * 703) / (altura * altura);

    cout << "Su BMI es: " << bmi <<endl;

    if (bmi < 18.5) {
        cout << "BMI Values: Bajo peso (menos de 18.5)" <<endl;
    } 
    else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "BMI Values: Normal (entre 18.5 y 24.9)" <<endl;
    } 
    else if (bmi >= 25 && bmi <= 29.9) {
        cout << "BMI Values: Sobrepeso (entre 25 y 29.9)" <<endl;
    } 
    else {
        cout << "BMI Values: Obeso (30 o más)" <<endl;
    }

    return 0;
}
