#include <iostream>
using namespace std;

int main(){

    int numero1,numero2,numero3,numero4,numero5;

    cout <<"Ingresa cinco numeros enteros, plis: ";
    cin >> numero1 >> numero2 >> numero3 >> numero4 >> numero5;

    int smallest = numero1;
    int largest = numero1;

    if(numero2 < smallest){
        smallest = numero2;
    }
    if(numero2 > largest){
        largest = numero2;
    }
    if(numero3 < smallest){
        smallest = numero3;
    }
    if(numero3 > largest){
        largest = numero3;
    }    
    if(numero4 < smallest){
        smallest = numero4;
    }    
    if(numero4 > largest){
        largest = numero4;
    }
    if(numero5 < smallest){
        smallest = numero5;
    }
    if(numero5 > largest){
        largest = numero5;        
    }

    cout <<"El numero mas pequeño es: "<< smallest <<endl;
    cout << "El numero mas grande es: "<< largest <<endl;

    return 0;
}
