## Problem Statement

Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Diamond.

**Example:**

**Input:** N = 3

**Output:**
```
  *
 ***
*****
*****
 ***
  *
```

**Detailed Explanation:**

- **Input/Output Format:** The input is a single integer N. The output is a diamond pattern of stars ('*') where the diamond has a height of 2N and a maximum width of 2N-1 stars at the middle.
- **Notes:** Each line of the output represents a row in the diamond pattern.
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
 ***
*****
*****
 ***
  *
```

**Explanation Of Sample Input 1:**

- The first part of the diamond (first 3 rows for N = 3) is formed by increasing the number of stars from 1 to 2N-1.
- The second part of the diamond (next 3 rows for N = 3) mirrors the first part, with decreasing numbers of stars.

**Sample Input 2:**
```
1
```

**Sample Output 2:**
```
*
*
```

Write a function to generate this pattern based on the given input N.