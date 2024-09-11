### **Selection Sort**
**Difficulty:** Easy  
**Accuracy:** 64.33%  
**Submissions:** 133K+  
**Points:** 2

---

#### **Problem Statement:**
Given an unsorted array of size `N`, use **selection sort** to sort the array `arr[]` in increasing order.

---

#### **Examples:**

**Example 1:**

**Input:**  
```
N = 5  
arr[] = {4, 1, 3, 9, 7}
```

**Output:**  
```
1 3 4 7 9
```

**Explanation:**  
Maintain sorted (in bold) and unsorted subarrays:  
- Select 1: Array becomes `{1, 4, 3, 9, 7}`.  
- Select 3: Array becomes `{1, 3, 4, 9, 7}`.  
- Select 4: Array becomes `{1, 3, 4, 9, 7}`.  
- Select 7: Array becomes `{1, 3, 4, 7, 9}`.  
- Select 9: Array becomes `{1, 3, 4, 7, 9}`.

---

**Example 2:**

**Input:**  
```
N = 10  
arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
```

**Output:**  
```
1 2 3 4 5 6 7 8 9 10
```

---

#### **Your Task:**  
You do not need to read input or print anything. Complete the following functions:

- **`select(arr[], i)`**: This function takes the array and the starting point of the unsorted subarray (`i`) as input and returns the selected element for each iteration of selection sort.
- **`selectionSort(arr[], N)`**: This function takes the array and its size and sorts the array using selection sort.

---

#### **Expected Time Complexity:**  
- O(N²)

#### **Expected Auxiliary Space:**  
- O(1)

---

#### **Constraints:**
- 1 ≤ N ≤ 10³