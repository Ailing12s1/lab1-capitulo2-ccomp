#include <iostream>
using namespace std;

int main(){
    const double pi=3.14159;

    int radio;
    cout <<"Ingrese el radio: ";
    cin >> radio;

    int diametro = 2*radio;
    int circunferencia = 2*pi*radio;
    int area = pi*radio*radio;
    cout <<"El diametro es: "<<diametro<<endl;
    cout <<"La circunferencia es: "<<circunferencia<<endl;
    cout <<"El area es: "<<area<<endl;
    
    return 0;
}