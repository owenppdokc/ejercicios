#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int opcion;

    while (true) {
        cout << "MENU PRINCIPAL" << endl;
        cout << "1. Hamburguesas" << endl;
        cout << "2. Estatura promedio" << endl;
        cout << "3. Ahorro anual" << endl;
        cout << "4. Promedio de notas" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
              
                break;
            case 2:
               
                break;
            case 3:
                
                break;
            case 4:
               
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                return 0;
            default:
                cout << "Opcion inválida. Ingrese una opcion del 1 al 5." << endl;
                break;
        }
    }

    return 0;
}
