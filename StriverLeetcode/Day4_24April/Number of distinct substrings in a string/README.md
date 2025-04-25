## 🔢 Problem: Number of Distinct Substrings in a String

**Difficulty:** 💥 Hard  
**Points:** 100  

---

### 📄 Problem Statement

Given a string `s`, determine the **number of distinct substrings**, **including the empty substring**.

A string `B` is a **substring** of a string `A` if `B` can be obtained by deleting several characters (possibly none) from the **start** of `A` and several characters (possibly none) from the **end** of `A`.

Two substrings are considered **different** if there is **at least one index `i`** such that `X[i] != Y[i]`.

---

### 📥 Input
- A single string `s` consisting of lowercase English letters.

---

### 📤 Output
- Return an integer representing the **number of distinct substrings**, including the empty string.

---

### 🧪 Examples

#### Example 1:
```
Input:  s = "aba"
Output: 6

Explanation:
Distinct substrings are: "", "a", "b", "ab", "ba", "aba"
```

#### Example 2:
```
Input:  s = "abc"
Output: 7

Explanation:
Distinct substrings are: "", "a", "b", "c", "ab", "bc", "abc"
```

---

### 🧠 Constraints
- `1 <= s.length <= 10^4` (for brute-force approaches, be cautious of performance)
- Only lowercase English letters (`'a'` to `'z'`)
