# Chapter 3: Formatted Input/Output
This chapter covers further use of printf and scanf with an emphasis on conversion specifiers.
## Exercises:

1. ### printf Output
   1. `printf("%6d,%4d\n", 86, 1040);`
   My guess: 000086,1040
   actual answer: indented 6 to the right so
   2. `printf("%12.5e\n", 30.253);`
   My guess: 3.02530000000e1
   actual answer: 3.02530e+01
   3. `printf("%.4f\n", 83.162);`
   My guess: 83.1620
   actual answer: correct
   4. `printf("%-6.2g\n", .0000009979);`
   My guess: 0.00 indented left
   actual answer: 1e-06

2. ### printf Float Formats
   see ex2.c

3. ### scanf Format Strings
   Didn't notice any differences as the spaces weren't considered by scanf

4. ### scanf i, x and j
   `scanf("%d%f%d", &i, &x, &j);`

   User enters: 
   
   > 10.3 5 6
   
   My guess: i=10, x=0.3, j=5 and the 6 will be disregarded
   Actual answer: I was correct

5. ### scanf x, i, y
   `scanf("%f%d%f", &x, &i, &y);`

   User enters: 
   
   > 12.3 45.6 789

   My guess: x=12.3, i=45, y=0.6 and the 789 will be disregarded
   Actual answer: I was correct

6. ### addfrac.c allow spaces
   This is just a matter of adding spaces before and after the "/" like `scanf("%d / %d", &i, &j);`

## Programming Projects
1. ### dateConverter.c
   This program takes a date given in "dd/mm/yyyy" format and displays it as "yyyymmdd"
   
   example:
   > 10/10/2000

   > 20001010
   
2. ### sphereVolume.c
   This program calculates the volume for a user-given radius

3. ### taxCalc.c
   This program calculates and displays an amount of money with tax added for a user-given amount

4. ### poly.c
   Calculates *3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6* for a user-given value of x

5. ### bills.c
   This program works out the smallest number of notes/coins (twenties, tens, fivers and pounds) needed to pay a bill provided by the user

6. ### interest.c
   This one works out the balance remaining on 