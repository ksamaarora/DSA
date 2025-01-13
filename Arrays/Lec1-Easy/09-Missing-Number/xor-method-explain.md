Let's use this example: 
Given array `nums = [3, 0, 1]`. We want to find the missing number in the range `0` to `3`.

1. **Set up variables**:
   - `xor1`: XOR of all numbers from `0` to `n`, where `n` is the length of the array.
   - `xor2`: XOR of all elements in `nums`.

2. **Calculate `xor1`** (the XOR of all numbers from `0` to `n`):
   - Here, `n = 3`, so we calculate XOR for `0, 1, 2, 3`:
     \[
     xor1 = 0 \oplus 1 \oplus 2 \oplus 3
     \]
     Let's compute it step-by-step:
     - \( 0 \oplus 1 = 1 \)
     - \( 1 \oplus 2 = 3 \)
     - \( 3 \oplus 3 = 0 \)

     So, `xor1 = 0`.

3. **Calculate `xor2`** (the XOR of all elements in the array `nums = [3, 0, 1]`):
   - We compute:
     \[
     xor2 = 3 \oplus 0 \oplus 1
     \]
     Step-by-step:
     - \( 3 \oplus 0 = 3 \)
     - \( 3 \oplus 1 = 2 \)

     So, `xor2 = 2`.

4. **Find the missing number**:
   - XOR `xor1` and `xor2`:
     \[
     missing = xor1 \oplus xor2 = 0 \oplus 2 = 2
     \]

   The missing number is `2`.

---

### Why This Works
Each number from `0` to `n` appears exactly once across `xor1` and `xor2`, except the missing number. When we XOR `xor1` and `xor2`, all matching numbers cancel out to `0`, leaving only the missing number as the result. 

This method is efficient, with a time complexity of \( O(n) \) and constant space complexity \( O(1) \).