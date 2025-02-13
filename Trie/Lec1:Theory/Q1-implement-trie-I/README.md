### **Problem Statement: Implement Trie**
**Difficulty:** Hard  
**Success Rate:** 120/120  
**Average Time to Solve:** 41 minutes  
**Upvotes:** 227  
**Asked in Companies:** Yes  

---

### **Description**
Implement a **Trie (Prefix Tree)** data structure that supports the following operations:  

1. **insert(word)** → Inserts the string `"word"` into the Trie.  
2. **search(word)** → Returns `true` if the string `"word"` is present in the Trie; otherwise, returns `false`.  
3. **startsWith(prefix)** → Returns `true` if there exists any string in the Trie that starts with the given `"prefix"`; otherwise, returns `false`.  

### **Query Types**
Each query has a **type** and a **word**:
1. **Type 1:** Insert a word into the Trie  
   - Format: `1 word`
2. **Type 2:** Check if a word exists in the Trie  
   - Format: `2 word`
3. **Type 3:** Check if any word starts with the given prefix  
   - Format: `3 word`

---

### **Constraints**
- \( 1 \leq Q \leq 50,000 \) (Number of queries)
- \( 1 \leq W \leq 10 \) (Length of each word)
- All words consist only of lowercase English letters (`a-z`).

---

### **Input Format**
- First line contains an integer `Q`, the number of queries.  
- The next `Q` lines contain queries in the format `type word`.

---

### **Output Format**
For each **Type 2** and **Type 3** query:
- Print `"true"` if the condition holds.
- Print `"false"` otherwise.

---

### **Example 1**
#### **Input**
```
5
1 hello
1 help
2 help
3 hel
2 hel
```
#### **Output**
```
true
true
false
```
#### **Explanation**
| Query No. | Query   | Explanation |
|-----------|---------|-------------|
| 1         | `1 hello` | Inserts `"hello"` into the Trie. |
| 2         | `1 help` | Inserts `"help"` into the Trie. |
| 3         | `2 help` | `"help"` is present → Print `"true"`. |
| 4         | `3 hel` | `"hello"` and `"help"` start with `"hel"` → Print `"true"`. |
| 5         | `2 hel` | `"hel"` itself is **not** a stored word → Print `"false"`. |

---

### **Example 2**
#### **Input**
```
10
1 aaaa
1 aaaaaa
1 bcd
2 aaaaa
3 aaaaa
3 bc
2 bc
1 bc
3 bcda
2 bc
```
#### **Output**
```
false
true
true
false
false
true
```
#### **Explanation**
| Query No. | Query   | Explanation |
|-----------|---------|-------------|
| 1         | `1 aaaa` | Inserts `"aaaa"` into the Trie. |
| 2         | `1 aaaaaa` | Inserts `"aaaaaa"` into the Trie. |
| 3         | `1 bcd` | Inserts `"bcd"` into the Trie. |
| 4         | `2 aaaaa` | `"aaaaa"` is **not** a stored word → Print `"false"`. |
| 5         | `3 aaaaa` | `"aaaaaa"` starts with `"aaaaa"` → Print `"true"`. |
| 6         | `3 bc` | `"bcd"` starts with `"bc"` → Print `"true"`. |
| 7         | `2 bc` | `"bc"` is **not** a stored word → Print `"false"`. |
| 8         | `1 bc` | Inserts `"bc"` into the Trie. |
| 9         | `3 bcda` | No word starts with `"bcda"` → Print `"false"`. |
| 10        | `2 bc` | `"bc"` is present → Print `"true"`. |

---

### **Expected Time Complexity**
- **Insert:** \( O(W) \) per word  
- **Search:** \( O(W) \) per word  
- **StartsWith:** \( O(W) \) per prefix  

Since \( W \) (word length) is at most 10, operations are very efficient.

---