#include <iostream>
using namespace std;

int main(){
    int kilototaldia, costolitrogalon, promediokilolitro, cuotaesta, peaje;
    
    cout << "Ingrese el total de kilómetros conducidos por día: ";
    cin >> kilototaldia;
    cout << "Ingrese el costo por litro de gasolina: ";
    cin >> costolitrogalon;
    cout << "Ingrese el promedio de kilometros por dia: ";
    cin >> promediokilolitro;
    cout << "Ingrese las cuotas de estacionamiento por dia: ";
    cin >> cuotaesta;
    cout << "Ingrese el costo del peaje por dia: ";
    cin >> peaje;

    int costodiario =  (kilototaldia*costolitrogalon/promediokilolitro) + cuotaesta + peaje;
    cout << "El costo diario de conducción es: " << costodiario << endl;

    int compartirviaje = costodiario/2;
    int ahorro = costodiario - compartirviaje;
    cout << "Al compartir el viaje en automóvil, podrías ahorrar: "<< ahorro << endl;

    return 0;
}