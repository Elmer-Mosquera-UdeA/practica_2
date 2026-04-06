#include <iostream>
using std::cout;
using std::endl;

// Prototipo fuera de las funciones [1]
int detectarEstrellas(int *matriz, int filas, int columnas);

void ejercicio_13(){
    int matrizGalaxia[4][5] = {0};

    int *punteroMatriz = (int*)matrizGalaxia;

    int cantidad = detectarEstrellas(punteroMatriz, 15, 20);

    cout << "El numero de estrellas encontradas es: " << cantidad << endl;
}


int detectarEstrellas(int *matriz, int filas, int columnas) {
    int contador = 0;

    for (int i = 1; i < filas - 1; i++) {
        for (int j = 1; j < columnas - 1; j++) {

            int centro = *(matriz + i * columnas + j);
            int izq    = *(matriz + i * columnas + (j - 1));
            int der    = *(matriz + i * columnas + (j + 1));
            int arriba = *(matriz + (i - 1) * columnas + j);
            int abajo  = *(matriz + (i + 1) * columnas + j);

            if ((centro + izq + der + arriba + abajo) / 5.0 > 6) {
                contador++;
            }
        }
    }
    return contador;
}
