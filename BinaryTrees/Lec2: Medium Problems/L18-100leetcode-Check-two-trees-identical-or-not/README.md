https://leetcode.com/problems/same-tree/

---

### LeetCode Challenge: Same Tree (Easy)

In this challenge, we are asked to determine whether two binary trees are identical. The problem is defined as follows:

**Problem Statement:**

Given the roots of two binary trees `p` and `q`, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same values.

**Examples:**

- **Example 1:**

    ```python
    Input: p = [1,2,3], q = [1,2,3]
    Output: true
    ```

- **Example 2:**

    ```python
    Input: p = [1,2], q = [1,null,2]
    Output: false
    ```

- **Example 3:**

    ```python
    Input: p = [1,2,1], q = [1,1,2]
    Output: false
    ```

**Constraints:**

- The number of nodes in both trees is in the range `[0, 100]`.
- The value of each node lies within the range `[-10^4, 10^4]`.
