// User function Template for C++
class Solution {
  public:
    // Recursive function to generate factorial numbers
    void findFactorials(long long n, long long fact, int i, vector<long long>& result) {
        if (fact > n) {
            return;  // Base case: stop when factorial exceeds n
        }
        
        result.push_back(fact);  // Add the current factorial to the result
        
        // Recursive call for the next factorial
        findFactorials(n, fact * (i + 1), i + 1, result);
    }
    
    vector<long long> factorialNumbers(long long n) {
        vector<long long> result;
        
        // Start recursion with i = 1 and fact = 1 (since 1! = 1)
        findFactorials(n, 1, 1, result);
        
        return result;
    }
};