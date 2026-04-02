#include <iostream>

using std::cout;
using std::endl;
using std::cin;


void ejercicio_3(){

    int i = 0;
    bool iguales = true;
    char cadena1[50];
    char cadena2[50];

    // 1. Limpiamos el búfer para que no se salte la entrada
    cin.ignore(1000, '\n');

    cout << "Ingrese la primera cadena: " << endl;
    cin.getline(cadena1, 50);

    cout << "Ingrese la segunda cadena para comparar: " << endl;
    cin.getline(cadena2, 50);

    while (cadena1[i] != '\0' && cadena2[i] != '\0') {
        if (cadena1[i] != cadena2[i] ) {
            iguales = false;
            break;
        }

        i++;
    }
    if (iguales == true) {
        if (cadena1[i] != '\0' || cadena2[i] != '\0') {
            iguales = false; // Tienen longitudes diferentes
        }
    }

    if (iguales) {
        cout << "Resultado: VERDADERO (Son iguales)." << endl;
    } else {
        cout << "Resultado: FALSO (Son diferentes)." << endl;
    }
}

