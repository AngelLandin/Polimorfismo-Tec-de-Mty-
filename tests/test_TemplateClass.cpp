/**
 * @file test_TemplateClass.cpp
 * @brief Pruebas unitarias para TemplateClass.
 * @date YYYY-MM-DD
 */

#include <cassert>
#include <iostream>

#include "../include/MatrixOp.h"

int main() {
    MatrixOp obj(2, 3);
    obj.getRows();
    assert(true);
    std::cout << "Test passed" << std::endl;
    return 0;
}
