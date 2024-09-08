Here is a properly formatted version of the problem statement:

---

### **Problem Statement:**

You are given an array of integers. Your task is to reverse the array and print the reversed array.

---

### **Examples:**

**Example 1:**
- **Input:**  
  `N = 5, arr[] = {5, 4, 3, 2, 1}`
- **Output:**  
  `{1, 2, 3, 4, 5}`
- **Explanation:**  
  The order of the elements gets reversed. The first element (5) moves to the fifth position, the second element (4) moves to the fourth position, and so on.

**Example 2:**
- **Input:**  
  `N = 4, arr[] = {10, 20, 30, 40}`
- **Output:**  
  `{40, 30, 20, 10}`
- **Explanation:**  
  The order of the elements gets reversed. The first element (10) moves to the fourth position, the second element (20) moves to the third position, and so on.

---

### **Constraints:**
- `1 <= N <= 10^5` (where `N` is the size of the array)
- `-10^9 <= arr[i] <= 10^9` (each element of the array lies between these values)

---

### **Expected Time Complexity:**
- O(N), where `N` is the size of the array.

### **Expected Auxiliary Space:**
- O(1), no extra space is required other than the input array itself.

---

The task is to reverse the array in-place if possible and print the reversed array.