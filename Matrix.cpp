#include <iostream>
#include <vector>
#include "Matrix.hpp"
#include <sstream>
#include <fstream>

using namespace std;
namespace zich{

    Matrix::Matrix(vector<double> &mat, size_t rows, size_t cols){}

    Matrix::Matrix(size_t rows, size_t cols){}

    Matrix::Matrix(const Matrix &mat){}

    Matrix::~Matrix(){}

    Matrix Matrix::operator++(){return *this;}

    Matrix Matrix::operator++(int){return *this;}

    Matrix Matrix::operator--(int){return *this;}

    Matrix Matrix::operator--(){return *this;}

    bool sameSize(const Matrix &mat1, const Matrix &mat2){return true;}

    Matrix operator+(const Matrix &mat1, const Matrix &mat2){return mat1;}

    Matrix operator-(const Matrix &mat1, const Matrix &mat2){return mat1;}

    Matrix Matrix::operator+=(Matrix &mat){return mat;}

    Matrix operator+=(Matrix &mat, const int scalar){return mat;}

    Matrix operator-=(Matrix &mat, const int scalar){return mat;}

    Matrix Matrix::operator-=(Matrix &mat){return *this;}

    Matrix operator*=(Matrix &mat, const int scalar){return mat;}

    bool operator==(const Matrix &mat1, const Matrix &mat2){return true;}

    bool operator!=(const Matrix &mat1, const Matrix &mat2){return true;}

    bool operator>(const Matrix &mat1, const Matrix &mat2){return true;}

    bool operator>=(const Matrix &mat1, const Matrix &mat2){return true;}

    bool operator<(const Matrix &mat1, const Matrix &mat2){return true;}

    bool operator<=(const Matrix &mat1, const Matrix &mat2){return true;}

    Matrix operator*(const Matrix &mat1, const Matrix &mat2){return mat1;}

    Matrix operator*(const double scalar, const Matrix &mat){return mat;}

    Matrix operator*(const Matrix &mat, const double scalar){return mat;}

    Matrix operator+(const Matrix &mat){return mat;}

    Matrix operator-(const Matrix &mat){return mat;}

    istream& operator>>(istream &in, const Matrix &mat){return in;}

    ostream& operator<<(ostream &out, const Matrix &mat){return out;}
}