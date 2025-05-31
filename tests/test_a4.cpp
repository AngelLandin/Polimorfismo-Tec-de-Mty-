// test_a4.cpp
#include <iostream>

#include "MatrixOp.h"

int main() {
    // Crear matriz 3x3
    MatrixOp M(3, 3);

    // Asignar valores a la matriz
    M.set(0, 0, 1.0);
    M.set(0, 1, 2.0);
    M.set(0, 2, 3.0);

    M.set(1, 0, 4.0);
    M.set(1, 1, 5.0);
    M.set(1, 2, 6.0);

    M.set(2, 0, 7.0);
    M.set(2, 1, 8.0);
    M.set(2, 2, 9.0);

    std::cout << "Matriz completa:" << std::endl;
    M.printMatrix();

    std::cout
        << "Diagonal principal (usando forEachDiagonal con puntero a miembro):"
        << std::endl;
    M.forEachDiagonal(&MatrixOp::printAt);  // Esto imprimirá: 1 5 9

    return 0;
}
