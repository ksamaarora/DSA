## Problem Statement

Sam is planting trees on the upper half region (separated by the left diagonal) of a square shared field. For every value of ‘N’, print the field if the trees are represented by ‘*’.

**Example:**

**Input:** N = 3

**Output:**
```
* * *
* *
*
```

**Detailed Explanation:**

- **Input/Output Format:** The input is a single integer N. The output is an NxN grid where the upper half region (separated by the left diagonal) is filled with ‘*’.
- **Notes:** Each line of the output represents a row in the field grid.
- **Images:** Not applicable.

**Constraints:**
- 1 <= T <= 10
- 1 <= N <= 25
- Time Limit: 1 sec

**Sample Input 1:**
```
3
```

**Sample Output 1:**
```
* * *
* *
*
```

**Explanation Of Sample Input 1:**

For N = 3, the upper half region of a 3x3 grid is filled with ‘*’.

**Sample Input 2:**
```
1
```

**Sample Output 2:**
```
*
```

**Sample Input 3:**
```
4
```

**Sample Output 3:**
```
* * * *
* * *
* *
*
```

Write a function to generate this pattern based on the given input N.