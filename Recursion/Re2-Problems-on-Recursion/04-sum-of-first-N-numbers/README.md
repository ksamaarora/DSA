**Sum of First `n` Terms**

**Difficulty:** Basic  
**Accuracy:** 23.17%  
**Submissions:** 124K+  
**Points:** 1

**Problem Statement:**

Given an integer `n`, calculate the sum of the series `13 + 23 + 33 + 43 + …` till the `n`-th term.

**Examples:**

**Example 1:**

- **Input:** `n = 5`
- **Output:** `225`
- **Explanation:** `13 + 23 + 33 + 43 + 53 = 225`

**Example 2:**

- **Input:** `n = 7`
- **Output:** `784`
- **Explanation:** `13 + 23 + 33 + 43 + 53 + 63 + 73 = 784`

**Your Task:**

You don't need to read input or print anything. Your task is to complete the function `sumOfSeries()` which takes the integer `n` as a parameter and returns the sum of the cubes of the first `n` natural numbers.

**Function Signature:**

```python
def sumOfSeries(n: int) -> int:
```

**Expected Time Complexity:** O(1)  
**Expected Auxiliary Space:** O(1)

**Constraints:**

- `1 <= n <= 50000`

---