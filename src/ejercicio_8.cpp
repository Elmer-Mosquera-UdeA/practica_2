#include <iostream>

using std::cout;
using std::endl;
using std::cin;


void ejercicio_8(){
    char entrada[50];
    int longitud = 0;

    int i_n = 0; // Índice para el arreglo de números
    int i_t = 0; // Índice para el arreglo de texto
    char numeros[50]; // Arreglo para guardar números
    char texto[50];   // Arreglo para guardar letras


    cout << "Ingrese una cadena de caracteres : " << endl;
    //cin.ignore();
    cin.getline(entrada, 50);

    while (entrada[longitud] != '\0') {
        char caracter = entrada[longitud];

        if (caracter >= '0' && caracter <= '9') {
            numeros[i_n] = caracter;
            i_n++;
        } else {
            texto[i_t] = caracter;
            i_t++;
        }
        longitud++;
    }

    numeros[i_n] = '\0';
    texto[i_t] = '\0';

    cout << "Original: " << entrada << "." << endl;
    cout << "Texto: " << texto << ". ";
    cout << "Numero: " << numeros << "." << endl;
}


