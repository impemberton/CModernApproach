# Chapter 5: Selection Statements
From here on out I'll only correct answers where I got them wrong initially otherwise this takes too much time.
## Exercises
### 1. Output of i, j and k
![alt text](<./Screenshots/ex1.png>)
### (a) 
    i * j = 2 * 3 => 6
    6 == 6 => 1
**Answer:** `1`
### (b)
    k > i = 1 > 5 => 0
    0 < j = 0 < 10 => 1
**Answer:** `1`
### (c)
    i < j = 3 < 2 => 0
    j < k = 2 < 1 => 0
    0 == 0 => 1
**Answer:** `1`
### (d)
    i % j = 3 % 4 => 0
    0 + i = 0 + 3 => 3
    3 < 5 => 1
**Answer:** `1`

### 2. Output of i, j and k 2
![alt text](<./Screenshots/ex2.png>)
### (a) 
**Answer:** `1`
### (b) 
**Answer:** `1`
### (c) 
**Answer:** `1`
### (d) 
**Answer:** `1`

### 3. Output of i, j and k 3
![alt text](<./Screenshots/ex3.png>)
### (a) 
**Answer:** `1 3 4 5`
### (b) 
**Answer:** `0 7 8 9`
### (c) 
**Answer:** `1 8 8 9`
### (d) 
**Answer:** `1 2 1 1`

### 4. Single expression
![alt text](<./Screenshots/ex4.png>)

`i > j ? 1 : i == j ? 0 : -1;`

### 5. Is this legal?
![alt text](<./Screenshots/ex5.png>)

I think it's legal but let's break down n = 0:

    0 >= 1 -> 0
    0 <= 10 = 1
This means the printf statement will be printed even though n is not between 1 and 10

### 6. Is this legal? 2
![alt text](<./Screenshots/ex6.png>)

Again this is legal but won't have the desired effect. It will just check whether n == -9.

So when n = 5 the printf statement won't run despite being between 1 and 10.

### 7. What is printed?
![alt text](<./Screenshots/ex7.png>)
If i = 17 then i >= 0 so it will print i which is 17. If i = -17 then i is not greater than 0 and it will print -i which is -(-17) = 17

### 8. Simplify
![alt text](<./Screenshots/ex8.png>)

```
    teenager = age >= 13 && age <= 19;
```

### 9. Equivalent statements
![alt text](<./Screenshots/ex9.png>)

These two are equivalent. They wouldn't be if not for the >= rather than just >.

### 10. Switch Statement Output
![alt text](<./Screenshots/ex10.png>)

**Answer:** `one` ❌

**Correct Answer:** `onetwo` because there is no break and therefore it runs through to case 2.

### 11. Area Code Switch Statement
![alt text](<./Screenshots/ex11.png>)

My implementation of this can be found in `./Exercises/ex11.c`

## Projects

### 1. digitCounter.c

Calculates how many digits a number contains up to 4 digits. If the number is negative or greater than 9999 then it will output an error message.

    Enter a number: 4567
    The number 4567 has 4 digits

### 2. timeConverter.c

Converts 24 hour time to 12  hour time:

    Enter a 24-hour time: 23:16
    Equivalent 12-hour time: 11:16 PM

    Enter a 24-hour time: 12:32 
    Equivalent 12-hour time: 12:32 AM

### 3. broker.c Modified

A modified version of the broker.c program from chapter 5.2. This version asks the user for number of shares and price per share to calculate the total value. It also displays a rival broker's commission

    Enter the number of shares: 1000
    Enter the price per share: 10.00
    Commission: $110.00
    Our Rival's Offer: $63.00

I think it we might be better off removing the rival's offer if we actually want any customers though.

### 4. beaufort.c

Displays a description of the weather based on the windspeed provided by the user:

    Enter a wind speed in knots: 63.9
    Storm
    
    Enter a wind speed in knots: 45
    Gale

### 5. tax.c

Calculates tax on income entered by the user.

    Please enter your income: $5650.50
    On $5650.50, you will owe $162.52.

### 6. upc.c Modified

Modified version of upc.c from section 4.1 which outputs either `VALID` or `INVALID` rather than the check digit.

    Enter the first 11 digits of a UPC: 012345678905
    VALID

    Enter the first 11 digits of a UPC: 012345678904
    NOT VALID

### 7. minmax.c

This one takes 4 integers from the user then displays the largest and smallest.

    Enter four integers: 234 552 5478 23
    Largest: 5478
    Smallest: 23

### 8. flights.c

This takes a 24 hour time from the user and then relays the flight with the closest departure time and it's corresponding arrival time in 12 hour format:

    Enter a 24-hour time: 13:59
    Closest departure time is 14:00 a.m., arriving at 16:08 a.m.

### 9. dateCompare.c

Takes input of two dates from the user and prints a statement saying which is earlier than the other

    Enter first date (dd/mm/yyyy): 10/10/2000
    Enter second date (dd/mm/yyyy): 09/10/2000
    09/10/2000 is earlier than 10/10/2000

### 10. grade.c

The user inputs a numerical grade and the program converts this to a letter grade (only allows values between 0-100)

    Enter a numerical grade: 100
    Letter grade: A

    Enter a numerical grade: 101 
    Grades must be between 0 and 100.

### 11. writeNumber.c

Outputs the written form of any two digit number provided by the user. Had to put some effort into getting rid of the dash when there's no second digit e.g. 60

    Enter a two-digit number: 76
    Seventy-Six