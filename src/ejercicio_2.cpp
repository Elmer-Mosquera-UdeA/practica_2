#include <iostream>
#include "../include/enlace.h"
#include <cstdlib>
#include <ctime>

using namespace std;

void ejercicio_2() {
    srand(time(0));
    const int TAM = 200;
    char letras[TAM];
    int conteo[26] = {0};

    cout << "Generando 200 letras aleatorias..." << endl;

    for (int i = 0; i < TAM; i++) {
        letras[i] = 'A' + (rand() % 26);
        cout << letras[i];

        // Lógica de conteo
        conteo[letras[i] - 'A']++;
    }

    cout << "\n\nResultados de conteo:" << endl;
    for (int i = 0; i < 26; i++) {
        if (conteo[i] > 0) {
            cout << (char)('A' + i) << ": " << conteo[i] << endl;
        }
    }
}
