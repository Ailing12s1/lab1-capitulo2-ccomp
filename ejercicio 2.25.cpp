#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int num3;

    cout <<"Ingresa tres numeros: ";
    cin >> num1 >> num2 >> num3;

    if (num3%num1 == 0 && num3%num2 == 0){
        cout << num1 << " y " << num2 << " son factores de " << num3 <<endl;
    }
    else {
        cout << num1 << " y " << num2 << " no son factores de " << num3 <<endl;
    }
    return 0;
}