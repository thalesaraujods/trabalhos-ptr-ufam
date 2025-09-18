#ifndef MATRIX_H
#define MATRIX_H

// - DEFINICAO: MATRIZ
typedef struct {
    int rows;
    int cols;
    double** data;
} Matrix;

// - OPERACOES MATRIZ: CRIAR, DESTRUIR, IMPRIMIR
Matrix* create_matrix(int rows, int cols);
void destroy_matrix(Matrix** mat);
void print_matrix(Matrix* m);

// - OPERACOES ENTRE MATRIZES: SOMAR, SUBTRAIR, MULTIPLICAR
Matrix* add_matrix(const Matrix* a, const Matrix* b);
Matrix* sub_matrix(const Matrix* a, const Matrix* b);
Matrix* mul_matrix(const Matrix* a, const Matrix* b);

// - OPERACOES COM ESCALAR: SOMAR, SUBTRAIR, MULTIPLICAR
Matrix* add_scalar_matrix(const Matrix* a, double scalar);
Matrix* sub_scalar_matrix(const Matrix* a, double scalar);
Matrix* mul_scalar_matrix(const Matrix* a, double scalar);

// - OPERACAO: MATRIZ TRANSPOSTA
Matrix* transpose_matrix(const Matrix* a);

// - OPERACAO: DETERMINANTE
double determinant_matrix(const Matrix* a);

// - OPERACAO: INVERSA
Matrix* inverse_matrix(const Matrix* a);

#endif 