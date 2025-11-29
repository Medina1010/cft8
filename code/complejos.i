%module complejos
%{
#include "complex_number_cpp/complejos.hpp"
%}
%include "complex_number_cpp/complejos.hpp"


%extend ComplexNumber {
  char* __str__() {
    char *tmp = (char*)malloc(1024);
    sprintf(tmp, "%g %s %gi",
    $self->r,
    ($self->i > 0 ? "+" : "-"),
    abs($self->i));
    return tmp;
  }
  ComplexNumber __radd__(double num) { return *$self + num; }
  ComplexNumber __rsub__(double num) { return (*$self * -1) + num; }
  ComplexNumber __rmul__(double num) { return *$self * num; }
  ComplexNumber __rtruediv__(double num) { return ComplexNumber(num,0) / *$self; }
};
