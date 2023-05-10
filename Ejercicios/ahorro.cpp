#include <iostream>
using namespace std;

int main() {
    float deposito, total_ahorrado = 0;
    
    cout << "Ingrese el monto que desea depositar al final de cada mes:\n";
    
    for (int mes = 1; mes <= 12; mes++) {
        cout << "Mes " << mes << ": ";
        cin >> deposito;
        total_ahorrado += deposito;
        cout << "Lleva ahorrado un total de $" << total_ahorrado << " hasta el mes " << mes << ".\n";
    }
    
    cout << "\nSe a ahorrado la cantidad de : $" << total_ahorrado << endl;
    
    return 0;
}
