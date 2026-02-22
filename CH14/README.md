# Chapter 14: The Preprocessor

## Exercises

1. ex1.c

This exercise asks us to define macros for the functions: 
- cube of x
- remainder of n divided by 4 
- 1 if product of x and y is less than 100 and 0 otherwise

Below is the first iteration of the macros:

```
#define CUBE(x) (x * x * x)
#define REMAINDER(n) (n % 4)
#define PRODUCTLESSTHAN100(x, y) ((x * y) < 100)
```

It turned out that these would not work if the parameters had multiple operands e.g. CUBE(x + y) would become x + y * x + y * x + y which equals x + 2xy + y rather than (x + y)^3

The solution to this is to wrap all the parameters in brackets as shown below:

```
#define CUBE(x) ((x) * (x) * (x))
#define REMAINDER(n) ((n) % 4)
#define PRODUCTLESSTHAN100(x, y) (((x) * (y)) < 100)
```

2. ex2.c

Here we have to write a macro, NELEMS(a), that computes the number of elements in a 1d array. This is pretty simple using the sizeof operator as below:

```
#define NELEMS(a) (sizeof(a) / sizeof(a[0]))
```

3. ex3.c

`#define DOUBLE(x) 2*x`

Given the above, we've been asked:

- a) What is the value of DOUBLE(1+2)
- b) what is the value of 4/DOUBLE(2)?
- c) to fix the definition

`DOUBLE(1+2)` will be `2*1+2` = 4 when we would expect 6

`4/DOUBLE(2)` will be `4/2*2` = 4 when we would expect 1

To fix this we need to update the definition to include brackets as below:

`#define DOUBLE(x) (2*(x))`

4. ex4.c 

a) 

7.

a) The expansion of GENERIC_MAX(long) is:

`long long_max(long x, long y) { return x > y ? x : y; }`

b) It wouldn't work for unsigned longs because of the space between unsigned and long

c) The fix for this is to create a typedef for unsigned long:

`ULONG ULONG_max(ULONG x, ULONG y) { return x > y ? x : y; }`
