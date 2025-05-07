# Chapter 8: Arrays

## Exercises

### 1. 
![alt text](<./Screenshots/ex1.png>)

Using the type would be inferior because if the type of a changes you would need to change the type also.

### 2. Using a digit char as subscript

similar to indexing using `a[c - 'a']`, you would just use an array of size ten and index using `a[c- '0']`

### 3. weekend array

`bool weekend[7] = {true, [6] = true};`

### 4. weekend array with designated initialiser

I think I already did this in the ex3 and the author was expecting me to type:

`bool weekend[7] = {true, false, false, false, false, false, true};`

### 5. see ex5.c

### 6. seven segment array

```
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, //0
                             {0, 1, 1, 0, 0, 0, 0}, //1
                             {1, 1, 0, 1, 1, 0, 1}, //2
                             {1, 1, 1, 1, 0, 0, 1}, //3
                             {0, 1, 1, 0, 0, 1, 1}, //4
                             {1, 0, 1, 1, 0, 1, 1}, //5
                             {1, 0, 1, 1, 1, 1, 1}, //6
                             {1, 1, 1, 0, 0, 0, 0}, //7
                             {1, 1, 1, 1, 1, 1, 1}, //8
                             {1, 1, 1, 1, 0, 1, 1}, //9
}
```

### 7. seven segment array shrunk

```
const int segments[10][7] = {{1, 1, 1, 1, 1, 1}, //0
                             {0, 1, 1}, //1
                             {1, 1, 0, 1, 1, 0, 1}, //2
                             {1, 1, 1, 1, 0, 0, 1}, //3
                             {0, 1, 1, 0, 0, 1, 1}, //4
                             {1, 0, 1, 1, 0, 1, 1}, //5
                             {1, 0, 1, 1, 1, 1, 1}, //6
                             {1, 1, 1}, //7
                             {1, 1, 1, 1, 1, 1, 1}, //8
                             {1, 1, 1, 1, 0, 1, 1}, //9
}
```

### 8 temperature readings array

```
int temperature_readings[30][24];
```

### 9. Average temperature

```
int sum = 0;
for (int day = 0; day < 30; day++) {
    for(int hour = 0; hour < 24; hour++) {
        sum += temperature_readings[day][hour];
    }
}
printf("Average temperature this month: %f\n", (float) sum / (30 * 24));
```

### 10. chess_board array

```
char chess_board[8][8] = {
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
    {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
    {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
    {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
};
```

### 11. checker_board array

see ex11.c

## Projects

### 1. repdigit.c

gives a list of the repeated digits in a number: 

    Enter a number: 12312045123420235
    Repeated digit(s): 0 1 2 3 4 5 

### 2. repdigit2.c

Now gives a formatted list of how many times each number appears in the user's number: 

    Enter a number: 12434769854
    Digit:       0  1  2  3  4  5  6  7  8  9 
    Occurences:  0  1  1  1  3  1  1  1  1  1 

### 3. repdigit3.c

Does the same as above but continues asking for numbers until the user enters 0 or less

    Enter a number: 1723495
    Digit:       0  1  2  3  4  5  6  7  8  9 
    Occurences:  0  1  1  1  1  1  0  1  0  1 
    Enter a number: 34753495
    Digit:       0  1  2  3  4  5  6  7  8  9 
    Occurences:  0  0  0  2  2  2  0  1  0  1 
    Enter a number: 0

### 4. reverse.c 

This one I just added a LENGTH macro equal to `((int) (sizeof(a) / sizeof(a[0])))`

### 5. interest.c

Changed so the interest is applied monthly rather than annually:

    Enter interest rate: 1
    Enter number of years: 5

    Years     1%     2%     3%     4%     5%
    1    112.68 126.82 142.58 160.10 179.59
    2    126.97 160.84 203.28 256.33 322.51
    3    143.08 203.99 289.83 410.39 579.18
    4    161.22 258.71 413.23 657.051040.13
    5    181.67 328.10 589.161051.961867.92

### 6. B1FF.c

Converts a message into leetspeak:

    Enter message: Hey, guys it's Isaac here
    In B1FF-speak: H3Y, GUY5 1T'5 1544C H3R3!!!!!!!!!!

### 7. arrayTotals.c

Calculates the totals by row and column for a 5x5 matrix 

    Enter row 1: 8 3 9 0 10
    Enter row 2: 3 5 17 1 1
    Enter row 3: 2 8 6 23 1
    Enter row 4: 15 7 3 2 9
    Enter row 5: 6 14 2 6 0

    Row totals: 30 27 40 36 28 
    Column totals: 34 37 37 32 21 

### 8. quizGrades.c

Modified version of the above program that takes in 5 quiz scores from 5 students and calculate stats for students and quizes:

    Enter grades for student 1: 8 3 9 0 10
    Enter grades for student 2: 3 5 17 1 1
    Enter grades for student 3: 2 8 6 23 1
    Enter grades for student 4: 15 7 3 2 9
    Enter grades for student 5: 6 14 2 6 0

    Student Total   Average
    1       30      6
    2       27      5
    3       40      8
    4       36      7
    5       28      5

    Quiz    Total   Average
    1       34      6
    2       37      7
    3       37      7
    4       32      6
    5       21      4

### 9. randWalk.c

Produces a random path through a 10x10 array:

....UT....
..ZWVS....
..YX.R....
.....Q....
..ABCPML..
....DONK..
....EFGJ..
......HI..
..........
..........

### 10. flights.c using arrays

Output is the same as it was previously but the code now uses arrays to store the departure and arrival times.

### 11. phoneNum.c

This just adds a label to the output which requires the chars to be stored in an array before printing.

    Enter phone number: 1-800-COL-LECT 
    In numeric form: 1-800-265-5328

### 12. scrabbleScore.c

Same as before but stores the value of each letter in an array and uses that to calculate rather than a switch statement:

    Enter a word: Quizzical
    Scrabble value: 38

### 13. name.c

Added a label:

    Enter a first and last name: Isaac Pemberton
    You entered the name: Pemberton, I.

### 14. reverseSentence.c

Reverses the words in a sentence:

    Enter a sentence: you can cage a swallow can't you?
    Reversal of sentence: you can't swallow a cage can you?

### 15. caeser.c

encrypts a message using a caesar cypher

    Enter message to be encrypted: HELLO GOOD SIR!
    Enter shift amount: 3
    Encrypted message: KHOOR JRRG VLU!

    Enter message to be encrypted: KHOOR JRRG VLU!
    Enter shift amount: 23
    Encrypted message: HELLO GOOD SIR!

### 16. anagram.c

tests if two words/phrases are anagrams:

    Enter first word: smart fella
    Enter second word: fart smella
    The words are anagrams.

### 17. magicSquare.c

creates a magic square of a size specified by the user:

    This program creates a magic square of a specified size.
    The size must be an odd number between 1 and 99.
    Enter the size of magic square: 9
    47  58  69  80   1  12  23  34  45 
    57  68  79   9  11  22  33  44  46 
    67  78   8  10  21  32  43  54  56 
    77   7  18  20  31  42  53  55  66 
    6  17  19  30  41  52  63  65  76 
    16  27  29  40  51  62  64  75   5 
    26  28  39  50  61  72  74   4  15 
    36  38  49  60  71  73   3  14  25 
    37  48  59  70  81   2  13  24  35 