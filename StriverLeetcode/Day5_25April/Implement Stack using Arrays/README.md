## Problem: Implement a Stack Using an Array

### Description
Design and implement a **stack** data structure using a fixed‐size array. The stack must support the following operations in **O(1)** time complexity:

1. **`push(x)`**  
   Insert element `x` onto the top of the stack.

2. **`pop()`**  
   Remove and return the topmost element of the stack.  
   - If the stack is empty, return a sentinel value (e.g., `-1`) or throw an exception, as per your design.

3. **`top()`**  
   Return (but do not remove) the topmost element of the stack.  
   - If the stack is empty, return a sentinel value or throw an exception.

4. **`size()`**  
   Return the number of elements currently in the stack.

You may assume that the stack’s capacity is provided at initialization and is large enough for all test operations.

---

### Interface (C++-Style)

```cpp
class Stack {
public:
    // Initialize the stack with the given capacity.
    Stack(int capacity);

    // Pushes element x onto the stack.
    void push(int x);

    // Removes and returns the top element of the stack.
    int pop();

    // Returns the top element without removing it.
    int top() const;

    // Returns the current number of elements in the stack.
    int size() const;
};
```

---

### Example

```plaintext
// Initialize an empty stack with capacity 10.
Stack stk(10);

// Perform operations:
stk.push(6);
stk.push(3);
stk.push(7);

stk.top();    // → 7
stk.pop();    // → 7
stk.top();    // → 3
stk.size();   // → 2
```

**Visualization:**
```
After push(6): [6]
After push(3): [6, 3]
After push(7): [6, 3, 7]   ← top

stk.top()  → 7
stk.pop()  → removes 7, now [6, 3]
stk.top()  → 3
stk.size() → 2
```

---

### Constraints
- All operations must run in **O(1)** time.
- `0 ≤ x ≤ 10^9`.
- Capacity is guaranteed to cover all pushes in the test cases.
- Handling of underflow (pop/top on empty) may use a sentinel return value or an exception.