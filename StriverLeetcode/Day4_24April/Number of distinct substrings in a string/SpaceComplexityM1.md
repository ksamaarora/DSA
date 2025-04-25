### 📦 **Variables Used**
- `n` → integer → **O(1)**
- `str` → at most length `n` → **O(n)** (but reused per outer loop iteration)
- `substrings` → `set<string>` → stores **all distinct substrings** → this is where most memory is used

---

### 🔍 Key Insight
You're storing **every distinct substring** of the input string `s`.  

For a string of length `n`, the **total number of substrings** is:
\[
\frac{n(n+1)}{2}
\]

In the **worst case** (like when all characters are unique), **all substrings will be distinct**.

So:

- Number of substrings = **O(n²)**
- Average length of substrings = **O(n)** → because substrings vary from 1 to n characters

Each substring is a `string` object, so the **total memory** used by the `set<string>` is:

\[
\text{O}(n^2 \cdot n) = \text{O}(n^3)
\]

---

### ✅ Final Space Complexity

**Space Complexity: O(n³)** in the worst case (if all substrings are distinct).

---

### 🔁 Can it be improved?
Yes — for large `n`, you’d typically use a **Trie**, **Suffix Array**, or **Suffix Automaton** to reduce space:

- **Trie:** O(n²) space (avoids storing repeated prefixes)
- **Suffix Automaton:** O(n) space (optimal for substring queries)

Let me know if you want a version using a Trie or Suffix Automaton!