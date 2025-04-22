# Bit's Basic Operations

**Difficulty:** Medium  
**Accuracy:** 72.04%  
**Submissions:** 6K+  
**Points:** 4  
**Average Time:** 20m  

Geek is learning data structures. He wants to learn the **trie data structure**, but there are a few bit manipulation prerequisites that he must first understand.  

You need to implement three bit manipulation functions: **XOR**, **check**, and **setBit**.

- **XOR function:** You are given two integers `n` and `m`. Return the XOR of `n` and `m`.  
- **check function:** You are given two integers `a` and `b`. Return `1` if the `a`-th bit (1-indexed) of `b` is set, otherwise return `0`.  
- **setBit function:** You are given two integers `c` and `d`. Set the `c`-th bit (0-indexed) of `d` if it is not already set.  

### Example 1:  
```
Input:  
n = 1, m = 2  
a = 3, b = 4  
c = 5, d = 6  

Output:  
3 1 38  

Explanation:  
1 XOR 2 = 3  
3rd bit of 4 is set.  
After setting the 5th bit of 6, the result is 100110, which in decimal form is 38.  
```

### Example 2:  
```
Input:  
n = 7, m = 8  
a = 9, b = 10  
c = 11, d = 12  

Output:  
15 0 2060  

Explanation:  
7 XOR 8 = 15  
9th bit of 10 is not set.  
After setting the 11th bit of 12, the result is 100000001100, which in decimal form is 2060.  
```

### Constraints:  
- `1 <= n <= 10^5`  
- `1 <= m <= 10^5`  
- `1 <= a <= 9`  
- `1 <= b <= 10^5`  
- `1 <= c <= 9`  
- `1 <= d <= 10^5`  

### Your Task:  
You don’t need to read input or print anything. Your task is to complete three functions:  
- `XOR()`  
- `check()`  
- `set()`  

### Expected Time Complexity:  
- `O(1)`  

### Expected Auxiliary Space:  
- `O(1)`  
