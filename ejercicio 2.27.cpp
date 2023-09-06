#include <iostream>
using namespace std;

int main(){
char cara;

    cout << "Ingrese un caracter :) ";
    cin >> cara;

    int equi = static_cast <int> (cara);
    cout <<"El eqivalente entero es: " << equi <<endl;

    return 0;
}