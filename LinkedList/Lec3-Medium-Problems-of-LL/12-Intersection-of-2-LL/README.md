https://leetcode.com/problems/intersection-of-two-linked-lists/

### **160. Intersection of Two Linked Lists (Easy)**

Given the heads of two singly linked lists, `headA` and `headB`, return the node at which the two lists intersect. If the two linked lists have no intersection, return `null`.

The problem guarantees that there are no cycles in the entire linked structure.

### Custom Judge:

- **intersectVal**: The value of the node where the intersection occurs. This is `0` if there is no intersection.
- **listA**: The first linked list.
- **listB**: The second linked list.
- **skipA**: The number of nodes to skip ahead in `listA` (starting from the head) to reach the intersection node.
- **skipB**: The number of nodes to skip ahead in `listB` (starting from the head) to reach the intersection node.

The judge will create the linked structure based on these inputs and pass the two heads, `headA` and `headB`, to your function. If your solution correctly returns the intersected node, it will be accepted.

### Example 1:

```
Input:
intersectVal = 8, 
listA = [4, 1, 8, 4, 5], 
listB = [5, 6, 1, 8, 4, 5], 
skipA = 2, skipB = 3

Output: Intersected at '8'
```

**Explanation**: The intersected node’s value is `8`. From `headA`, the list is [4, 1, 8, 4, 5] and from `headB`, the list is [5, 6, 1, 8, 4, 5]. There are 2 nodes before the intersection in `listA`, and 3 nodes before the intersection in `listB`.

---

### Example 2:

```
Input:
intersectVal = 2, 
listA = [1, 9, 1, 2, 4], 
listB = [3, 2, 4], 
skipA = 3, skipB = 1

Output: Intersected at '2'
```

**Explanation**: The intersected node’s value is `2`. From `headA`, the list is [1, 9, 1, 2, 4] and from `headB`, the list is [3, 2, 4]. There are 3 nodes before the intersection in `listA`, and 1 node before the intersection in `listB`.

---

### Example 3:

```
Input:
intersectVal = 0, 
listA = [2, 6, 4], 
listB = [1, 5], 
skipA = 3, skipB = 2

Output: No intersection
```

**Explanation**: The two lists do not intersect, so return `null`.

---

### Constraints:

- The number of nodes in `listA` is `m`, and the number of nodes in `listB` is `n`.
- `1 <= m, n <= 30,000`
- `1 <= Node.val <= 100,000`
- `0 <= skipA < m`
- `0 <= skipB < n`
- `intersectVal` is `0` if the two lists do not intersect.
- `intersectVal == listA[skipA] == listB[skipB]` if the lists intersect.

### Follow-up:

Could you write a solution that runs in **O(m + n)** time and uses only **O(1) memory**?
