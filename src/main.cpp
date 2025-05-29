/**
 * @file main.cpp
 * @brief Punto de entrada del programa.
 * @date YYYY-MM-DD
 */

#include <iostream>

#include "MatrixOp.h"

using namespace std;

int main() {
    cout << "Inicio del programa." << endl;
    cout << "sdsds"

        MatrixOp M(3, 3);

    // Mostrar todos los elementos de la matriz
    for (int i = 0; i < M.getRows(); ++i) {
        for (int j = 0; j < M.getCols(); ++j) {
            cout << M.get(i, j) << " ";
        }
        cout << endl;
    }

    // Mostrar el número de filas y columnas
    cout << "Numero de filas: " << M.getRows() << endl;
    cout << "Numero de columnas: " << M.getCols() << endl;

    return 0;  // Indicar que el programa terminó correctamente
}
