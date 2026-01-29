#include <iostream> //libreria para entrada y salida
using namespace std; //uso del espacio para nombres estandar

int main() {
    int numero;

    // mensaje de inicio del programa
    cout << "Ingresa un numero: ";
    cin >> numero;

    // Verificar si el numero es 8
    if (numero == 8) {
        cout << "Encontraste el ocho!" << endl;
    } else {
        cout << "El numero no es ocho." << endl;
    }
    //fin del programa
    return 0;
}