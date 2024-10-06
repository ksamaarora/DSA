### 2149. Rearrange Array Elements by Sign

#### Difficulty: Medium

#### Problem:
You are given a 0-indexed integer array `nums` of **even length** consisting of an **equal number** of positive and negative integers.

You need to return a new array that satisfies the following conditions:
1. Every consecutive pair of integers in the array should have **opposite signs**.
2. For all integers with the same sign, the order of their appearance in `nums` should be preserved.
3. The rearranged array should begin with a **positive** integer.

Return the modified array after rearranging the elements to satisfy these conditions.

#### Example 1:
- **Input:** `nums = [3,1,-2,-5,2,-4]`
- **Output:** `[3,-2,1,-5,2,-4]`
- **Explanation:** 
  - The positive integers in `nums` are `[3,1,2]`.
  - The negative integers are `[-2,-5,-4]`.
  - The only valid way to rearrange them with opposite signs while preserving the original order is `[3,-2,1,-5,2,-4]`.

#### Example 2:
- **Input:** `nums = [-1,1]`
- **Output:** `[1,-1]`
- **Explanation:** 
  - `1` is the only positive integer and `-1` is the only negative integer in `nums`.
  - The rearranged array is `[1,-1]`.

#### Constraints:
- `2 <= nums.length <= 2 * 10^5`
- `nums.length` is even.
- `1 <= |nums[i]| <= 10^5`
- `nums` consists of an **equal number** of positive and negative integers.
