#include <iostream>

#include "MatrixOp.h"

int main() {
    // Caso 1: matriz 2x2
    IMatrix* mat2x2 = new MatrixOp(2, 2);
    MatrixOp* m2 = dynamic_cast<MatrixOp*>(mat2x2);
    if (m2) {
        // Matriz 2x2
        // | 1  2 |
        // | 3  4 |
        m2->set(0, 0, 1);
        m2->set(0, 1, 2);
        m2->set(1, 0, 3);
        m2->set(1, 1, 4);

        std::cout << "Determinante 2x2: " << mat2x2->determinant() << std::endl;
    }

    delete mat2x2;

    // Caso 2: matriz 3x3
    IMatrix* mat3x3 = new MatrixOp(3, 3);
    MatrixOp* m3 = dynamic_cast<MatrixOp*>(mat3x3);
    if (m3) {
        // Matriz 3x3
        // | 6  1  1 |
        // | 4 -2  5 |
        // | 2  8  7 |
        m3->set(0, 0, 6);
        m3->set(0, 1, 1);
        m3->set(0, 2, 1);
        m3->set(1, 0, 4);
        m3->set(1, 1, -2);
        m3->set(1, 2, 5);
        m3->set(2, 0, 2);
        m3->set(2, 1, 8);
        m3->set(2, 2, 7);

        std::cout << "Determinante 3x3: " << mat3x3->determinant() << std::endl;
    }

    delete mat3x3;

    return 0;
}
