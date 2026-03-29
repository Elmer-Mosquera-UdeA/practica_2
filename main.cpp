#include "enlace.h"
#include <iostream>

// Solo las partes que se ocupan (cout, cin, endl)
using std::cout;
using std::cin;
using std::endl;

int main(){
    // Creacion de switch para ejecutar ejercicios
    int entrada = 0;

    cout << "Ingrese una de las opciones (2 o 4) " << endl;
    cin >> entrada;

    if (entrada == 2) {
        ejercicio_2();
    }
    else if (entrada == 3) {
        ejercicio_3();
    }
    else if (entrada == 4) {
        ejercicio_4();
    }
    else if (entrada == 6) {
        ejercicio_6();
    }
    else if (entrada == 8) {
        ejercicio_8();
    }
    else {
        cout << "La opcion seleccionada no esta entre las opciones validas" << endl;
        cout << "Intente de nuevo" << endl;
    }

    return 0;
}
