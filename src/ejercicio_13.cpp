#include <iostream>
using std::cout;
using std::endl;

// Prototipo fuera de las funciones [1]
int detectarEstrellas(int *matriz, int filas, int columnas);
void mostrarMatriz(int *matriz, int filas, int columnas, int elementoI, int elementoJ, bool verComoTexto);

void ejercicio_13(){


    int matrizGalaxia[6][8] = { {0,3,4,0,0,0,6,8},
                               {5,13,6,0,0,0,2,3},
                               {2,6,2,7,3,0,10,0},
                               {0,0,4,15,4,1,6,0},
                               {0,0,7,12,6,9,10,4},
                               {5,0,6,10,6,4,8,0} };


    int *punteroMatriz = (int*)matrizGalaxia;

    // mostrar matriz sin el centro marcado
    mostrarMatriz(punteroMatriz, 6, 8, -1, -1, false);

    int cantidad = detectarEstrellas(punteroMatriz, 6, 8);

    cout << "El numero de estrellas encontradas es: " << cantidad << endl;
}


int detectarEstrellas(int *matriz, int filas, int columnas) {
    int contador = 0;

    cout << endl;
    for (int i = 1; i < filas - 1; i++) {
        for (int j = 1; j < columnas - 1; j++) {
            int centro = *(matriz + i * columnas + j);
            int izq    = *(matriz + i * columnas + (j - 1));
            int der    = *(matriz + i * columnas + (j + 1));
            int arriba = *(matriz + (i - 1) * columnas + j);
            int abajo  = *(matriz + (i + 1) * columnas + j);

            if ((centro + izq + der + arriba + abajo) / 5.0 > 6) {
                contador++;
                cout << "\n\nEstrella encontrada en las coordenadas ";
                cout << "(" << (i+1) << ", " << (j+1) << ")" << endl;
                mostrarMatriz(matriz, 6, 8, i, j, true);
            }
        }
        cout << endl;
    }
    return contador;
}

// mostrar matriz con bucle doble con coordenadas
void mostrarMatriz(int *matriz, int filas, int columnas, int elementoI, int elementoJ, bool verComoTexto) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            int valor = *(matriz + i * columnas + j);
            if (elementoI == i && elementoJ == j && verComoTexto == true) {
                // Mostrar el elemento encontrado de forma explícita (no como caracter)
                cout << "[" << valor << "] ";
            } else {
                cout << valor << " ";
            }
        }
        cout << endl;
    }
}

