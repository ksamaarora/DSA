## 35. Implement Trie – II

### Problem Statement

Design and implement a Trie (prefix tree) data structure that supports the following operations in (amortized) O(L) time, where L is the length of the word or prefix:

1. **`insert(word)`**  
   Insert the string `word` into the Trie.

2. **`countWordsEqualTo(word)`**  
   Return the number of times the string `word` has been inserted into the Trie.

3. **`countWordsStartingWith(prefix)`**  
   Return how many inserted words have the given `prefix`.

4. **`erase(word)`**  
   Remove one occurrence of the string `word` from the Trie.  
   *It is guaranteed that `erase(word)` will only be called if `word` is present at least once in the Trie.*

> **Memory management:** If your implementation uses dynamic allocation for nodes, be sure to free any allocated memory when it’s no longer needed.

---

### Example

```text
Operations:
  insert("apple")
  insert("apps")
  insert("apxl")

  countWordsEqualTo("apple")       → ?
  countWordsStartingWith("app")    → ?
  countWordsStartingWith("ap")     → ?

  erase("apxl")
```

**Output:**

```text
Inserted "apple"
Inserted "apps"
Inserted "apxl"

countWordsEqualTo("apple")       → 1
countWordsStartingWith("app")    → 2     (matches "apple", "apps")
countWordsStartingWith("ap")     → 3     (matches "apple", "apps", "apxl")

Erased "apxl"
```

**Explanation:**

- After three `insert` calls, the Trie contains:
  - `"apple"` (1 time)
  - `"apps"` (1 time)
  - `"apxl"` (1 time)

- `countWordsEqualTo("apple")` returns 1, since “apple” was inserted once.

- `countWordsStartingWith("app")` returns 2, for “apple” and “apps”.

- `countWordsStartingWith("ap")` returns 3, for “apple”, “apps”, and “apxl”.

- After `erase("apxl")`, “apxl” no longer contributes to any counts.

---

### Constraints

- `1 <= word.length, prefix.length <= 2000`
- All strings consist only of lowercase English letters (`'a'`–`'z'`).
- Total number of calls to all operations will not exceed `3 * 10⁴`.
```