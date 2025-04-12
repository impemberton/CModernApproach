# Chapter 2: C Fundamentals
I have skipped chapter 1 as it's just an introduction and contains no exercises. Chapter 2 covered basic syntax including the main function and some simple maths.
## Exercises:

1. ### Hello World
   back to basics with this one. The book asked whether I got a compiler warning but I actually didn't. Maybe they expect you to forget to include stdio.h.
2. ### Parkinson's Law
   This one asks to identify the statements and directives in this program:
   ```
   #include <stdio.h>
   int main(void)
   {
     printf("Parkinson's Law:\nWork expands so as to ");
     printf("fill the time\n);
     printf("available for its completion.\n");
     return 0;
   }
   ```
   The directive is the include before the main function and the statements are all the printfs and the final return.
   The output:
   
   > Parkinson's Law:
   > 
   > Work expands so as to fill the time
   > 
   > available for its completion.

3. ### dweight.c Improvement
   - Height, length and width are all now initialised in a single line: `int height, width, depth, volume;`
   - Removed weight instead calculating within printf: `printf("The weight of the box is %dkg.\n", (volume + 165) / 166);`

4. ### Uninitialised ints and floats
   The values were all zero for me. Maybe GCC initialises them as zero automatically.

5. ### Illegal C identifiers
  - 100_bottles ❌
  - _100_bottles ✅
  - one__hundred__bottles ✅
  - bottles_by_the_hundred_ ✅

6. ### Adjacent Underscores
   It's a bad idea to have adjacent underscores (as in `current__balance`) because they could easily mistaken for a singular underscore.

## Programming Projects
1. ### tick.c
   This program displays prints asterisks in a tick shape as shown below:
   
   ```
          *
         *
        *
   *   *
    * *
     *
   ```
2. ### sphereVolume.c
   This program calculates the volume for a user-given radius

3. ### taxCalc.c
   This program calculates and displays an amount of money with tax added for a user-given amount

4. ### poly.c
   Calculates *3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6* for a user-given value of x

5. ### bills.c
   This program works out the smallest number of notes/coins (twenties, tens, fivers and pounds) needed to pay a bill provided by the user

6. ### interest.c
   This one works out the balance remaining on a loan for the next three months of payments taking into account interest provided by the user.
