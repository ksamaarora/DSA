### Maximum Score from Subarray Minimums

#### Difficulty: Medium

#### Problem:
Given an array `arr[]` with 0-based indexing, select any two indices `i` and `j` such that `i < j`. From the subarray `arr[i...j]`, select the **smallest** and **second smallest** numbers, and add them. This sum will give you the **score** for that subarray. Return the **maximum possible score** across all subarrays of the array `arr[]`.

#### Example 1:

- **Input:** `arr[] = [4, 3, 1, 5, 6]`
- **Output:** `11`
- **Explanation:** 
  Subarrays with smallest and second smallest elements:
  - `[4, 3]`: smallest = 3, second smallest = 4 → sum = 4 + 3 = 7
  - `[4, 3, 1]`: smallest = 1, second smallest = 3 → sum = 3 + 1 = 4
  - `[4, 3, 1, 5]`: smallest = 1, second smallest = 3 → sum = 3 + 1 = 4
  - `[4, 3, 1, 5, 6]`: smallest = 1, second smallest = 3 → sum = 3 + 1 = 4
  - `[3, 1]`: smallest = 1, second smallest = 3 → sum = 3 + 1 = 4
  - `[3, 1, 5]`: smallest = 1, second smallest = 3 → sum = 3 + 1 = 4
  - `[3, 1, 5, 6]`: smallest = 1, second smallest = 3 → sum = 3 + 1 = 4
  - `[1, 5]`: smallest = 1, second smallest = 5 → sum = 5 + 1 = 6
  - `[1, 5, 6]`: smallest = 1, second smallest = 5 → sum = 5 + 1 = 6
  - `[5, 6]`: smallest = 5, second smallest = 6 → sum = 5 + 6 = 11

  The maximum score among all subarrays is `11` from the subarray `[5, 6]`.

#### Example 2:

- **Input:** `arr[] = [5, 4, 3, 1, 6]`
- **Output:** `9`

#### Constraints:
- `2 ≤ arr.size ≤ 10^5`
- `1 ≤ arr[i] ≤ 10^6`

#### Expected Time Complexity:
- **O(n)**

#### Expected Auxiliary Space:
- **O(1)**

