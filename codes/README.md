# Complejos
It is a simple c++ implementation of complex number and basic operations with them.
- adding
- substracting
- multiplication
- division
And some others known.
- modulus
- modulus_sq
- conjugate
# Usage
## for c++
Include complejos.hpp at your code
``` c++
#include "complejos.hpp"
...
```
Create a number and operate
``` c++
...
ComplexNumber z(3, 4);

ComplexNumber a = z * 5, b = z.conjugate();
double m = z.modulus();
ComplexNumber c = m / z, d = a * b, e = 8 - d;
```
## for python
Import complejos.py at your code
``` c++
from complejos import ComplexNumber as CN
...
```
Create a number and operate
``` c++
...
z = CN(3, 4)

a = z * 5, b = z.conjugate();
m = z.modulus();
c = m / z, d = a * b, e = 8 - d;

print("z:", z, ", a", a, ", b", b, ", c", c, ", d", d, ", m", m)
```
#
