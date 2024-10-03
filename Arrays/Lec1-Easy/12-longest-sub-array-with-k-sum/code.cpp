class Solution {
public:
    int lenOfLongSubarr(int A[], int N, int K) {
        
        
        // Method 2: Better solution - when values are +ve and -ve both
        // Declare a map to store prefix sums and their indices
        map<int, int> preSumMap;
        int sum = 0;
        int maxLen = 0;

        for (int i = 0; i < N; i++) {
            // Calculate the prefix sum up to index i
            sum += A[i];

            // If sum equals K, update maxLen to i+1 (entire subarray up to index i)
            if (sum == K) {
                maxLen = max(maxLen, i + 1);
            }

            // Calculate the remaining part, i.e., sum - K
            int rem = sum - K;

            // Check if the remaining sum exists in the map
            if (preSumMap.find(rem) != preSumMap.end()) {
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }

            // Only insert sum in the map if it hasn't been recorded yet
            if (preSumMap.find(sum) == preSumMap.end()) {
                preSumMap[sum] = i;
            }
        }

        return maxLen;
    }
};
