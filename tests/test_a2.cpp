#include <cassert>
#include <iostream>

#include "MatrixOp.h"
using namespace std;

int main() {
    // Crear matrices A y B de 2x2
    MatrixOp A(2, 2);
    MatrixOp B(2, 2);
    MatrixOp C(2, 2);  // Resultado

    // Asignar valores a A
    A.set(0, 0, 1.0);
    A.set(0, 1, 2.0);
    A.set(1, 0, 3.0);
    A.set(1, 1, 4.0);

    // Asignar valores a B
    B.set(0, 0, 5.0);
    B.set(0, 1, 6.0);
    B.set(1, 0, 7.0);
    B.set(1, 1, 8.0);

    cout << "Matriz A: " << endl;
    A.printMatrix();

    cout << "Matriz A: " << endl;
    B.printMatrix();

    // Realizar suma A + B = C
    A.add(&B, &C);

    // Comprobar valores esperados en C
    assert(C.get(0, 0) == 6.0);
    assert(C.get(0, 1) == 8.0);
    assert(C.get(1, 0) == 10.0);
    assert(C.get(1, 1) == 12.0);

    // Imprimir para verificación manual
    cout << "Matriz C = A + B:" << endl;
    C.printMatrix();

    cout << " Prueba A2 pasada correctamente." << endl;
    return 0;
}
