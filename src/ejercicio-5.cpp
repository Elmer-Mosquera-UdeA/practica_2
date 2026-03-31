#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void convertirIntToString(char* cadena, int numero);

void ejercicio_5(){
    int numero;
    char cadena[10];

    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "El numero ingresado es: " << numero << endl;

    convertirIntToString(cadena, numero);
    cout << "El numero ingresado como cadena es: " << cadena << endl;
}

void convertirIntToString(char* cadena, int numero){
    int cpNumero = numero;
    int invertido = 0;
    int i = 0;
    while (cpNumero > 0) {
        invertido = invertido * 10 + cpNumero % 10;
        cpNumero /= 10;
    }
    while (invertido > 0) {
        cadena[i++] = invertido % 10 + '0';
        invertido /= 10;
    }
    cadena[i] = '\0';
}
