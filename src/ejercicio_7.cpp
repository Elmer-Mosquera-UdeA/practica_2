#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void ejercicio_7(){
    // Eliminar letras repetidas
    char entrada[50] = "";
    char salida[50] = "";
    int repeticiones[256] = {0};

    // Leer la entrada del usuario
    cout << "Ingrese una cadena: ";
    cin.ignore(1000, '\n');
    cin.getline(entrada, 50);

    // Procesar la cadena
    int j = 0;
    for (int i = 0; entrada[i] != '\0'; i++) {
        if (repeticiones[entrada[i]] == 0) {
            salida[j++] = entrada[i];
        }
        repeticiones[entrada[i]]++;
    }
    salida[j] = '\0';

    // salida
    cout << "Original: " << entrada << endl;
    cout << "Sin repetidos: " << salida << endl;
}
