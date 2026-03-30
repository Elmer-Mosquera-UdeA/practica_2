#include <iostream>

using std::cout;
using std::endl;
using std::cin;


void ejercicio_10(){
    char entrada[16] = {0};
    const char LETRASROMANAS[7] = {'M','D','C','L','X','V','I'};
    const int NUMEROSEQUIVALENTE[7] = {1000,500,100,50,10,5,1};
    int cantidad[7] = {0};
    int salida = 0;

    cout << "Ingrese una cadena de carracteres cualquiera: " << endl;
    cin.ignore(1000, '\n');
    cin.getline(entrada, 16);


    int indice = -1;

    for (int i = 0; i < 16 && entrada[i] != '\0'; i++) {
        char aCaracter = 0;
        char sCaracter = 0;
        char ssCaracter = 0;
        char sssCaracter = 0;
        if (entrada[i]!=LETRASROMANAS[0] &&
            entrada[i]!=LETRASROMANAS[1] &&
            entrada[i]!=LETRASROMANAS[2] &&
            entrada[i]!=LETRASROMANAS[3] &&
            entrada[i]!=LETRASROMANAS[4] &&
            entrada[i]!=LETRASROMANAS[5] &&
            entrada[i]!=LETRASROMANAS[6] ) {
            cout << "La entrada es invalida" << endl;
            return;
        } else {
            aCaracter = entrada[i];
            sCaracter = (i + 1 <= 15 && entrada[i+1] != 0) ? entrada[i+1] : 0;
            ssCaracter = (i + 2 <= 15 && entrada[i+2] != 0) ? entrada[i+2] : 0;
            sssCaracter = (i + 3 <= 15 && entrada[i+3] != 0) ? entrada[i+3] : 0;
            if (aCaracter==LETRASROMANAS[0]) indice = 0;
            else if (aCaracter==LETRASROMANAS[1]) indice = 1;
            else if (aCaracter==LETRASROMANAS[2]) indice = 2;
            else if (aCaracter==LETRASROMANAS[3]) indice = 3;
            else if (aCaracter==LETRASROMANAS[4]) indice = 4;
            else if (aCaracter==LETRASROMANAS[5]) indice = 5;
            else if (aCaracter==LETRASROMANAS[6]) indice = 6;
            cantidad[indice]++;
        }
        if ((aCaracter == 'D' || aCaracter == 'L' || aCaracter == 'V') && cantidad[indice] > 1) {
            cout << "El numero Romano >" << aCaracter << "< no puede repetirce mas de 1 veces";
            return;
        }
        if (sssCaracter != 0 && aCaracter == sCaracter && aCaracter == ssCaracter && aCaracter == sssCaracter) {
            cout << "Ningun numero Romano puede repetirce mas de 3 veces segidas";
            return;
        }
        else if (sCaracter != 0) {
            if ( ((aCaracter == 'D' || aCaracter == 'L' || aCaracter == 'V') && sCaracter == LETRASROMANAS[indice-1]) ||
                ( (aCaracter == 'I' || aCaracter == 'X') && (sCaracter == LETRASROMANAS[indice-3] || sCaracter == LETRASROMANAS[indice-4]) ) || (aCaracter == 'I' && (sCaracter == 'M' || sCaracter == 'D')) ) {
                cout << "Despues del numero Romano >" << aCaracter << "< no puede estar el numero Romano " << sCaracter << endl;
                return;
            }
        }
        if (ssCaracter != 0) {
            if ( (aCaracter==ssCaracter && (aCaracter == 'M' || aCaracter == 'C' || aCaracter == 'X') && ( (aCaracter!=sCaracter) && (sCaracter != LETRASROMANAS[indice+2]) ) ) ||
                (aCaracter==ssCaracter && (aCaracter == 'I') && ( (aCaracter!=sCaracter) && (sCaracter) ) ) ) {
                cout << "Entre los numeros Romanos >" << aCaracter << "< no puede estar el numero Romano " << sCaracter << endl;
                return;
            }
            else if ( ( (aCaracter == sCaracter) && (aCaracter== 'I' || aCaracter== 'X' || aCaracter== 'C') && (ssCaracter == LETRASROMANAS[indice-1] || ssCaracter == LETRASROMANAS[indice-2]) ) ) {
                cout << "Despues de numero Romano >" << aCaracter << aCaracter << "< no puede estar el numero Romano " << sCaracter << endl;
                return;
            }
        }


        if ( (aCaracter == 'I' || aCaracter == 'X' || aCaracter == 'C') && (aCaracter != sCaracter && (sCaracter == LETRASROMANAS[indice-1] || sCaracter == LETRASROMANAS[indice-2])) ) {
            salida-=NUMEROSEQUIVALENTE[indice];
        } else {
            salida+=NUMEROSEQUIVALENTE[indice];
        }

    }

    cout << salida << endl;
}