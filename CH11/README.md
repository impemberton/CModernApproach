# Chapter 11: Pointers
## Exercises

1. If i is a variable and p points to i, which of the following expressions are aliases for i?

*p, *&i,  

2. if i is an int variable and p and q are pointers to int, which of the following assignments are legal?

    p = *&q;
    p = q;
    *p = *q;

3. Find errors in ex3.c 

The errors were caused by not placing * behind the pointers to access the variable

4. swap function

See ex4.c 

5. split time function

See ex5.c. This function will convert a time since midnight in seconds to 24 hour time:

    Enter a time in seconds: 7321
    Time: 02:02:01

6. find two largest function

See ex6.c. This function finds the largest and second largest integers in an array

7. split date function

This function gets a date by using the number of days in a year and also checks whether the year is a leap year.

    Enter a year:2000
    Enter a day out of 366:295
    The date is 21/10/2000

8. find largest function 

This function returns a pointer to the largest value in an array as opposed to just returning the largest value itself:

    Largest value is 10 stored at 0x7ffe8d80caf4

## Projects

1. bills.c

Updated this program from an earlier chapter by adding a function that calculates the bills and then updates variables outside the function by using pointers

2. flights.c

Updated version that uses a function to work out the departure and arrival times and stores them in variables using pointers.

3. fracReducer.c 

Again an updated version of the earlier fracReducer

4. poker.c 

Updated version of poker.c. Now all the variables are within main and passed to functions as arguments.
