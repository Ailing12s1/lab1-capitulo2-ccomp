#include <iostream>
using namespace std;

int main(){
    int num;

    cout <<"Ingrese un numero entero de cuatro digitos: ";
    cin >> num;

    int di1 = num % 10;
    int di2 = (num / 10) % 10;
    int di3 = (num / 100) % 10;
    int di4 = (num / 1000) % 10;

    cout << di1 << " " << di2 << " " << di3 << " " << di4 << endl;

    return 0;
}