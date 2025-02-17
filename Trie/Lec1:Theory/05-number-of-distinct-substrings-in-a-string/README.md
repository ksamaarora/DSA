### **Count Distinct Substrings**  

#### **Problem Statement**  
Given a string **'S'**, return the number of distinct substrings (including the empty substring) of the given string. You should implement the program using a **Trie**.  

#### **Note:**  
A string **'B'** is a substring of a string **'A'** if **'B'** can be obtained by deleting several characters (possibly none) from the start of **'A'** and several characters (possibly none) from the end of **'A'**.  

Two strings **'X'** and **'Y'** are considered **different** if there is at least one index **'i'** such that **X[i] != Y[i]**.  

---

### **Constraints**  
- **1 ≤ T ≤ 5**  
- **1 ≤ |S| ≤ 10³**  
- **S contains only lowercase English letters.**  
- **Time Limit: 1 sec**  

---

### **Sample Input 1**  
```
2
sds
abc
```
### **Sample Output 1**  
```
6
7
```
### **Explanation of Sample Input 1**  
#### **Test Case 1: `"sds"`**  
The **6 distinct substrings** are:  
**{ "", "s", "d", "sd", "ds", "sds" }**  

#### **Test Case 2: `"abc"`**  
The **7 distinct substrings** are:  
**{ "", "a", "b", "c", "ab", "bc", "abc" }**  

---

### **Sample Input 2**  
```
2
aa
abab
```
### **Sample Output 2**  
```
3
8
```
### **Explanation of Sample Input 2**  
#### **Test Case 1: `"aa"`**  
The **3 distinct substrings** are:  
**{ "", "a", "aa" }**  

#### **Test Case 2: `"abab"`**  
The **8 distinct substrings** are:  
**{ "", "a", "b", "ab", "ba", "aba", "bab", "abab" }**  

---

### **Hints**  
1. Can you think of a data structure that can store the distinct substrings efficiently?  
2. Can you use the fact that every **substring** of **S** is a **prefix** of some **suffix** of S?  
3. Try inserting **every suffix** of the string into a **Trie**.