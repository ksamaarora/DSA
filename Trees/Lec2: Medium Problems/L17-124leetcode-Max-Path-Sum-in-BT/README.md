https://leetcode.com/problems/binary-tree-maximum-path-sum/

Refer to link for Binary Tree sample picture 

[Refer to yt video for explanantion](https://www.youtube.com/watch?v=WszrfSwMz58&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=89) 

## LeetCode Problem 124: Binary Tree Maximum Path Sum

**Difficulty:** Hard

### Problem Statement

A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence is connected by an edge. A node can appear in the sequence at most once. Importantly, the path does not need to pass through the root of the tree.

The path sum is the sum of the node values along a path.

Given the `root` of a binary tree, return the maximum path sum of any non-empty path.

### Examples

**Example 1:**

**Input:** 
```
root = [1,2,3]
```
**Output:** 
```
6
```
**Explanation:** The optimal path is `2 -> 1 -> 3` with a path sum of `2 + 1 + 3 = 6`.

**Example 2:**

**Input:** 
```
root = [-10,9,20,null,null,15,7]
```
**Output:** 
```
42
```
**Explanation:** The optimal path is `15 -> 20 -> 7` with a path sum of `15 + 20 + 7 = 42`.

### Constraints

- The number of nodes in the tree is in the range `[1, 30,000]`.
- The value of each node is between `-1000` and `1000`.