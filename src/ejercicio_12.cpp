#include <iostream>
#include <cstdlib> // system("cls")

using std::cout;
using std::cin;
using std::endl;

/*
    Un cuadrado magico es una matriz de numeros enteros no repetidos, en la que la suma de los
    numeros en cada columna, cada fila y cada diagonal principal tiene el mismo resultado. Escriba
    un programa que permita al usuario ingresar una matriz cuadrada, imprima la matriz y verifique
    si la matriz es un cuadrado magico. Un ejemplo de cuadrado magico es el siguiente:
 */

void imprimirMatriz(int*, int, bool, int);

void ejercicio_12() {
    int n;
    cout << "La matriz cuadrada tendra de NxN, ingrese N: ";
    cin >> n;


    int* matriz = new int[n * n];

    for (int i = 0; i < (n * n); ++i) {
        matriz[i] = 0;
    }

    for (int i = 0; i < (n * n); ++i) {
        matriz[i] = 'X';
        imprimirMatriz(matriz, n, true, i);
        cout << "Ingrese el valor en para posicion indicada con X: ";
        cin >> matriz[i];
        system("cls");
        // Verificar de una vez si se ingreso un elemento que ya se ingreso antes
        for (int j = 0; j < i; ++j) {
            if (matriz[j] == matriz[i]){
                imprimirMatriz(matriz, n, false, 0);
                cout << "\nEl valor actual ya se habia ingresado por lo tanto\nindistinamente de lo que pretenda ingresar\nno puede ser un cuadrado magico\n";
                return;
            }
        }
    }
    imprimirMatriz(matriz, n, false, 0);

    delete[] matriz;
}

void imprimirMatriz(int* matriz, int n, bool verChar = false, int index = 0) {
    for (int i = 0; i < (n * n); ++i) {
        if (verChar && index == i){
            cout << (char)matriz[i] << " ";
        } else {
            cout << matriz[i] << " ";
        }
        if ((i + 1) % n == 0) {
            cout << endl;
        }
    }
}
