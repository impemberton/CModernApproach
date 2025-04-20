# Chapter 4: Expressions
This chapter covers expressions and introduces arithmetic operators.
## Exercises:

### 1. Program Fragments

### (a) 
```
    i = 5; j = 3;
    printf("%d %d", i / j, i % j);
```
**My Guess:** `1 2`

**Actual Output:** `1 2` 

### (b) 
```
    i = 2; j = 3;
    printf("%d", (i + 10) % j);
```
**My Guess:** `0`

**Actual Output:** `0` 

### (c) 
```
    i = 7; j = 8; k = 9;
    printf("%d", (i + 10) % k / j);
```
This depends whether the % or / takes priority. If / takes priority k / j = 9 / 8 which will be 1. Anything % 1 = 0.

**My Guess:** `0` 

**Actual Output:** `1` 

Looks like the % actually took precedence because it's on the left so the expression became (17 % 9) / 8 = 8 / 8 = 1

### (d) 
```
    i = 1; j = 2; k = 3;
    printf("%d", (i + 5) % (j + 2) / k);
```
**My Guess:** `0`

**Actual Output:** `0` 

### 2. (-i)/j ≡ -(i/j)?

Wrote a quick and dirty program to test this with values of i and j right up to 1000 and the expressions were the same each time so I will agree that (-i)/j ≡ -(i/j)

### 3. C89 / expressions

### (a) 8 / 5
**My Guess:** `1`
### (a) -8 / 5
**My Guess:** `-1`
### (a) 8 / -5
**My Guess:** `-1`
### (a) -8 / -5
**My Guess:** `1`
Answers were all as expected

### 4. C99 / expressions

### (a) 8 / 5
**My Guess:** `1`
### (a) -8 / 5
**My Guess:** `-1`
### (a) 8 / -5
**My Guess:** `-1`
### (a) -8 / -5
**My Guess:** `1`
Answers were all as expected so c89 and c99 both work the same with negative integer division

### 5. C89  % expressions

### (a) 8 % 5
**My Guess:** `3`
### (a) -8 % 5
**My Guess:** `-3`
### (a) 8 % -5
**My Guess:** `-3`
**Actual Output:** `3`
### (a) -8 % -5
**My Guess:** `3`
**Actual Output** `-3`

### 6. C99  % expressions

### (a) 8 % 5
**My Guess:** `3`
### (a) -8 % 5
**My Guess:** `-3`
### (a) 8 % -5
**My Guess:** `-3`
**Actual Output:** `3`
### (a) -8 % -5
**My Guess:** `3`
**Actual Output:** `-3`

the last two I got the wrong way around but no difference again between C89 and C99.

### 7. UPC algorithm change

Changing the code to compute the remainder when the total is divided by ten and subtracting that remainder from 10 won't work because when the remainder is 0 the check digit will be 10 which is more than one digit.

### 8. UPC algorithm change 2

The upc.c program would still work if the expression `9 - ((total - 1) % 10)` were
replaced by `(10 - (total % 10)) % 10` e.g. total = 56
```
9-((56-1)%10)
9-(55 % 10)
9 - 5
4
```
```
(10-(56%10)) % 10
(10-6) % 10
4 % 10
4
```
### 9. Program Fragments 2

### (a) 
```
    i = 7; j = 8;
    i *= j + 1;
    printf("%d %d", i, j);
```
**My Guess:** `63 8`

I was correct. i = 7 * (8 + 1) = 63. j is unchanged

### (b) 
```
    i = j = k = 1;
    i += j -= k;
    printf("%d %d %d", i, j, k);
```
**My Guess:** `1 0 1`

I was correct: k is unchanged. j = 1 - 1 = 0. i = 1 + 0 = 1.

### (c) 
```
    i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("%d %d %d", i, j, k);
```
**My Guess:** `2 -1 3` 

I was correct: k is unchanged. j = 2 - 3 = -1. i = 1 - (-1) = 2.

### (d) 
```
    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d %d %d", i, j, k);
```
**My Guess:** `0 0 0`

I was correct. k stays as 0. j = 1 * 0 = 0. i = 2 * 0 = 0.

### 10. Program Fragments 3

### (a)
```
i = 6;
    j = i += i;
    printf("%d %d", i, j);
```
**My Guess:** `12 12`

### (b) 
```
    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d", i, j);
```
**My Guess:** `3 4`

### (c) 
```
    i = 7;
    j= 6 + (i = 2.5);
    printf("%d %d\n", i, j);
```
**My Guess:** `2 8`
### (d) 
```
    i = 2; j = 8;
    j = (i = 6) + (j = 3) ;
    printf("%d %d\n", i, j);
```
**My Guess:** `6 9`

### 11. Program Fragments 4

### (a)
```
    i = 1;
    printf("%d ", i++ - 1);
    printf("%d\n", i ) ;
```
**My Guess:** `0 2`
### (b) 
```
    i = 10; j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d\n", i, j);
```
**My Guess:** `4 11 16`
### (c) 
```
    i = 7; j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d\n", i, j);
```
**My Guess:** `0 8 7`
### (d) 
```
    i = 3; j = 4; k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d\n", i, j, k);
```
**My Guess:** `3 4 5 4`

### 12. Program Fragments 5

### (a)
```
    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d", i, j);
```

**My Guess:** `6 16`
### (b) 
```
    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d", i, j);
```
**My Guess:** `6 -7`
### (c) 
```
    i = 7;
    j= 3 * i-- + 2;
    printf("%d %d", i, j);
```
**My Guess:** `6 23`
### (d) 
```
    i = 7;
    j = 3 + --i * 2;
    printf("%d %d", i, j);
```
**My Guess:** `6 15`

### 13. Which is equivalent to `i += 1`? `++i` or `i++`?

For this I've written a short program to evaluate and print each to see which are equivalent. Before I run it I'd guess that `++i` is equivalent to `i += 1` because both should return the new value of i.

**Program output:** `'i++': 5 '++i' : 6 'i += 1': 6`

So yes `++i` is equivalent to `i += 1`

### 14. Adding Brackets to expressions

### (a) *a * b - c * d + e*
multiplication first:

(a * b) - (c * d) + e

addition and subtraction are left associative:

((a * b) - (c * d)) + e

### (b) *a / b % c / d*

multiplicative operators are left associative:

(a / b) % c / d
((a / b) %c) / d

### (c) *- a - b + c - + d*

unaries will take precedence first:

-a - b + c - d

There's only additive operators so left associative:

((-a - b) + c) - d

### (d) *a * - b / c - d*

Unary will take precedence:

a * -b / c - d

Then multiplication and division left associatively:

(a * -b) / c - d
((a * -b) / c) - d

### 15. Values of i and j for given expressions

*Assuming that i = 1 and j = 2*

### (a) `i += j;`

**My Guess:** `i = 3, j = 2`

### (b) `i--;`
**My Guess:** `i = 2, j = 2`

### (c) `i * j / i;`
**My Guess:** `i = 2, j = 2`

### (d) `i % ++j ;`
**My Guess:** `i = 3, j = 3`

i and j will only change when an assignment or increment operator appears.

## Programming Projects:

### 1. twoDigitReverser.c

This program reverse a two digit. Example below:

    Enter a two digit number: 56
    The reversal is: 65

### 2. threeDigitReverser.c

This program does the same as the above but with three digit numbers. Example below:

    Enter a two or three digit number: 123
    The reversal is: 321

### 3. threeDigitReverserAlt.c

This again reverses three digit numbers but by storing each digit in it's own variable using scanf rather than arithmetically

### 4. octal.c

Converts a decimal number to the octal equivalent:

    Enter a number between 0 and 32767: 3845 
    In octal, your number is: 07405

### 5. upc.c

Modified version of the original. This one takes the the full 11 digits at once.

### 6. ean.c

Essentially the above but modified for an EAN number which has 12 digits instead.