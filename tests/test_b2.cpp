#include <iostream>

#include "MatrixOp.h"

int main() {
    MatrixOp M(3, 3);

    // Inicializamos M con valores arbitrarios
    double valores[9] = {3.5, 7.2, 1.1, 42.5, 5.0, 6.6, 4.9, 0.0, -1.2};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            M.set(i, j, valores[i * 3 + j]);
        }
    }
    cout << "-------------------Matriz M------------------------" << endl;
    M.printMatrix();

    cout << "------------------------------------------------------------------"
            "---------"
         << endl;

    double maxElem = maxValue<double>(M.data(), M.size());

    std::cout << "Maximo elemento de M: " << maxElem << std::endl;

    return 0;
}
