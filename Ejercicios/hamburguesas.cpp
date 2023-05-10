#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int num_hamburguesas_s = 0, num_hamburguesas_d = 0, num_hamburguesas_t = 0;
    double precio_s = 20.0, precio_d = 25.0, precio_t = 28.0;
    double total = 0.0, cargo_tarjeta = 0.0, total_con_cargo = 0.0;
    int num_hamburguesas = 0;
    char tipo_hamburguesa;

   
    cout << "Ingrese el numero de hamburguesas sencillas (S): ";
    cin >> num_hamburguesas_s;
    cout << "Ingrese el numero de hamburguesas dobles (D): ";
    cin >> num_hamburguesas_d;
    cout << "Ingrese el numero de hamburguesas triples (T): ";
    cin >> num_hamburguesas_t;


    total = num_hamburguesas_s * precio_s +
            num_hamburguesas_d * precio_d +
            num_hamburguesas_t * precio_t;

   
    num_hamburguesas = num_hamburguesas_s + num_hamburguesas_d + num_hamburguesas_t;


    cargo_tarjeta = 0.05 * total;


    total_con_cargo = total + cargo_tarjeta;

    cout << "Total de hamburguesas: " << num_hamburguesas << endl;
    cout << "Total sin cargo: $" << fixed << setprecision(2) << total << endl;
    cout << "Cargo por tarjeta de credito: $" << fixed << setprecision(2) << cargo_tarjeta << endl;
    cout << "Total con cargo: $" << fixed << setprecision(2) << total_con_cargo << endl;

    return 0;
}
