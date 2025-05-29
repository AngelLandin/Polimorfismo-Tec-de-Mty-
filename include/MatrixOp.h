#ifndef MATRIXOP_H
#define MATRIXOP_H

class MatrixOp {
   public:
    MatrixOp(int rows, int cols);
    ~MatrixOp();

    void set(int i, int j, double v);
    double get(int i, int j) const;

    int getRows() const;
    int getCols() const;

   private:
    int rows_, cols_;
    double* data_;
};

#endif  // MATRIXOP_H
