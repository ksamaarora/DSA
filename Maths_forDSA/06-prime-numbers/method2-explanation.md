### Example Walkthrough:
Let’s check for \( n = 11 \):

1. **Loop iterations:** We loop through numbers \( i \) from 1 to \( \sqrt{11} \), which is roughly 3.3, so we check \( i = 1, 2, 3 \).
   
2. **For \( i = 1 \):**
   - \( 11 \% 1 == 0 \), so 1 is a divisor.
   - \( 11/1 = 11 \), so 11 is also a divisor.
   - \( cnt = 2 \).

3. **For \( i = 2 \):**
   - \( 11 \% 2 \neq 0 \), so we skip it.
   
4. **For \( i = 3 \):**
   - \( 11 \% 3 \neq 0 \), so we skip it.

Since the divisor count \( cnt = 2 \), the output is `true`, confirming that 11 is a prime number.