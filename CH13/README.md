# Chapter 13: Strings

## Exercises

1. a) works

b) Doesn't work because %c expects a char not a char *

c) Doesn't work: Segmentation fault because %s expects a string not a char

d) works

e) doesn't work because printf takes a char * not a char

f) works

g) works

h) doesn't work because putchar expects a char not a string

i) doesn't work because puts expects a string not a char

j) doesn't work because it prints out two new line characters. This is because puts always ends with a newline

k) works

2. a) putchar(p) doesn't work because putchar expects a char not a pointer to a char

b) putchar(*p) is legal but will only put the first character in the string (a) and not the whole string

c) puts(p) works and prints the string as expected (abc)

d) puts(*p) is not legal because puts takes a char pointer not a char

3. user enters "12abc34 56def78" I would expect i = 12, s = "abc34" and j = 56. The rest would be ignored.

4. see ex4.c. I have written several read_line functions that skip whitespace, stop at the first whitespace char and stop at the first newline char.

5. wrote two functions in ex5.c that capitalise a string. They simply iterate through the string and using the toupper function to convert each char, terminating upon reaching the nullzero.

6. The censor function in will replace any instance of the string "foo" with "xxx". It does this by iterating through the main string and checking every 3 characters to see if they match foo and then replacing them if so.

7. strcat is the odd one out. It will not modify the original string in this instance whereas the others will set the original string to be empty

8.  `strcpy(str, "tire-bouchon")` str will be "tire-bouchon"
    `strcpy(&str[4], "d-or-wi")` str will be "tired-or-wi"
    `strcat(str, "red?")` str will be "tired-or-wired"

9.  
```
    strcpy(s1, "computer"); // This will copy "computer" into s1.
    strcpy(s2, "science"); // This will copy "science"" into s2.
    if (strcmp(s1, s2) < 0) // Tests whether s1 is greater than s2. This is true
        strcat(s1, s2); //Concatenates s2 onto s1 giving us "computerscience"
    else
        strcat(s2, s1); //Concatenates s1 onto s2 but is not run
    s1[strlen(s1)-6] = '\0' //changes s1[15-6] = s1[9] into '\0' giving us "computers"
```

So the value of s1 will be "computers"

10. I think the issue with this is that the new string is defined within the confines of the duplicate function and so cannot be accessed from outside.

11. see ex11.c for a version of strcmp that uses pointer arithmetic.

12. ex12.c contains the function get_extension that is able to store the file extension of a given file name as a separate string. Examples below:

    Enter file name: hello.html
    extension: html

    Enter file name: test.py
    extension: py

13. In ex13.c the function build_index_url that converts a domain into an index URL as shown below: 

    Enter a domain (e.g. google.com): knking.com
    http://www.knking.com/index.html

    Enter a domain (e.g. google.com): impemberton.com
    http://www.impemberton.com/index.html

14. The program iterates through the string s and minuses 1 from each char giving us "Grinch"

15. a) f("abcd", "babc") returns 3 
    b) f("abcd", "bcd") returns 0
    c) In general, the function f checks the index of the first character in string1 that doesn't appear within string2. If all characters in string1 appear in string2, it gives the length of string1.

16. see ex16.c for a condensed version of the count_spaces function. Using while(*s)  if *s is a nullzero then the while loop will terminate because '\0' == 0

17. ex17.c contains the test_extension function which returns boolean dependant on whether the extension of a file name matches the extension to test.

    Enter a file name: text.TXT
    Enter the file extension to test: txt
    1
    ike@Garry:~/Documents/C/CModernApproach/CH13/Exercises$ ./ex17
    Enter a file name: text.pdf
    Enter the file extension to test: txt 
    0

18. The function remove_filename in ex18.c removes the last final name at the end of a url:

    Enter a url: http://www.knking.com/index.html
    http://www.knking.com

    Enter a url: https://www.impemberton.com/index.html
    https://www.impemberton.com

## Projects

1. smallest_largest.c 

This program takes in words from the user until it receives a four letter word. It keeps track of the smallest and largest word (as they would appear in the dictionary) and prints them to the screen

```
Enter a word: Isaac
Enter a word: Grace
Enter a word: Ronnie
Enter a word: Noella 
Enter a word: Rob
Enter a word: Benny
Enter a word: Woody
Enter a word: Test

Smallest word: Benny
Largest word: Woody
```

2. remind.c

Updated the book's remind.c program so that it now prints an error message if the day is incorrect. Also allows a month and a 24 hour time to be added and sorts accordingly

```Enter date, time and reminder: 10/10 00:00 My Birthday
Enter date, time and reminder: 12/25 00.00 Gracie's Birthday/christmas
Enter date, time and reminder: 06/15 14:30 Dentist
Enter date, time and reminder: 06/15 14:45 leave dentist
Enter date, time and reminder: 06/15 08:00 floss
Enter date, time and reminder: 04/23 17:00 after work drink
Enter date, time and reminder: 10/10 12:00 Birthday party
Enter date, time and reminder: 0/0

  Date  Time Reminder
 04/23 17:00 after work drink
 06/15 08:00 floss
 06/15 14:30 Dentist
 06/15 14:45 leave dentist
 10/10 00:00 My Birthday
 10/10 12:00 Birthday party
 12/25 00:00.00 Gracie's Birthday/christmas
```

3. deal.c 

Modified so that the cards show as for example "Five of Clubs" rather than "5c". This was a simple matter of changing the suits and ranks arrays to be arrays of char arrays.

```
Enter number of cards in hand: 5
Your hand:
 Three of Spades
 Three of Clubs
 Jack of Hearts
 Queen of Hearts
 Seven of Clubs
```

4. reverse.c 

A very simple little program that spits it's arguments back out in reverse order. Just uses a for loop that iterates backwards through argv.

```
$ ./reverse 1 2 3 4
4 3 2 1 
```

5. sum.c

Simple program that sums it's arguments as shown below:

```
$ ./sum 1 2 3 4 5
Total: 15
```

6. planet.c case insensitive

This is a modified version of the planet.c program in the book. To make it case insensitive, I had to copy the arguments and the planets into separate variables and lower each character in them and finally compare them against each other.

7. writeNumber.c 

This version uses several arrays of strings to hold the ones, tens and teens. The number inputted by the user is then used as the index to choose the correct string.

8. scrabbleScore.c 

Now includes the compute_scrabble_value function which computes a scrabble value for a word given as an argument. This means the main function can now contain a while true loop and give the scrabble value of multiple words.

### 9 - 17

I've decided not to write up explanations for these as they all follow a similar pattern to the above in that they are just updates of previous programs to use functions.

9. vowelCount.c

10. name.c

11. wordLength.c 

12. reverseSentence.c

13. caeser.c

14. anagram.c 

15. RPN.c

16. reverse.c

17. palindrome.c

18. date.c

A short program that converts a date in format dd/mm/yyyy to month day, year as shown below:

```
Enter a date (dd/mm/yyyy): 10/10/2000
You entered the date October 10, 2000
```

This is accomplished by storing the month strings in a char array and using month number - 1 as the index to print the correct month string.
