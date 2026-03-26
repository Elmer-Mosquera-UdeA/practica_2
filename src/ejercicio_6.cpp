#include <iostream>

using std::cout;
using std::endl;
using std::cin;


void ejercicio_6(){
    char letras[26];
    char entrada[50];
    int longitud = 0;
    char salida[50];

    for (int i = 0; i < 26; i++) {
        letras[i] = 'a' + i;
    }

    cout << "Ingrese una cadena de carracteres cualquiera: " << endl;
    cin.ignore();
    cin.getline(entrada, 50);

    while (entrada[longitud] != '\0') {
        bool esLetra = false;
        char caracter = entrada[longitud];
        for (int i = 0; i < 26; i++) {
            if (caracter == letras[i]){
                salida[longitud] = (letras[i] - 32);
                esLetra = true;
                break;
            }
        }
        if (!esLetra){
            salida[longitud] = entrada[longitud];
        }
        cout << salida[longitud];
        longitud++;
    }
}