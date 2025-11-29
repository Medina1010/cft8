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
#include "complejos.hpp" // Including the header file
...
```
Create a number and operate
``` c++
...
ComplexNumber z(3, 4); // Init complex number class with 3 as the real part and 4 as the imaginary part

// Some operations

ComplexNumber a = z * 5, b = z.conjugate();
double m = z.modulus();
ComplexNumber c = m / z, d = a * b, e = 8 - d;
```

and add _complejos.cpp_ to your source files at compiling.

## for python
Import complejos.py at your code
``` python
from complejos import ComplexNumber as CN # Including the module
...
```
Create a number and operate
``` python
...
z = CN(3, 4) # Init complex number class with 3 as the real part and 4 as the imaginary part

# Some operations

a = z * 5, b = z.conjugate();
m = z.modulus();
c = m / z, d = a * b, e = 8 - d;

# Print directly with print(...)

print("z:", z, ", a", a, ", b", b, ", c", c, ", d", d, ", m", m)
```

# Build python module

to build just run:
''' sh
make
'''
