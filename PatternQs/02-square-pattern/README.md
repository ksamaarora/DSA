## Problem Statement

### Star Grid

Write a program that takes an integer N as input and prints an NxN grid of asterisks ('*').

**Input:**
- An integer N (1 <= N <= 25)

**Output:**
- An NxN grid where each cell contains the character '*'.

**Example:**

**Input:**
```
3
```

**Output:**
```
***
***
***
```

**Explanation:**

For an input value of N = 3, the program should print a 3x3 grid where every cell is filled with the character '*'.

**Sample Input 1:**
```
1
```

**Sample Output 1:**
```
*
```

**Sample Input 2:**
```
4
```

**Sample Output 2:**
```
****
****
****
****
```

Write a function `print1(int n)` to achieve this. The function should print the desired grid pattern to the standard output. Use the `main` function to read the input and call the `print1` function.