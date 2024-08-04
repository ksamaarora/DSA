## Frequencies of Limited Range Array Elements

You are given an array `arr[]` containing `n` positive integers. These integers can be from `1` to `p`, and some numbers may be repeated or absent. Your task is to count the frequency of all numbers that lie in the range `1` to `n`. You need to modify the array in-place, such that `arr[i] = frequency(i+1)` (assuming 1-based indexing).

### Note:
Elements greater than `n` in the array can be ignored for counting. Read the explanation of the examples for better clarification.

### Examples

#### Example 1
**Input:**  
`n = 5`  
`arr[] = {2, 3, 2, 3, 5}`  
`p = 5`  

**Output:**  
`0 2 2 0 1`

**Explanation:**  
Counting frequencies of each array element:  
- 1 occurring 0 times  
- 2 occurring 2 times  
- 3 occurring 2 times  
- 4 occurring 0 times  
- 5 occurring 1 time

#### Example 2
**Input:**  
`n = 4`  
`arr[] = {3, 3, 3, 3}`  
`p = 3`

**Output:**  
`0 0 4 0`

**Explanation:**  
Counting frequencies of each array element:  
- 1 occurring 0 times  
- 2 occurring 0 times  
- 3 occurring 4 times  
- 4 occurring 0 times

#### Example 3
**Input:**  
`n = 2`  
`arr[] = {8, 9}`  
`p = 9`

**Output:**  
`0 0`

**Explanation:**  
Counting frequencies of each array element:  
- 1 occurring 0 times  
- 2 occurring 0 times  

Since `p = 9`, but there are no indices beyond `n`, values greater than `n` are ignored.

### Your Task:
You don't need to read input or print anything. Complete the function `frequencyCount()` that takes the array `arr`, and integers `n`, and `p` as input parameters and modifies the array in place to denote the frequency count of each element from 1 to n.

### Expected Time Complexity:
- O(n)

### Expected Auxiliary Space:
- O(1)

### Constraints:
- \(1 \leq n \leq 10^5\)
- \(1 \leq p \leq 4 \times 10^4\)
- \(1 \leq arr[i] \leq p\)
