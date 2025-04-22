### **208. Implement Trie (Prefix Tree)**  
**Difficulty:** Medium  

A **Trie** (pronounced as "try") or **prefix tree** is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. It has various applications such as **autocomplete** and **spellchecker**.

---

### **Implement the `Trie` class:**

- `Trie()`  
  Initializes the Trie object.

- `void insert(String word)`  
  Inserts the string `word` into the Trie.

- `boolean search(String word)`  
  Returns `true` if the string `word` is in the Trie (i.e., was inserted before), and `false` otherwise.

- `boolean startsWith(String prefix)`  
  Returns `true` if there is any previously inserted string that starts with the given `prefix`, and `false` otherwise.

---

### **Example:**

```text
Input:
["Trie", "insert", "search", "search", "startsWith", "insert", "search"]
[[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]

Output:
[null, null, true, false, true, null, true]
```

**Explanation:**

```java
Trie trie = new Trie();
trie.insert("apple");
trie.search("apple");   // returns true
trie.search("app");     // returns false
trie.startsWith("app"); // returns true
trie.insert("app");
trie.search("app");     // returns true
```

---

### **Constraints:**

- `1 <= word.length, prefix.length <= 2000`  
- `word` and `prefix` consist only of lowercase English letters.  
- At most `3 * 10^4` calls will be made to `insert`, `search`, and `startsWith`.
