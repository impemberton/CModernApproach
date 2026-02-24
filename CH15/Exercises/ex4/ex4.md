# CH15 Exercise 4

a) Output when executed normally:
```
Output if DEBUG is defined:
Value of i: 1
Value of j: 2
Value of k: 3
Value of i + j: 3
Value of 2 * i + j - k: 1
```

b) Output if `#define DEBUG` is removed:
```
Output if DEBUG is not defined:
```

c) The reason the outputs are different is because `DEBUG` is undefined then the if statement in
   the header file is which contains the definition of `PRINT_DEBUG` is not triggered.

d) It is necessary for the `DEBUG` macro to be defined before the header otherwise the if statement
   in the header will not be triggered.
