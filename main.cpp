#include "enlace.h"
#include <iostream>

// Solo las partes que se ocupan (cout, cin, endl)
using std::cout;
using std::cin;
using std::endl;

int main(){
    // Creacion de switch para ejecutar ejercicios
    char entrada = 0; // char puede ir desde 0 - 255 es suficiente en este caso

    cout << "Ingrese una de las opciones (2 o 4) " << endl;
    cin >> entrada;

    if (entrada == 2) {
        ejercicio_2();
    }
    else if (entrada == 4) {
        ejercicio_4();
    }
    else {
        cout << "La opcion seleccionada no esta entre las opciones validas" << endl;
        cout << "Intente de nuevo" << endl;
    }

    return 0;
}
