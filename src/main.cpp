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

    /*
    MatrixOp M(3, 3);
    MatrixOp* A = new MatrixOp(3, 3);
    MatrixOp* F = new MatrixOp(3, 3);
    MatrixOp* out = new MatrixOp(3, 3);

    cout << "--------------Llenando la primera Matriz-------------------"
         << endl;
    A->fillMatrix();

    cout << "--------------Llenando la segunda Matriz-------------------"
         << endl;
    F->fillMatrix();

    MatrixOp handler;

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

    cout << "---------------------Comprobacion funcion apply que hace suma de "
            "matrices------------------"
         << endl;

    handler.apply(A, F, out, MatrixOp::sumar);

    for (int i = 0; i < out->getRows(); ++i) {
        for (int j = 0; j < out->getCols(); ++j) {
            cout << out->get(i, j) << " ";
        }
        cout << endl;
    }

    // Metodo que me imprime la diagonal principal
    cout << "-----------------------------Diagonal "
            "principal--------------------------"
         << endl;
    out->forEachDiagonal(&MatrixOp::printAt);

    cout << "----------------------------------------Sobrecarga de "
            "operadores---------------------------"
         << endl;
    // Sobrecarga de operadores
    MatrixOp sumaMatricial = *A + *F;
    sumaMatricial.printMatrix();

    cout << "----------------------------------------Sobrecarga de "
            "operadores resta---------------------------"
         << endl;
    MatrixOp restaMatricial = *A - *F;
    restaMatricial.printMatrix();

    */

    cout << "----------------------------------Función plantilla "
            "genérica---------------------------------------"
         << endl;

    // … inicializar M con valores diversos …
    /*
    MatrixOp M(3, 3);
    M.fillMatrix();

    M.printMatrix();

    double maxElem = maxValue<double>(M.data(), M.size());
    std::cout << "Máximo elemento de M: " << maxElem << "\n";
*/
    IMatrix* mat = new MatrixOp(3, 3);

    // Hacer cast para usar métodos de MatrixOp
    MatrixOp* mop = dynamic_cast<MatrixOp*>(mat);
    if (mop) {
        mop->fillMatrix();  // ahora sí puedes usar el método
        std::cout << "Determinante: " << mat->determinant() << "\n";
    } else {
        std::cerr << "Error: dynamic_cast falló\n";
    }

    delete mat;
    return 0;
}
