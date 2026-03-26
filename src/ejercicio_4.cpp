#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void ejercicio_4(){
    cout << "Un programa que reciba una cadena de caracteres numericos (arreglo de char), la convierta a un n´umero entero y retorne dicho numero." << endl;
    char entrada[12];
    int longitud = 0;
    char actual = 0;
    int salida = 0;

    cout << "Ingrese una cadena de carracteres cualquiera: " << endl;
    cin.getline(entrada, 100);

    while (entrada[longitud] != '\0') {
        bool esNumero = true;
        salida*=10;
        if (entrada[longitud] == '0'){
            salida+= 0;
        }
        else if (entrada[longitud] == '1'){
            salida+= 1;
        }
        else if (entrada[longitud] == '2'){
            salida+= 2;
        }
        else if (entrada[longitud] == '3'){
            salida+= 3;
        }
        else if (entrada[longitud] == '4'){
            salida+= 4;
        }
        else if (entrada[longitud] == '5'){
            salida+= 5;
        }
        else if (entrada[longitud] == '6'){
            salida+= 6;
        }
        else if (entrada[longitud] == '7'){
            salida+= 7;
        }
        else if (entrada[longitud] == '8'){
            salida+= 8;
        }
        else if (entrada[longitud] == '9'){
            salida+= 9;
        }
        else {
            esNumero = false;
        }
        if (!esNumero){
            cout << "Se detecto un caracter no valido (No se puede convertir)"<< endl;
            return;
        }
        longitud++;
    }
    cout << salida << endl;
}
