#include <cassert>
#include <iostream>

#include "MatrixOp.h"

using namespace std;

// Funciones auxiliares
double sub(double a, double b) { return a - b; }

double mul(double a, double b) { return a * b; }

int main() {
    // Crear matrices 2x2
    MatrixOp A(2, 2);
    MatrixOp B(2, 2);
    MatrixOp C(2, 2);  // Resultado de resta
    MatrixOp D(2, 2);  // Resultado de multiplicación

    // Inicializar A
    A.set(0, 0, 5.0);
    A.set(0, 1, 7.0);
    A.set(1, 0, 9.0);
    A.set(1, 1, 11.0);
    cout << "----------------Datos Matriz A----------------" << endl;
    A.printMatrix();

    // Inicializar B
    B.set(0, 0, 2.0);
    B.set(0, 1, 3.0);
    B.set(1, 0, 4.0);
    B.set(1, 1, 5.0);
    cout << "----------------Datos Matriz B----------------" << endl;
    B.printMatrix();

        A.apply(&A, &B, &C, sub);
    A.apply(&A, &B, &D, mul);

    // Imprimir resultados
    cout << "Matriz C = A - B:" << endl;
    C.printMatrix();

    cout << "Matriz D = A * B (elemento a elemento):" << endl;
    D.printMatrix();

    // Validar resultados con asserts
    assert(C.get(0, 0) == 3.0);  // 5 - 2
    assert(C.get(0, 1) == 4.0);  // 7 - 3
    assert(C.get(1, 0) == 5.0);  // 9 - 4
    assert(C.get(1, 1) == 6.0);  // 11 - 5

    assert(D.get(0, 0) == 10.0);  // 5 * 2
    assert(D.get(0, 1) == 21.0);  // 7 * 3
    assert(D.get(1, 0) == 36.0);  // 9 * 4
    assert(D.get(1, 1) == 55.0);  // 11 * 5

    cout << " Prueba A3 (apply con sub y mul) pasada correctamente." << endl;

    return 0;
}
