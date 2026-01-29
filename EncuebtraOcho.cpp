#include <iostream>
using namespace std;

int main() {
    int numero;

    // Pedir un número al usuario
    cout << "Ingresa un numero: ";
    cin >> numero;

    // Verificar si el numero es 8
    if (numero == 8) {
        cout << "Encontraste el ocho!" << endl;
    } else {
        cout << "El numero no es ocho." << endl;
    }

    return 0;
}