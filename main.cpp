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
    else if (entrada == 4) {
        ejercicio_4();
    }
    else if (entrada == 5) {
        ejercicio_5();
    }
    else if (entrada == 6) {
        ejercicio_6();
    }
    else if (entrada == 7) {
        ejercicio_7();
    }
    else if (entrada == 8) {
        ejercicio_8();
    }
    else if (entrada == 9) {
        ejercicio_9();
    }
    else if (entrada == 10) {
        ejercicio_10();
    }
    else {
        cout << "La opcion seleccionada no esta entre las opciones validas" << endl;
        cout << "Intente de nuevo" << endl;
    }

    return 0;
}
