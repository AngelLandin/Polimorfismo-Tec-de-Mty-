// test_b1.cpp
#include <iostream>

#include "MatrixOp.h"

int main() {
    // Crear dos matrices 2x2
    MatrixOp A(2, 2);
    MatrixOp B(2, 2);

    // Inicializar matriz A
    A.set(0, 0, 1.0);
    A.set(0, 1, 2.0);
    A.set(1, 0, 3.0);
    A.set(1, 1, 4.0);

    // Inicializar matriz B
    B.set(0, 0, 2.0);
    B.set(0, 1, 1.0);
    B.set(1, 0, 0.0);
    B.set(1, 1, 5.0);

    cout << "--------------------------Matriz A: ----------------------------"
         << endl;
    A.printMatrix();

    cout << "--------------------------Matriz B: ----------------------------"
         << endl;
    B.printMatrix();

    // Suma de matrices
    MatrixOp C = A + B;

    // Resta de matrices
    MatrixOp D = A - B;

    // Mostrar resultados
    std::cout << "Matriz C = A + B:" << std::endl;
    C.printMatrix();

    std::cout << "Matriz D = A - B:" << std::endl;
    D.printMatrix();

    // Mostrar valores puntuales solicitados
    std::cout << "C[0,0] = " << C.get(0, 0) << std::endl;  // Esperado 3.0
    std::cout << "D[1,1] = " << D.get(1, 1) << std::endl;  // Esperado -1.0

    return 0;
}
