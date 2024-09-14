## Problem Statement

You have been given an array `a` of `n` unique non-negative integers.

Find the second largest and second smallest element from the array.

Return the two elements (second largest and second smallest) as another array of size 2.

### Example

**Input:**
```
n = 5
a = [1, 2, 3, 4, 5]
```

**Output:**
```
[4, 2]
```

The second largest element after 5 is 4, and the second smallest element after 1 is 2.

### Detailed Explanation

#### Input/Output Format
- **Input:**
  - An integer `n`, the size of the array.
  - An array `a` of `n` unique non-negative integers.
- **Output:**
  - An array of size 2 containing the second largest and second smallest elements.

#### Notes
- The array `a` contains unique elements, so there are no duplicates.

#### Sample Input 1
```
4
3 4 5 2
```

#### Sample Output 1
```
4 3
```

**Explanation:**
The second largest element after 5 is 4, and the second smallest element after 2 is 3.

#### Sample Input 2
```
5
4 5 3 6 7
```

#### Sample Output 2
```
6 4
```

### Expected Time Complexity
- The solution should run in \(O(n)\) time, where `n` is the size of the input array `a`.

### Constraints
- \(2 \leq n \leq 10^5\)
- \(0 \leq a[i] \leq 10^9\)

### Time Limit
- 1 second

### Hints
1. Sort the array.
2. More efficiently, can you use the largest and smallest elements to find the required elements?
