#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void ejercicio_4(){
    cout << "Un programa que reciba una cadena de caracteres numericos (arreglo de char), la convierta a un n´umero entero y retorne dicho numero." << endl;
    char entrada[12];
    char snumeros[10];
    bool esNumero;
    int longitud = 0;
    char caracter  = 0;
    int salida = 0;

    for (int i = 0; i < 10; ++i) {
        snumeros[i] = '0' + i;
    }

    cout << "Ingrese una cadena de carracteres cualquiera: " << endl;
    cin.ignore();
    cin.getline(entrada, 100);

    while (entrada[longitud] != '\0') {
        esNumero = false;
        caracter = entrada[longitud];
        salida*=10;
        for (int i = 0; i < 10; i++) {
            if (caracter == snumeros[i]){
                salida += i;
                esNumero = true;
                break;
            }
        }
        if (!esNumero){
            cout << "Se detecto un caracter no valido (No se puede convertir)"<< endl;
            return;
        }
        longitud++;
    }
    cout << salida << endl;
}
