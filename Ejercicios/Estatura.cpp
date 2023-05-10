#include <iostream>
using namespace std;

int main() {
    float altura, suma_altura = 0;
    int contador_personas = 0;
    
    cout << "Ingrese la estatura de cada persona (en metros). Ingrese 0 para terminar.\n";
    
    do {
        cout << "Estatura: ";
        cin >> altura;
        
        if (altura > 0) {  
            suma_altura += altura;
            contador_personas++;
        }
    } while (altura != 0);
    
    if (contador_personas > 0) {  
        float promedio = suma_altura / contador_personas;
        cout << "\nLa estatura promedio es: " << promedio << " metros." << endl;
    } else {
        cout << "\nNo se ha registrado ninguna estatura." << endl;
    }
    
    return 0;
}
