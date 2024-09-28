### Problem Statement:

You are given an array `maximumHeight` where each element represents the maximum possible height of a tower at a particular index. Your task is to assign heights to these towers in such a way that:
- Each tower has a unique height.
- The height of each tower does not exceed the corresponding value in `maximumHeight`.
- The goal is to maximize the total sum of the heights of all towers.

If it is impossible to assign unique heights while adhering to the constraints, return `-1`. Otherwise, return the maximum possible total height of the towers.

### Example 1:
- **Input:** `maximumHeight = [2, 2, 1]`
- **Output:** `-1`
- **Explanation:** 
  - It's impossible to assign unique heights to the towers since the maximum allowable heights are too small to ensure uniqueness.

### Example 2:
- **Input:** `maximumHeight = [15, 10, 20]`
- **Output:** `33`
- **Explanation:** 
  - One possible assignment is to choose the heights `[15, 10, 8]`, which maximizes the total sum of heights (15 + 10 + 8 = 33), while maintaining uniqueness and staying below the respective maximum heights.

### Example 3:
- **Input:** `maximumHeight = [1, 2, 3, 4, 3]`
- **Output:** `13`
- **Explanation:** 
  - One possible assignment is `[1, 2, 3, 4, 3]`, which already satisfies the uniqueness and maximum height constraints.

### Constraints:
- `1 <= maximumHeight.length <= 100`
- `1 <= maximumHeight[i] <= 10^9`
- You must assign a unique height to each tower that does not exceed the corresponding value in `maximumHeight`.

---

### Task:
Your goal is to implement an algorithm that either returns the maximum total height of the towers, or returns `-1` if it is impossible to assign unique heights.
