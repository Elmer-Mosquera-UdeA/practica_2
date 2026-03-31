#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
    Escribir un programa que reciba un numero n y una cadena de caracteres num´ericos; el programa
    debe separar la cadena de caracteres en grupos de n cifras, sumarlos e imprimir el resultado. En
    caso de no poder dividirse exactamente en grupos de n cifras, se debe rellenar con ceros a la
    izquierda del primer numero.
    Por ejemplo, si N = 3 y se lee el arreglo 87512395, la suma ser´ıa 087+512+395=994. La salida del
    programa debe ser: 994
 */

void ejercicio_9(){
    char entrada[12];
    char fixEntrada[12];
    int charForGroup = 0;
    int suma = 0;

    cout << "Ingrese la cadena de caracteres numericos: ";
    cin.ignore(1000, '\n');
    cin.getline(entrada, 12);

    cout << "Ingrese el numero de cifras por grupo: ";
    cin >> charForGroup;


    int longitud = 0;
    while (entrada[longitud] != '\0') {
        longitud++;
    }

    int dCorrecion = 0;
    //int canGrupos = longitud/charForGroup;

    if(longitud%charForGroup != 0){
        dCorrecion = charForGroup-(longitud%charForGroup);
        //canGrupos = (longitud/charForGroup)+(longitud%charForGroup);
        for (int i = 0; i <= (dCorrecion-1); i++) {
            fixEntrada[i] = '0';
        }
        for (int i = 0; i <= (longitud+dCorrecion); i++) {
            fixEntrada[(i+dCorrecion)] = entrada[i];
        }
    } else {
        for (int i = 0; i <= longitud; i++) {
            fixEntrada[i] = entrada[i];
        }
    }

    for (int i = 0; i <= (longitud+dCorrecion-1); i += charForGroup) {
        int grupo = 0;
        for (int j = 0; j < charForGroup; j++) {
            grupo = grupo * 10 + (fixEntrada[i+j] - '0');
        }
        //cout << "Grupo " << i/charForGroup+1 << ": " << grupo << endl;
        suma += grupo;
    }


    cout << "Original: " << fixEntrada << endl;
    cout << "Suma: " << suma << endl;
}
