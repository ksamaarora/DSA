### **Quest: Remove Duplicates from Sorted Array**

**Difficulty:** Easy

#### **Objective:**
Given a sorted integer array `nums`, remove the duplicates **in-place** so that each unique element appears only once. The relative order of the elements must remain the same. After removing the duplicates, return the number of unique elements (`k`).

**Requirements:**

1. Modify the array `nums` so that the first `k` elements contain the unique elements in the original order.
2. The elements beyond `k` in `nums` are not important.
3. Return `k`, the number of unique elements.

**Custom Judge:**

The judge will validate your solution with the following code:

```java
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // Expected array with unique elements

int k = removeDuplicates(nums); // Call your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```
If all assertions pass, then your solution is correct.

#### **Examples:**

**Example 1:**
- **Input:** `nums = [1,1,2]`
- **Output:** `2, nums = [1,2,_]`
- **Explanation:** The function returns `k = 2`, with the first two elements being `1` and `2`. The underscores represent the irrelevant elements.

**Example 2:**
- **Input:** `nums = [0,0,1,1,1,2,2,3,3,4]`
- **Output:** `5, nums = [0,1,2,3,4,_,_,_,_,_]`
- **Explanation:** The function returns `k = 5`, with the first five elements being `0, 1, 2, 3, and 4`.

#### **Constraints:**

- `1 <= nums.length <= 30,000`
- `-100 <= nums[i] <= 100`
- `nums` is sorted in non-decreasing order.

---