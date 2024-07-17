## Problem Statement

Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Rotated Triangle.

**Example:**

**Input:** N = 3

**Output:**
```
*
**
***
**
*
```

**Detailed Explanation:**

- **Input/Output Format:** The input is a single integer N. The output is a rotated triangle pattern of stars ('*') where the pattern starts with 1 star and increases to N stars, then decreases back to 1 star.
- **Notes:** Each line of the output represents a row in the rotated triangle pattern.
- **Images:** Not applicable.

**Constraints:**
- 1 <= N <= 20
- Time Limit: 1 sec

**Sample Input 1:**
```
3
```

**Sample Output 1:**
```
*
**
***
**
*
```

**Explanation Of Sample Input 1:**

- The pattern starts with 1 star, increases to N stars in the middle row, and then decreases back to 1 star.

**Sample Input 2:**
```
1
```

**Sample Output 2:**
```
*
```

Write a function to generate this pattern based on the given input N.