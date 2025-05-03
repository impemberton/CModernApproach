# Chapter 7: Basic Types
This chapter discussed the basic types in C including int, float and char as well as their long and short versions
## Exercises

### 1. Decimal Values 
![alt text](<./Screenshots/ex1.png>)

Wrote a short program for this that prints the values as below:

#### (a) 63
#### (b) 119
#### (c) 2748

### 2. Legal Constants
![alt text](<./Screenshots/ex2.png>)
#### (a) Not legal because it begins with a 0 denoting an octal number but also has an E used in floats

#### (b) legal floating constant

#### (c) legal octal integer constant

#### (d) Not legal as underscores are not allowed in integers

#### (e) legal floating point constant
 
### 3. Legal Types
![alt text](<./Screenshots/ex3.png>)

#### (a) Legal - same as unsigned short int

#### (b) Not legal - short cannot be used with float

#### (c) Legal - larger sized double

#### (d) Legal - same as unsigned long int

### 4. Legal Char Statements
![alt text](<./Screenshots/ex4.png>)

(d) is illegal because printf takes a string as an argument. The correct way to pass the char through printf would be `printf("%c", c)`

### 5. Legal Way to Write 65
All are legal ways to write 65 according to my interpreter.

### 6. Smallest data types

#### (a) Days in a month is max 31 so char would be the smallest possible type with a max of 255

#### (b) days in a year is 365 which is greater than 255 for char but small enough to fit in a short

#### (c) minutes in a day = 60 * 24 = 1440. Again too large for char but would fit into a short

#### (d) seconds in a day = 60 * 60 * 24 = 86400. Too large for char but depending on the system could fit into a short or int

### 7. Octal escapes

#### (a) \b = \010

#### (b) \n = \012

#### (c) \r = \015

#### (d) \t = \011

### 8. Hexadecimal escapes

#### (a) \b = \0x8

#### (b) \n = \0xA

#### (c) \r = \0xF

#### (d) \t = \0x9

### 9. expression type

For the expression, i / j + 'a', the type will be an int because the char 'a' will be promoted to an int.

### 10. 
![alt text](<./Screenshots/ex10.png>)

The other variables will all be implicitly converted to long 

### 11. 
![alt text](<./Screenshots/ex11.png>)

The other variables will all be converted double

### 12. 
![alt text](<./Screenshots/ex12.png>)

In i + f the i is converted to a float and added to f. d = i + f the i + f is then converted to a double to be assigned to d.

### 13.
![alt text](<./Screenshots/ex13.png>)

#### (a) value: -3, type: signed int

#### (b) value: 7, type: long int

#### (c) value: 6.5f, type: float

#### (d) value: 3.75, type: double

#### (e) value: -1.0, type: double

#### (f) value: 6, type: int

### 14. 
![alt text](<./Screenshots/ex14.png>)

Tested this out with some code in ex14.c the fractional part seemed to be always correct compared to the float. The float did behave strangely though not rounding up to the nearest tenth

### 15. typedefs

On my machine, chars are 8bit, short ints are 16bit and ints are 32bit so in ex15.c I created typedefs for Int8, Int16 and Int32 using those three types.

## Projects

### 1. square2.c testing

The maximum int value the user can enter before the code starts to fail is 46340. This is because 46341 squared is greater than 2^31- which is largest number a 32 bit signed integer can be.

Something interesting happens when setting i to be short int. If i is greater than or equal to 2^15 - 1 then it will loop forever because i will never be greater than n.

### 2. square2.c modified

Modified the above to stop and prompt the user every 24 squares with a getchar and only continues when the user presses enter

### 3. sum2.c modified

modified the sum2.c program to sum doubles instead of ints




