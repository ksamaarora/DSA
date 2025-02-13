### **Problem Statement: Implement a Trie Data Structure**
Ninja needs to implement a **Trie** data structure that supports the following operations:

1. **`Trie()`** – Initializes the Trie.
2. **`insert("WORD")`** – Inserts the given string `"WORD"` into the Trie.
3. **`countWordsEqualTo("WORD")`** – Returns the number of times `"WORD"` appears in the Trie.
4. **`countWordsStartingWith("PREFIX")`** – Returns the number of words in the Trie that have `"PREFIX"` as a prefix.
5. **`erase("WORD")`** – Deletes one occurrence of `"WORD"` from the Trie.  
   - **Note**: It is guaranteed that `"WORD"` exists in the Trie before calling `erase("WORD")`.

Additionally, if dynamic memory allocation is used, all allocated memory should be released at the end of the implementation.

---

### **Input Format**
- The first line contains an integer **`T`** – the number of test cases.
- For each test case:
  - The first line contains an integer **`N`** – the number of operations to perform.
  - The next **`N`** lines contain one of the following operations:
    - `"insert WORD"` – Insert the string `"WORD"` into the Trie.
    - `"countWordsEqualTo WORD"` – Output the number of times `"WORD"` appears in the Trie.
    - `"countWordsStartingWith PREFIX"` – Output the number of words that start with `"PREFIX"`.
    - `"erase WORD"` – Delete one occurrence of `"WORD"` from the Trie.

---

### **Output Format**
- For each `countWordsEqualTo` or `countWordsStartingWith` query, print the result on a new line.

---

### **Constraints**
- \( 1 \leq T \leq 50 \) – Number of test cases.
- \( 1 \leq N \leq 10^4 \) – Number of operations in a single test case.
- `"WORD"` consists of lowercase English letters (`a-z`).
- \( 1 \leq |WORD| \leq 1000 \) – Length of `"WORD"`.
- **Time Limit:** 1 second.

---

### **Example 1**
#### **Input**
```
1
5
insert coding
insert ninja
countWordsEqualTo coding
countWordsStartingWith nin
erase coding
```
#### **Output**
```
1
1
```
#### **Explanation**
1. Insert `"coding"` into the Trie.
2. Insert `"ninja"` into the Trie.
3. `"coding"` is present once → Output **1**.
4. `"ninja"` starts with `"nin"` → Output **1**.
5. `"coding"` is deleted from the Trie.

---

### **Example 2**
#### **Input**
```
1
6
insert samsung
insert samsung
insert vivo
erase vivo
countWordsEqualTo samsung
countWordsStartingWith vi
```
#### **Output**
```
2
0
```
#### **Explanation**
1. Insert `"samsung"` into the Trie.
2. Insert `"samsung"` again.
3. Insert `"vivo"`.
4. Erase `"vivo"`.
5. `"samsung"` appears twice → Output **2**.
6. No word starts with `"vi"` → Output **0**.

---