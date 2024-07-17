## Problem Statement

Sam is making a forest visualizer. An N-dimensional forest is represented by a pattern of size NxN filled with ‘*’. An N/2-dimensional forest is represented by the lower triangle of the pattern filled with ‘*’. For every value of ‘N’, help Sam to print the corresponding N/2-dimensional forest.

**Example:**

**Input:** N = 3

**Output:**
```
* 
* *
* * *
```

**Detailed Explanation:**

- **Input/Output Format:** The input is a single integer N. The output is an N/2-dimensional forest represented by the lower triangle of an NxN grid, where each row has an increasing number of '*' characters.
- **Notes:** Each line of the output represents a row in the forest grid.
- **Images:** Not applicable.

**Constraints:**
- 1 <= N <= 25
- Time Limit: 1 sec

**Sample Input 1:**
```
3
```

**Sample Output 1:**
```
* 
* *
* * *
```

**Explanation Of Sample Input 1:**

For N = 3, fill the lower triangle of a 3x3 matrix with ‘*’.

**Sample Input 2:**
```
1
```

**Sample Output 2:**
```
*
```

Write a function to generate this pattern based on the given input N.