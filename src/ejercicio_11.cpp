#include <iostream>
#include <cstdlib> // system("cls")

using std::cout;
using std::cin;
using std::endl;

void reservarAsiento(char tableroAsientos[], char fila, int numero);
void mostrarTablero(char tableroAsientos[]);
void introducirAsiento(char& fila, int& numero);

void ejercicio_11() {
    char tableroAsientos[16*21];
    char fila = 0;
    int numero = 0;


    // inicializar el tablero
    for (int i = 0; i < 16*21; i++) {
        if (i == 0) {
            tableroAsientos[i] = ' ';
        }
        else if (i < 21 && i >= 1) {
            tableroAsientos[i] = i;
        }
        // letra cada inicio de fila
        else if (i % 21 == 0) {
            tableroAsientos[i] = '@' + (i / 21);
        }
        else {
            tableroAsientos[i] = '-';
        }
    }

    // mostrar el tablero
    mostrarTablero(tableroAsientos);

    introducirAsiento(fila, numero);
    reservarAsiento(tableroAsientos, fila, numero);

    // Limpiar la pantalla
    system("cls");

    cout << "Asiento " << fila << numero << " reservado." << endl;
    mostrarTablero(tableroAsientos);
}

// Funcion para introducir asiento
void introducirAsiento(char& fila, int& numero) {
    // verificar que la fila esté entre A y O y el número entre 1 y 20
    do {
        cout << "Introduzca la fila y el numero de asiento (ej. A11): ";
        cin >> fila >> numero;
        if (fila < 'A' || fila > 'O' || numero < 1 || numero > 20) {
            cout << "Fila o nUmero fuera de rango. Intente de nuevo." << endl;
        }
    } while (fila < 'A' || fila > 'O' || numero < 1 || numero > 20);
}

// Funcion para motrar tablero de asientos
void mostrarTablero(char tableroAsientos[]) {
    for (int i = 0; i < 16*21; i++) {
        if (i == 0) {
            cout << tableroAsientos[i] << " ";
        }
        else if (i < 21 && i >= 1) {
            // Iterpretar como numero al mostrar
            cout << (int)tableroAsientos[i] << " ";
        }
        else if (i % 21 >= 10) {
            cout << tableroAsientos[i] << "  ";
        }
        else {
            cout << tableroAsientos[i] << " ";
        }
        if (i % 21 == 20) {
            cout << endl;
        }
    }
}

//  FUncion para reservar asiento
void reservarAsiento(char tableroAsientos[], char fila, int numero) {
    int indice = (fila - '@') * 21 + numero;
    // if (tableroAsientos[indice] == '+') {
    //     cout << "El asiento ya esta reservado." << endl;
    //     return;
    // }
    tableroAsientos[indice] = '+';
}
