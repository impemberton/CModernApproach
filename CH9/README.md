# Chapter 9: Functions

## Exercises

### 1. Locate Errors
![alt text](<./Screenshots/ex1.png>)

The first error is not providing the type for `height` and the second is `double product` should be within the braces.

### 2. Check Function
![alt text](<./Screenshots/ex2.png>)

See ex2.c

### 3. gcd Function
![alt text](./Screenshots/ex3.png)

Essentially just copied gcd.c from chapter 6 and split out the gcd logic into its own function

See ex3.c

### 4. day_of_year function

See ex4.c. Short program that outputs the day of the year for a given day, month and year:

    Please enter a date (dd/mm/yyyy): 09/05/2025
    Day of the year: 129

### 5. num_digits function

See ex5.c. Wrote a function that returns the number of digits in an integer:

    Enter a number: 1234567
    1234567 has 7 digits

### 6. digit function

see ex6.c. Gets the specified digit. Reused the num_digits function

    Enter a number: 123456789
    Which digit you want (from the right): 5
    5

### 7. Legal Statements
![alt text](./Screenshots/ex7.png)

Have checked this by compiling a program that uses all of the above statements and faced no errors/warnings.
The values are just converted between double and int whenever necessary

### 8. Valid Prototypes

#### (a) `void f(double x);` is a valid prototype

#### (b) `void f(double);` is valid because the parameter names can be omitted in the prototype

#### (c) `void f(x)` not valid because the parameter type needs to be specified

#### (d) `f(double x);` not valid because this will not be a void function but rather an int function

### 9. Output of Program
![alt text](./Screenshots/ex9.png)

This will not swap i and j as the author is probably expecting. This is because a and b are copies and local to the swap function

the output will be:

    i = 1, j = 2

### 10. various array functions

see ex10.c which functions that compute the largest element, the average and the positive elements of an array

### 11. compute_GPA function

See ex11.c. This computes a GPA from a given set of grades:

    Enter Grades: ABCDFAAAA
    The GPA is 2.89

### 12. inner_product function

    double inner_product(double a[], double b[], int n){
        double sum = 0;
        for (int i = 0; i < n; i++) 
            sum += (a[i] * b[i]);
        return sum;
    }

### 13. evaluate_position

see ex13.c. This function will sum the point score for each chess players pieces and then find the difference between them.

### 14. has_zero function error

    bool has_zero(int a[], int n)
    {
        int i;

        for (i = 0; i < n; i++)
            if (a[i] == 0)
                return true;
            else 
                return false;
    }

The problem with this function is that currently it will only check the first element of the array. 
The else statement should be removed like below:

    bool has_zero(int a[], int n)
    {
        int i;

        for (i = 0; i < n; i++)
            if (a[i] == 0)
                return true; 
        return false;
    }

### 15. median function refactor

    double median(double x, double y, double z)
    {   
        if (x <= y)
            if (y <= z) return y;
            else if (x <= z) return z;
            else return x;
        if (z <= y) return y;
        if (x <= z) return x;
        return z;
    }

This can be condensed to:

    double median(double x, double y, double z)
    {   
        double mid;
        if ((x <= y && x >= z) || (x <= z && x >= y)) 
            mid = x;
        else if ((y <= x && y >= z) || (y <= z && y >= x))
            mid = y;
        else 
            mid = z;
        return mid;
    }

### 16. condense fact.c

    int fact(int n) {
        int result = 1;

        while (--n > 0)
            result *= n+1;
        
        return result;
    }

### 17. non recursive fact.c

see above

### 18. recursive gcd

    int gcd(int m, int n) {
        int remainder;
        if (n == 0) 
            return m;
        else    
            gcd(n, m % n);
    }

### 19. mystery pb function

    this mystery function converts decimal integers to binary

## Projects

### 1. selectionSort.c

Uses a recursive function to sort a series of integers smallest to largest. Works for any length up to 100

    Enter a series of integers to be sorted: 9 8 7 6 5
    5 6 7 8 9 

### 2. tax.c updated

This version uses a function compute_tax() that returns the amount of tax for a given income

### 3. randWalk.c updated

Uses a function to first generate the random walk array and then a second function to print it

### 4. anagram.c updated

Uses two functions now. One that reads a word and updates an array with the number of each letter in it. The other checks whether each array has the same values and returns a bool.

### 5. magicSquare.c updated

Updated to use two functions. One that creates the square and the other that prints it.

### 6. polynomial.c
has a function that calculates the value of a polynomial and then main outputs the answer;

    Enter a value for x: 2
    f(x) = 92


### 7. power.c 

Calculates x to the power of n recursively:

    This program calculates x^n.
    Enter x: 2
    Enter n: 6
    2^6 = 64

### 8. craps.c

This simulates as many games of craps as the user wishes until they stop typing y:

    You rolled: 5
    Your point is 5
    you rolled: 2
    you rolled: 5
    you win!

    play again? y

    you rolled: 8
    your point is 8
    you rolled: 8
    you win!

    play again? y

    you rolled: 3
    you lose!

    play again? n

    wins: 2 losses: 1

