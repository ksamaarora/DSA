### Problem Statement:

You are given an integer `n`, and your task is to find the `n-th` Fibonacci number. The Fibonacci series is defined as follows:

- F(1) = 1
- F(2) = 1
- For any `n > 2`: 
  \[
  F(n) = F(n - 1) + F(n - 2)
  \]

Given the value of `n`, calculate and return the `n-th` Fibonacci number. Ensure that your solution handles edge cases where `n = 1` or `n = 2`.

### Example:

#### Input:
```
6
```

#### Output:
```
8
```

#### Explanation:
For `n = 6`, the Fibonacci series up to the 6th term is:
\[
[1, 1, 2, 3, 5, 8]
\]
The 6th Fibonacci number is `8`, hence the output is `8`.

### Detailed Explanation:

- **Sample Input 1:**
  ```
  6
  ```

- **Sample Output 1:**
  ```
  8
  ```

- **Explanation of Sample Input 1:**
  The number `n` is `6`, so we need to find the 6th Fibonacci number. Using the Fibonacci series formula:
  \[
  F(1) = 1, F(2) = 1, F(3) = 2, F(4) = 3, F(5) = 5, F(6) = 8
  \]
  Therefore, the 6th Fibonacci number is `8`.

### Expected Time Complexity:
The expected time complexity is \(O(n)\), where `n` is the input number.

### Constraints:
- \(1 \leq n \leq 10000\)

Ensure that your solution can compute the Fibonacci number for large values of `n` efficiently.

### Time Limit:
- 1 second