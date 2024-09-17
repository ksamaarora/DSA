### Union of Two Sorted Arrays

**Difficulty:** Medium  
**Accuracy:** 31.39%  
**Submissions:** 313K+  
**Points:** 4  

---

**Problem Statement:**

Given two sorted arrays of sizes `n` and `m` respectively, find their union. The union of two arrays can be defined as the set of common and distinct elements in both arrays. Return the elements in sorted order.

---

**Example 1:**

- **Input:**  
  `n = 5, arr1[] = {1, 2, 3, 4, 5}`  
  `m = 5, arr2[] = {1, 2, 3, 6, 7}`  
- **Output:**  
  `1 2 3 4 5 6 7`  
- **Explanation:**  
  Distinct elements including both arrays are: `1 2 3 4 5 6 7`.

**Example 2:**

- **Input:**  
  `n = 5, arr1[] = {2, 2, 3, 4, 5}`  
  `m = 5, arr2[] = {1, 1, 2, 3, 4}`  
- **Output:**  
  `1 2 3 4 5`  
- **Explanation:**  
  Distinct elements including both arrays are: `1 2 3 4 5`.

**Example 3:**

- **Input:**  
  `n = 5, arr1[] = {1, 1, 1, 1, 1}`  
  `m = 5, arr2[] = {2, 2, 2, 2, 2}`  
- **Output:**  
  `1 2`  
- **Explanation:**  
  Distinct elements including both arrays are: `1 2`.

---

**Your Task:** 

You do not need to read input or print anything. Complete the function `findUnion()` that takes two arrays `arr1[]`, `arr2[]`, and their sizes `n` and `m` as input parameters and returns a list containing the union of the two arrays.

---

**Expected Time Complexity:** O(n + m)  
**Expected Auxiliary Space:** O(n + m)

---

**Constraints:**

- `1 <= n, m <= 10^5`
- `-10^9 <= arr1[i], arr2[i] <= 10^9`
