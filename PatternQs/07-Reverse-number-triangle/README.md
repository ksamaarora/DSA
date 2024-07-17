## Problem Statement

Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Reverse N-Number Triangle.

**Example:**

**Input:** N = 3

**Output:**
```
1 2 3
1 2
1
```

**Detailed Explanation:**

- **Input/Output Format:** The input is a single integer N. The output is a pattern where each row starts with the number 1 and ends with the row number, forming a reverse triangle.
- **Notes:** Each line of the output represents a row in the reverse triangle pattern.
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
1 2 3
1 2
1
```

**Explanation Of Sample Input 1:**

For N = 3, the pattern forms a reverse triangle with numbers starting from 1 to the row number, decreasing row length by one each time.

**Sample Input 2:**
```
4
```

**Sample Output 2:**
```
1 2 3 4
1 2 3
1 2
1
```

**Sample Input 3:**
```
7
```

**Sample Output 3:**
```
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
```

Write a function to generate this pattern based on the given input N.