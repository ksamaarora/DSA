## Problem Statement

Sam is making a triangular painting for a maths project. An N-dimensional triangle is represented by the lower triangle of a pattern filled with integers starting from 1. For every value of ‘N’, help Sam to print the corresponding N-dimensional triangle.

**Example:**

**Input:** N = 3

**Output:**
```
1
1 2 
1 2 3
```

**Detailed Explanation:**

- **Input/Output Format:** The input is a single integer N. The output is an N-dimensional triangle where each row contains consecutive integers starting from 1.
- **Notes:** Each line of the output represents a row in the triangular pattern.
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
1
1 2 
1 2 3
```

**Explanation Of Sample Input 1:**

For N = 3, print the lower triangle of a 3x3 pattern with consecutive integers starting from 1 in each row.

**Sample Input 2:**
```
1
```

**Sample Output 2:**
```
1
```

Write a function to generate this pattern based on the given input N.