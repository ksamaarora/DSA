### Sorted Array Search

**Difficulty:** Basic  
**Accuracy:** 48.03%  
**Submissions:** 266K+  
**Points:** 1  

---

**Problem Statement:**

Given an array `arr[]` sorted in ascending order of size `N` and an integer `K`. Check if `K` is present in the array or not.

---

**Example 1:**

- **Input:**  
  `N = 5, K = 6`  
  `arr[] = {1, 2, 3, 4, 6}`  
- **Output:**  
  `1`  
- **Explanation:**  
  Since `6` is present in the array at index `4` (0-based indexing), the output is `1`.

**Example 2:**

- **Input:**  
  `N = 5, K = 2`  
  `arr[] = {1, 3, 4, 5, 6}`  
- **Output:**  
  `-1`  
- **Explanation:**  
  Since `2` is not present in the array, the output is `-1`.

---

**Your Task:**

You don't need to read input or print anything. Complete the function `searchInSorted()` which takes the sorted array `arr[]`, its size `N`, and the element `K` as input parameters and returns `1` if `K` is present in the array, else it returns `-1`.

---

**Expected Time Complexity:** O(log N)  
**Expected Auxiliary Space:** O(1)

---

**Constraints:**

- `1 <= N <= 10^6`
- `1 <= K <= 10^6`
- `1 <= arr[i] <= 10^6`
