### Problem: 509. Fibonacci Number

The Fibonacci numbers, commonly denoted F(n), form a sequence called the Fibonacci sequence, where each number is the sum of the two preceding ones, starting from 0 and 1. The sequence is defined as:

- F(0) = 0
- F(1) = 1
- F(n) = F(n - 1) + F(n - 2), for n > 1.

Given an integer `n`, calculate F(n).

### Examples:

#### Example 1:
- **Input**: `n = 2`
- **Output**: `1`
- **Explanation**: F(2) = F(1) + F(0) = 1 + 0 = 1.

#### Example 2:
- **Input**: `n = 3`
- **Output**: `2`
- **Explanation**: F(3) = F(2) + F(1) = 1 + 1 = 2.

#### Example 3:
- **Input**: `n = 4`
- **Output**: `3`
- **Explanation**: F(4) = F(3) + F(2) = 2 + 1 = 3.

### Constraints:
- `0 <= n <= 30`

### Expected Output:
The function should return the Fibonacci number `F(n)` for the given input `n`.

---
