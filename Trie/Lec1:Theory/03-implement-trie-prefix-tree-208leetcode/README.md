### **Implement Trie (Prefix Tree)**  

A **trie** (pronounced as "try") or **prefix tree** is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. It is commonly used in applications such as **autocomplete** and **spell checking**.  

You need to implement the `Trie` class with the following methods:  

- `Trie()`: Initializes the trie object.  
- `void insert(String word)`: Inserts the string `word` into the trie.  
- `boolean search(String word)`: Returns `true` if the string `word` exists in the trie (i.e., was inserted before), otherwise returns `false`.  
- `boolean startsWith(String prefix)`: Returns `true` if there is any previously inserted string in the trie that starts with the given `prefix`, otherwise returns `false`.  

### **Example 1:**  
#### **Input:**  
```  
["Trie", "insert", "search", "search", "startsWith", "insert", "search"]  
[[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]  
```  
#### **Output:**  
```  
[null, null, true, false, true, null, true]  
```  

#### **Explanation:**  
```java
Trie trie = new Trie();
trie.insert("apple");
trie.search("apple");   // Returns true
trie.search("app");     // Returns false
trie.startsWith("app"); // Returns true
trie.insert("app");
trie.search("app");     // Returns true
```  

### **Constraints:**  
- \( 1 \leq \) `word.length`, `prefix.length` \( \leq 2000 \)  
- `word` and `prefix` consist only of **lowercase English letters**.  
- At most **30,000** calls in total will be made to `insert`, `search`, and `startsWith`.  

---