# Chapter 12: Pointers and Arrays
## Exercises

1. ex1.c 

Wrote a short program that will work out the following answers:

    *(p+3): 14 // equivalent to a[1+3] = a[4] = 14
    *(q-3): 34 // equivalent to a[5-3] = a[2] = 34
    q-p: 4 // the pointers have a distance of 4
    p < q: 1 // true because p points to a[1] and q to a[5]
    *p < *q: 0 // false because a[1] < a[5] = 0

2. middle = (low + high) / 2;

This statement is incorrect because pointers cannot be added together.

The correct way to do this would be: 

    middle = low + ((int) (high - low) / 2) 

3. ex3.c 

My guess is this will reverse the array.

After testing that's exactly what it does.

4. rewrite functions 

Rewrote the make_empty, is_empty and is_full functions to use a pointer to the top variable. See ex4.c

5. illegal expressions 

a) p == a[0] is illegal because p is a pointer and a[0] is not

b) p == &a[0] is legal and true because p is the pointer to the first element of a

c) *p == a[0] is legal and true because *p is the value stored at &a[0]

d) p[0] == a[0] is illegal because p is a pointer not an array

6. Rewrite function

See ex6.c

7. search function

This function checks whether a value exists in an array

8. store zeros function

    void store_zeros(int a[], int n) {

        for (int *p = a; p < &a[n]; p++)
            *p = 0;
    }

9. inner_product function

```
```
    double inner_product(const double *a const double *b, int n) {
    double *end = a + n, sum = 0;
    while (a < end)
        sum += *a++ + *b++;
    return sum;
    }


10. find_middle function

```
```
    int *find_middle(int *a, int n) {
        return a + (n/2);
    }
```
```

11. find_largest


```
    int *find_largest(int *a, int n) {
        int *largest = a, *end = a++ + n;
        while (n < end)
            if (*a++ > *largest)
                largest = a;
        return largest; 
    }
```

12. find_two_largest function

```
    void find_two_largest(const int *a, int n, int *largest, int *second_largest) {
        int *end = a + n;
        *largest = *a++;
        while(a < end){
            if (*a > *largest) {
                *second_largest = *largest;
                *largest = *a;
            } else if (*a > *second_largest) {
                *second_largest = *a;
            }
        }
    }
```

13. ident for loop

See ex13.c 

14. Search temperature array 

    contains32 = search (temperatures, 7*24, 32);

15. temp readings stored in row i

```

    for (int *p = &temperatures[i]; p < &temperatures[i+1]; p++)
        printf("%d ", *p);
```

16. largest temp reading

```
    int largest = find_largest(&temperatures[0], 24)
    for (int i = 1; i < 7, i++) {
        int *row_largest = find_largest(&temperatures[i], 24)
        if (*row_largest > largest) 
            largest = *row_largest;
    }
```

17. rewrite sum_two_dimensional_array

```
int sum_two_dimensional_array(const int a[][LEN], int n) {
    int *p = a, int *end = &a[n][LEN], sum = 0;
    
    while (p < end) 
        sum += *p++;
    
return sum;
}
```

18. evaluate_position rewrite

See ex18.c 

## Projects

1. a) reverseMsg.c

Reverse a message entered by the user:

```
Enter a message: SpiderPig, SpiderPig, does whatever a SpiderPig does!
Reversal is: !seod giPredipS a revetahw seod ,giPredipS ,giPredipS
```

b) reverseMsgB.c 

Does the same as the above but uses pointers for the loops instead of integers:

```
Enter a message: Good News, Everyone!
Reversal is: !enoyrevE ,sweN dooG
```

2. palindrome.c

Checks if a message is a palindrome:

    Enter a message: racecar
    Palindrome

b) palindromeB.c

Does the same as above only using pointers to keep track of letter positions:

    Enter a message: Madam, I'm Adam
    Palindrome

3. 
4. 3 and 4 I couldn't find a way to simplify further.

5. reverseSentence.c 

Modified to use pointers

6. qsort.c 

A modified version of qsort from chapter 9 that now uses pointers

    Enter 10 numbers to be sorted: 43 78 38 37 27 96 39 37 94 48 
    In sorted order: 27 37 37 38 39 43 48 78 94 96 

7. maxmin.c

Modified so the function, max_min now uses pointers.
