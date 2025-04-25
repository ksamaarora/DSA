### Problem Statement (Premium)

You are given an integer 'n'. Return `true` if 'n' is an Armstrong number, and `false` otherwise.

An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to the 'k'th power is equal to the number itself. For example, 371 is an Armstrong number because \(3^3 + 7^3 + 1^3 = 371\).

### Detailed Explanation

#### Input/Output Format

- **Input:** 
  - A single integer `n`.

- **Output:** 
  - A boolean value: `true` if `n` is an Armstrong number, `false` otherwise.

#### Example

**Sample Input 1:**
```
1
```

**Sample Output 1:**
```
true
```

**Explanation of Sample Input 1:**
1 is an Armstrong number as \(1^1 = 1\).

**Sample Input 2:**
```
103
```

**Sample Output 2:**
```
false
```

**Sample Input 3:**
```
1634
```

**Sample Output 3:**
```
true
```

**Explanation of Sample Input 3:**
1634 is an Armstrong number, as \(1^4 + 6^4 + 3^4 + 4^4 = 1634\).

---

### Constraints
- The input will always be a positive integer.
