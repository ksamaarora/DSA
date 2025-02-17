### **Problem Statement**  
Ninja developed a love for **arrays and strings**, so this time his teacher gave him an **array of strings** `A` of size `N`. Each element of this array is a **string**.  

The teacher previously taught Ninja about **prefixes**, so now he wants to test his knowledge.  

A string is called a **complete string** if **every prefix** of this string is also present in the array `A`. Ninja is challenged to find the **longest complete string** in the array `A`.  

- If there are **multiple strings with the same length**, return the **lexicographically smallest one**.  
- If **no string** exists, return `"None"`.

---

### **Definitions**  
A **string `P` is lexicographically smaller** than string `Q`, if:  
1. There exists some index `i` such that for all `j < i`, `P[j] = Q[j]` and `P[i] < Q[i]`.  
   - Example: `"ninja" < "noder"`.  
2. If `P` is a **prefix** of string `Q`, e.g., `"code" < "coder"`.  

---

### **Example 1**  

#### **Input:**  
```
N = 4  
A = ["ab", "abc", "a", "bp"]
```

#### **Explanation:**  
- `"a"` is a valid complete string (its only prefix `"a"` exists in `A`).  
- `"ab"` is valid because both `"a"` and `"ab"` exist in `A`.  
- `"bp"` is **not** valid because its prefix `"b"` is missing.  
- `"abc"` is valid since `"a"`, `"ab"`, and `"abc"` exist in `A`.  

Since `"abc"` is the **longest valid complete string**, it is the **final answer**.

#### **Output:**  
```
abc
```

---

### **Example 2**  

#### **Input:**  
```
T = 2  
6  
n ni nin ninj ninja ninga  
2  
ab bc  
```

#### **Output:**  
```
ninja  
None  
```

#### **Explanation:**  
**Test Case 1:**  
- `"ninja"` is valid since all its prefixes `"n"`, `"ni"`, `"nin"`, `"ninj"`, and `"ninja"` exist.  
- `"ninga"` is **not** valid because `"ning"` is missing.  
- The longest valid string is `"ninja"`.  

**Test Case 2:**  
- `"ab"` is **not** valid since `"a"` is missing.  
- `"bc"` is **not** valid since `"b"` is missing.  
- No valid strings → Output `"None"`.  

---

### **Constraints**  
- \(1 \leq T \leq 10\)  (Number of test cases)  
- \(1 \leq N \leq 10^5\)  (Number of strings in `A`)  
- \(1 \leq A[i].length \leq 10^5\)  (Length of each string)  
- `A[i]` consists **only of lowercase English letters**.  
- **Sum of all string lengths across test cases does not exceed \(10^5\)**.  

⏳ **Time Limit:** `1 sec`
