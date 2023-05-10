#include <iostream>
using namespace std;

int main() {
    int num_estudiantes;
    float nota, promedio, suma_notas, promedio_maximo = 0;

    cout << "Ingrese el numero de estudiantes: ";
    cin >> num_estudiantes;

    for (int i = 1; i <= num_estudiantes; i++) {
        cout << "\nEstudiante " << i << endl;
        suma_notas = 0;  

        for (int j = 1; j <= 5; j++) {  
            cout << "Ingrese la nota " << j << ": ";
            cin >> nota;

            if (nota >= 0 && nota <= 100) {  
                suma_notas += nota;
            } else {
                cout << "Nota invalida. Ingrese una nota entre 0 y 5." << endl;
                j--;  
            }
        }

        promedio = suma_notas / 5; 

        if (promedio > promedio_maximo) {  
            promedio_maximo = promedio;
        }

        cout << "El promedio de notas del estudiante " << i << " es: " << promedio << endl;
    }

    cout << "\nEl promedio maximo entre todos los estudiantes es: " << promedio_maximo << endl;

    return 0;
}

