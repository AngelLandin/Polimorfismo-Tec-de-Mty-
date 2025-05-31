#ifndef MATRIXOP_H
#define MATRIXOP_H
#include <iostream>
using namespace std;

#include <stdexcept>

template <typename T>
T maxValue(const T *arr, int n) {
    if (n <= 0) throw invalid_argument("Arreglo vacío");
    T max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

/**
 * @brief Interfaz abstracta para operaciones avanzadas de matriz.
 */
class IMatrix {
   public:
    virtual ~IMatrix() = default;
    virtual double determinant() const = 0;
};

class MatrixOp : public IMatrix {
   public:
    double determinant() const override;

    MatrixOp();
    MatrixOp(int rows, int cols);
    ~MatrixOp();

    void set(int i, int j, double v);
    double get(int i, int j) const;

    int getRows() const;
    int getCols() const;

    void printMatrix();

    void add(const MatrixOp *other, MatrixOp *result) const;

    using OpFunc = double (*)(double, double);
    void apply(const MatrixOp *A, const MatrixOp *B, MatrixOp *out,
               OpFunc op) const;

    static double sumar(double a, double b);

    // Metodo para llenar los datos de la Matrix
    void fillMatrix();

    // Recorrido con puntero a miembro
    void forEachDiagonal(void (MatrixOp::*fn)(int i, int j) const) const;
    void printAt(int i, int j) const;

    // Sobrecarga de operadores
    //  Suma elemento a elemento: devuelve una nueva matriz
    MatrixOp operator+(const MatrixOp &other) const;

    // Resta elemento a elemento: devuelve una nueva matriz
    MatrixOp operator-(const MatrixOp &other) const;

    double *data();

    int size() const;

   private:
    int rows_, cols_;
    double *data_;
};

#endif  // MATRIXOP_H
