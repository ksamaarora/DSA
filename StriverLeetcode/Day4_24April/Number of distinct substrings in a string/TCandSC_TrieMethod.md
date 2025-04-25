## Time Complexity  
You have two nested loops:

```cpp
for (int i = 0; i < n; ++i)         // n iterations
  for (int j = i; j < n; ++j) {     // on average ~n/2 iterations
    // O(1) work: containsKey, maybe put, pointer chase
  }
```

- Number of (i,j) pairs is \(\displaystyle\sum_{i=0}^{n-1}(n-i)=\tfrac{n(n+1)}2 = O(n^2)\).  
- Each step does only \(O(1)\) work (array-indexing and pointer ops).  

\[
\boxed{T(n)=O(n^2)}
\]

---

## Space Complexity  
Every time you discover a brand-new path in the trie you allocate one `Node`.  In the worst case (all characters distinct) you end up inserting **every** non-empty substring exactly once, which is
\[
\frac{n(n+1)}2 = O(n^2)
\]
nodes.  Each node holds an array of 26 pointers (a constant factor).

\[
\boxed{S(n)=O(n^2)}
\]

---

> **Bottom line:**  
> - **TC:** \(O(n^2)\)  
> - **SC:** \(O(n^2)\) (worst‐case)