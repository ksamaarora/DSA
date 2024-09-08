### **Find All Factorial Numbers Less Than or Equal to n**

**Difficulty:** Easy  
**Accuracy:** 48.96%  
**Submissions:** 75K+  
**Points:** 2

---

#### **Problem Statement:**

A number `n` is called a **factorial number** if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120, and so on.

Given a number `n`, the task is to return a list or vector of all factorial numbers that are smaller than or equal to `n`.

---

#### **Examples:**

- **Input:**  
  `n = 3`  
  **Output:**  
  `1 2`  
  **Explanation:**  
  The first factorial number is 1, which is less than or equal to `n`. The second factorial number is 2, which is also less than or equal to `n`. However, the third factorial number is 6, which is greater than `n`. So, the output is only `1` and `2`.

- **Input:**  
  `n = 6`  
  **Output:**  
  `1 2 6`  
  **Explanation:**  
  The first three factorial numbers (1, 2, and 6) are all less than or equal to `n`. However, the fourth factorial number, 24, is greater than `n`. So, the output includes only the first three factorial numbers.

---

#### **Expected Time Complexity:**
- `O(k)`, where `k` is the number of factorial numbers smaller than or equal to `n`.

#### **Expected Auxiliary Space:**
- `O(1)`, no extra space is required apart from the output list.

---

#### **Constraints:**
- `1 <= n <= 10^18`

