#include "complejos.hpp"

#include <math.h>

ComplexNumber::ComplexNumber(double p_r, double p_i): r(p_r), i(p_i) {}
ComplexNumber ComplexNumber::conjugate() {
  return ComplexNumber(r, -i);
}
double ComplexNumber::modulus_sq(){
  return r * r + i * i;
}
double ComplexNumber::modulus(){
  return sqrt(modulus_sq());
}
ComplexNumber ComplexNumber::operator +(ComplexNumber num) {
  return ComplexNumber(
      r + num.r,
      i + num.i
      );
}
ComplexNumber ComplexNumber::operator -(ComplexNumber num) {
  return ComplexNumber(
      r - num.r,
      i - num.i
      );
}
ComplexNumber ComplexNumber::operator *(ComplexNumber num) {
  return ComplexNumber(
      r * num.r - i * num.i,
      i * num.r + r * num.i
      );
}
ComplexNumber ComplexNumber::operator /(ComplexNumber num) {
  return ComplexNumber(r, i) * num.conjugate() / num.modulus_sq();
}
ComplexNumber ComplexNumber::operator +(double num) {
  return ComplexNumber(
      r + num,
      i 
      );
}
ComplexNumber ComplexNumber::operator -(double num) {
  return ComplexNumber(
      r - num,
      i
      );
}
ComplexNumber ComplexNumber::operator *(double num) {
  return ComplexNumber(
      r * num,
      i * num
      );
}
ComplexNumber ComplexNumber::operator /(double num)  {
  return ComplexNumber(
      r / num,
      i / num
      );
}
/*
inline ComplexNumber operator +(double num, ComplexNumber complex_num){
  return complex_num + num;
}
inline ComplexNumber operator -(double num, ComplexNumber complex_num){
  return (complex_num * -1.0) + num;
}
inline ComplexNumber operator *(double num, ComplexNumber complex_num){
  return complex_num * num;
}
inline ComplexNumber operator /(double num, ComplexNumber complex_num){
  return ComplexNumber(num, 0) / complex_num;
}*/
