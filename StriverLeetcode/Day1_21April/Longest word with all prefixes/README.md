## 100. Longest Word With All Prefixes

**Difficulty:** Hard  
**Topic:** Strings / Trie / Hashing  

### Problem Statement

Given a string array `nums` of length `n`, a string is called a **complete string** if **every prefix** of that string is also present in the array `nums`.  
Return the longest complete string in the array.  
- If there are multiple answers of the same maximum length, return the **lexicographically smallest** one.  
- If **no** complete string exists, return `"None"` (without quotes).

### Hint

Build a data structure (e.g. a Trie or a hash set of prefixes) so that you can efficiently check, for each candidate word, whether **all of its prefixes** appear in `nums`.

### Examples

```text
Input: nums = ["n", "ni", "nin", "ninj", "ninja", "nil"]
Output: "ninja"

Explanation:
All prefixes of "ninja" — "n", "ni", "nin", "ninj", "ninja" — are present in the array, and "ninja" is the longest such word.
