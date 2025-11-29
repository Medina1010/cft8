#pragma once

class ComplexNumber {
  public:
    double r, i;
    ComplexNumber(double p_r, double p_i);
    ComplexNumber conjugate();
    double modulus_sq();
    double modulus();
    ComplexNumber operator + (ComplexNumber num);
    ComplexNumber operator - (ComplexNumber num);
    ComplexNumber operator * (ComplexNumber num);
    ComplexNumber operator / (ComplexNumber num);
    ComplexNumber operator + (double num);
    ComplexNumber operator - (double num);
    ComplexNumber operator * (double num);
    ComplexNumber operator / (double num);
    /*friend ComplexNumber operator + (double num, ComplexNumber complex_num);
    friend ComplexNumber operator - (double num, ComplexNumber complex_num);
    friend ComplexNumber operator * (double num, ComplexNumber complex_num);
    friend ComplexNumber operator / (double num, ComplexNumber complex_num);*/
};
