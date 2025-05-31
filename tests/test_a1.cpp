/**
 * @file test_a1.cpp
 * @brief Prueba del constructor, destructor, set y get de MatrixOp.
 */

#include <cassert>
#include <iostream>

#include "../include/MatrixOp.h"

using namespace std;

int main() {
    // Crear matriz de 3x3
    MatrixOp mat(3, 3);

    // Comprobar dimensiones
    assert(mat.getRows() == 3);
    assert(mat.getCols() == 3);

    // Asignar algunos valores con set
    mat.set(0, 0, 1.5);
    mat.set(1, 2, 3.14);
    mat.set(2, 1, -2.7);

    // Verificar valores con get
    assert(mat.get(0, 0) == 1.5);
    assert(mat.get(1, 2) == 3.14);
    assert(mat.get(2, 1) == -2.7);

    // Verificar que los demás están en 0.0
    for (int i = 0; i < mat.getRows(); ++i) {
        for (int j = 0; j < mat.getCols(); ++j) {
            if (!((i == 0 && j == 0) || (i == 1 && j == 2) ||
                  (i == 2 && j == 1))) {
                assert(mat.get(i, j) == 0.0);
            }
        }
    }

    // Probar acceso fuera de rango (debe lanzar excepción)
    bool exceptionThrown = false;
    try {
        mat.set(3, 3, 10.0);  // fuera de rango
    } catch (const out_of_range &e) {
        exceptionThrown = true;
    }
    assert(exceptionThrown);

    exceptionThrown = false;
    try {
        mat.get(-1, 0);  // fuera de rango
    } catch (const out_of_range &e) {
        exceptionThrown = true;
    }
    assert(exceptionThrown);

    mat.printMatrix();

    cout << "Prueba A1 pasada correctamente." << endl;
    return 0;
}
