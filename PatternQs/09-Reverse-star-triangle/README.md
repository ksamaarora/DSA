## Problem Statement

Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.

**Example:**

**Input:** N = 3

**Output:**
```
*****
 ***
  *
```

**Detailed Explanation:**

- **Input/Output Format:** The input is a single integer N. The output is an N-row reverse triangle of stars ('*') where each row contains a centered pattern of stars, starting from the maximum width at the top and decreasing each row.
- **Notes:** Each line of the output represents a row in the reverse star triangle pattern.
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
*****
 ***
  *
```

**Explanation Of Sample Input 1:**

- The first row contains five stars.
- The second row contains one space followed by three stars.
- The third row contains two spaces followed by one star.

**Sample Input 2:**
```
1
```

**Sample Output 2:**
```
*
```

Write a function to generate this pattern based on the given input N.