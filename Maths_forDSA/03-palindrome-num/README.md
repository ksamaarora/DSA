### Problem Statement

Check whether a given number `n` is a palindrome number.

**Note:** 
Palindrome numbers are the numbers that don't change when reversed. You don’t need to print anything. Just implement the given function.

### Example

**Input:**
```
n = 51415
```

**Output:**
```
true
```

**Explanation:**
On reversing, 51415 gives 51415.

---

### Detailed Explanation

#### Input/Output Format

- **Input:** 
  - A single integer `n` (1 <= n <= 10^9).

- **Output:** 
  - A boolean value: `true` if `n` is a palindrome, `false` otherwise.

#### Notes
- The input will always be a positive integer within the given constraints.

#### Example

**Sample Input 1:**
```
1032
```

**Sample Output 1:**
```
false
```

**Explanation Of Sample Input 1:**
1032, on being reversed, gives 2301, which is a totally different number.

**Sample Input 2:**
```
121
```

**Sample Output 2:**
```
true
```

**Explanation Of Sample Input 2:**
121, on being reversed, gives 121, which is the same.

---

### Expected Time Complexity

The expected time complexity is O(log(n)).

### Constraints
1 <= `n` <= 10^9

---

### Time Limit
1 sec
