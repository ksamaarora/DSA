https://www.geeksforgeeks.org/problems/count-digits5716/1

Here is the properly formatted version of the problem:

---

### Problem Statement:
Given a number `n`, count the number of digits in `n` which **evenly divide** `n`. Return an integer representing the total number of digits that divide `n` evenly.

### Definition:
- **Evenly divides** means that when `n` is divided by the digit, it leaves a remainder of `0`. 

### Input:
- **n**: A positive integer.

### Output:
- Return an integer representing how many digits in `n` divide it evenly.

### Example 1:
- **Input**:  
  `n = 12`  
- **Output**:  
  `2`  
- **Explanation**:  
  Both digits `1` and `2` divide `12` evenly because `12 % 1 == 0` and `12 % 2 == 0`.

### Example 2:
- **Input**:  
  `n = 2446`  
- **Output**:  
  `1`  
- **Explanation**:  
  Among the digits `2`, `4`, `4`, and `6`, only `2` divides `2446` evenly (i.e., `2446 % 2 == 0`), while `4` and `6` do not.

### Constraints:
- **Expected Time Complexity**: \(O(\text{number of digits in } n)\)
- **Expected Space Complexity**: \(O(1)\)
