#include <iostream>
#include <string>
using namespace std;

int main (){
    cout << "Longitud del cubo en cm: ";
    cout << "Area del cubo en cm^2: ";
    cout << "Volumen del cubo en cm^3: ";

    for (int lon = 0; lon <=4; ++lon){
        int area = 6*lon * lon;
        int vol = lon * lon * lon;
    
        cout << to_string(lon) << "  ";
        cout << to_string(area) << "  ";
        cout << to_string(vol) <<endl;
    }
    return 0;
}

