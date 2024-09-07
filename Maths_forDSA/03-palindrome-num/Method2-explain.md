### Key Points:
- A **palindrome** is a number that reads the same forward and backward (e.g., `121` or `1331`).
- The algorithm works by extracting the leftmost and rightmost digits and comparing them at each step. If any pair of digits doesn't match, the number is not a palindrome, and the function returns `false`.

### Code Breakdown:

```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false; // Negative numbers are not palindromes
        if(x == 0) return true;  // 0 is a palindrome
        
        // Step 1: Calculate the number of digits in the number
        int n = (int)log10(x) + 1;

        // Step 2: Initialize a counter to compare digits from both ends
        int i = 0;

        // Step 3: Loop through half of the number
        while(i <= n / 2) {
            // Step 4: Get the leftmost digit
            int left = (x / (int)pow(10, n - i - 1)) % 10;

            // Step 5: Get the rightmost digit
            int right = (x / (int)pow(10, i)) % 10;

            // Step 6: Compare left and right digits
            if(left != right) return false; // If digits don't match, return false

            i++; // Move towards the middle
        }

        // Step 7: If all digits match, return true
        return true;
    }
};
```

### Explanation of Key Steps:

1. **Check for Negative Numbers and Zero:**
   ```cpp
   if(x < 0) return false;
   if(x == 0) return true;
   ```
   - Negative numbers can't be palindromes because the minus sign `-` isn't mirrored.
   - `0` is considered a palindrome because it reads the same forwards and backwards.

2. **Calculate the Number of Digits:**
   ```cpp
   int n = (int)log10(x) + 1;
   ```
   - The number of digits in the number is calculated using `log10(x)`. For example, for `x = 1234`, `log10(1234)` gives approximately `3.09`. Adding 1 gives `4`, which is the correct number of digits.
   - This is necessary because the algorithm needs to extract digits from both ends based on their position.

3. **Iterate Through Half the Number:**
   ```cpp
   while(i <= n / 2) {
   ```
   - This loop iterates through half of the digits (from the outermost to the middle) because a palindrome only needs to compare the left half with the right half.
   - `i` is a counter that starts at `0`, representing the leftmost and rightmost digit positions.

4. **Extract Leftmost and Rightmost Digits:**
   ```cpp
   int left = (x / (int)pow(10, n - i - 1)) % 10;
   int right = (x / (int)pow(10, i)) % 10;
   ```
   - **Leftmost digit**: We use the formula `(x / (int)pow(10, n - i - 1)) % 10` to extract the leftmost digit. For example, if `x = 1234` and `i = 0`, we get the leftmost digit `1`.
   - **Rightmost digit**: The rightmost digit is found using `(x / (int)pow(10, i)) % 10`. For example, if `x = 1234` and `i = 0`, the rightmost digit is `4`.

5. **Compare Digits:**
   ```cpp
   if(left != right) return false;
   ```
   - If the leftmost and rightmost digits don't match, the number is not a palindrome, so the function returns `false`.

6. **Move Towards the Middle:**
   ```cpp
   i++;
   ```
   - After comparing the digits, the loop continues by incrementing `i`, moving the comparison closer to the center of the number.

7. **Return `true` if All Digits Match:**
   ```cpp
   return true;
   ```
   - If all corresponding pairs of digits match, the function returns `true`, indicating that the number is a palindrome.

### Example Walkthrough:

Let's take an example `x = 1221`:

- **Step 1**: `n = log10(1221) + 1 = 4` (4 digits).
- **Step 2**: Start comparing digits from both ends.
  - **i = 0**:
    - Leftmost digit: `left = (1221 / (10^(4 - 0 - 1))) % 10 = (1221 / 1000) % 10 = 1`.
    - Rightmost digit: `right = (1221 / (10^0)) % 10 = 1221 % 10 = 1`.
    - They are equal, so continue.
  - **i = 1**:
    - Leftmost digit: `left = (1221 / (10^(4 - 1 - 1))) % 10 = (1221 / 100) % 10 = 2`.
    - Rightmost digit: `right = (1221 / (10^1)) % 10 = 122 % 10 = 2`.
    - They are equal, so continue.
- **Step 3**: Since all pairs of digits match, the function returns `true`.

Thus, `1221` is a palindrome.