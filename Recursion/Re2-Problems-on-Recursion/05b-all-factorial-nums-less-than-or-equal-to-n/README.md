**Problem: Find All Factorial Numbers Less Than or Equal to n**

**Difficulty**: Easy  
**Accuracy**: 48.96%  
**Submissions**: 85K+  
**Points**: 2

### Problem Statement:
A number `n` is called a **factorial number** if it is the factorial of a positive integer. The first few factorial numbers are: `1, 2, 6, 24, 120, ...`.

Given a number `n`, the task is to return the list (or vector) of all factorial numbers that are smaller than or equal to `n`.

### Examples:

#### Example 1:
**Input**:  
`n = 3`

**Output**:  
`1 2`

**Explanation**:  
- The first factorial number is `1`, which is less than or equal to `n`.  
- The second factorial number is `2`, which is also less than or equal to `n`.  
- The third factorial number is `6`, which is greater than `n`.  
Thus, the output is `1 2`.

#### Example 2:
**Input**:  
`n = 6`

**Output**:  
`1 2 6`

**Explanation**:  
- The first three factorial numbers `1`, `2`, and `6` are less than or equal to `n`.  
- The fourth factorial number `24` is greater than `n`.  
Thus, the output is `1 2 6`.

### Expected Time Complexity:
- **O(k)** where `k` is the number of factorial numbers less than or equal to `n`.

### Expected Auxiliary Space:
- **O(1)**, since we only store a fixed number of factorial numbers.

### Constraints:
- \(1 \leq n \leq 10^{18}\)

---
