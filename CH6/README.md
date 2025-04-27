# Chapter 6: Loops

## Exercises

### 1. while program fragment
![alt text](<./Screenshots/ex1.png>)

This will program fragment will output powers of 2 from 2^0 to 2^7

    1 2 4 8 16 32 64 128

### 2. do while program fragment
![alt text](<./Screenshots/ex2.png>)

My guess is this program will output:

    9384 938 93 9 0

Wrong, it actually stops printing when i < 0 so actual output is:

    9384 938 93 9

### 3. for program fragment
![alt text](<./Screenshots/ex3.png>)

This program will output:

    5 4 3 2

It won't ever print one because when i = 1, j = 0 causing the loop to terminate

### 4. Equivalent Loops
![alt text](<./Screenshots/ex4.png>)

I think A and C are equivalent because i will be incremented after evaluation while in B it will incremenet and then be evaluated.

Output: 

    0 1 2 3 4 5 6 7 8 9 
    0 1 2 3 4 5 6 7 8 9 
    1 2 3 4 5 6 7 8 9 10

### 5. Equivalent Loops 2
![alt text](<./Screenshots/ex5.png>)

This one C is the odd one out because it will still run at least once even if i >= 10

### 6. ex1 as a for loop

Quite simple the assignment `i = 1` and the statement `i *= 2` just needed to be moved into the for loop as statement 1 and 3 respectively

### 7.ex2 as a for loop

Similar to exercise 6, the assignment of `i = 9384;` and the statement `i /= 10;` just needed moving into the for loop.

### 8. for statement output
![alt text](<./Screenshots/ex8.png>)

My guess is it will reach 1 then loop infinitely:

    10 5 3 2 1 1 1 1 1 1 1 1...

That's exactly what happened and I had to cancel the program.

### 9. Translate ex8 to use a while

Moved the assignment to before the loop and the division by 2 into the loop's body.

### 10. goto equivalent for continue

Take this for loop that only prints odd numbers for example: 

    for(int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
        //continue jumps to here
    }

The equivalent with a goto would be:

    for(int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            goto skip;
        }
        printf("%d ", i);
        skip:
    }

### 11. Another program fragment
![alt text](<./Screenshots/ex11.png>)

My guess: `30`
Actual answer: `20`

This is because the 3rd statement of the for loop is executed before the 2nd statement is checked. This means when i reached 10 the loop exited before it could be added to the sum.

### 12. Prime-Testing Loop Improvement
![alt text](<./Screenshots/ex12.png>)



We just need to replace `d < n` with `d * d <= n`

### 13. rewrite for loop without body

    for (n = 0; m > 0; n++)
        m /= 2;

Can be written as:

    for (n = 0; m > 0; n++, m /= 2);

### 14. Find the error
![alt text](<./Screenshots/ex14.png>)

The issues is the semicolon after the if. 

Fixed version:

    if (n % 2 == 0) printf("n is even\n");

## Projects

### 1. largest.c

This takes in a series of numbers from the user until they enter a zero or negative. It then prints the largest number entered.

    Enter a number: 54.243
    Enter a number: 1234.1325
    Enter a number: 234.12
    Enter a number: 43.4
    Enter a number: 13245.32
    Enter a number: 13245.31
    Enter a number: 0
    The largest number entered was 13245.32

### 2. GCD.c

Finds the greatest common divisor between two integers using Euclid's algorithm

    Enter two integers: 72 84
    Greatest common divisor: 12

### 3. fracReducer.c

Uses the same algorithm above to reduce a fraction to its lowest terms:

    Enter a fraction: 12/64
    In lowest terms: 3/16

### 4. broker.c with a loop

A modified version of the broker.c program from Section 5.2 which now loops so the user can find the commission on multiple trades. Programs exits if the user enters zero or a negative number:

    Enter value of trade: 2134134
    Commission: $2175.72

    Enter value of trade: 2653
    Commission: $73.51

    Enter value of trade: 21234
    Commission: $146.71

    Enter value of trade: 0

### 5. digitReverser.c

Generalised version of the two digit reverser from Chapter 4

    Enter an integer: 1231254
    1231254, reversed is 4521321

### 6. evenSquares.c

Prints the squares of even numbers up to the number provided by the user:

    Enter a number: 300
    4
    16
    36
    64
    100
    144
    196
    
### 7. square3.c modification

Simple this one. Just needed to move i into the for loop like so:

    for (int i = 1, square = 1; i <= n; odd += 2, ++i)

### 8. calendar.c

Prints a calendar with number of days and start date specified by the user:

    Enter number of days in month: 30
    Enter starting day of the week (1=Sun, 7 = Sat): 7
    
                    1 
    2  3  4  5  6  7  8 
    9 10 11 12 13 14 15 
    16 17 18 19 20 21 22 
    23 24 25 26 27 28 29 
    30 

### 9. interest.c with a loop

This one from chapter 2 now can tell you how much the balance on a loan will be after a number of payments of your choosing:

    This program will calculate the balance on a loan after a number of monthly payments
    Please enter amount of loan: 10000
    Please enter interest rate: 5
    Please enter monthly payment: 500
    Please enter the number of payments: 5
    Balance remaining after 1 payment(s): 9541.7
    Balance remaining after 2 payment(s): 9081.4
    Balance remaining after 3 payment(s): 8619.3
    Balance remaining after 4 payment(s): 8155.2
    Balance remaining after 5 payment(s): 7689.2

### 10. dateCompare.c for more than 2 dates

Allows you to compare any number of dates and find the earliest:

    Enter date (dd/mm/yyyy): 10/10/2000
    Enter date (dd/mm/yyyy): 25/12/2000
    Enter date (dd/mm/yyyy): 9/12/1998
    Enter date (dd/mm/yyyy): 0/0/0
    09/12/1998 is the earliest date

### 11. e.c

Approximates the value of the constant *e* using the formula *e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!* where n is an integer given by the user.

    Enter a number and let's approximate e: 100
    Our approximation of e: 2.718282

### 12. e2.c

Also approximates *e* but does it using a modified formula, *e = 1 + 1/1! + 1/2! + 1/3! + ... + E* where E is smallest term that should be added.