class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        // Sort the heights in descending order to maximize the total sum
        sort(maximumHeight.rbegin(), maximumHeight.rend());
        
        long long totalSum = 0; // Initialize total sum of heights
        int lastHeight = INT_MAX; // Use a large number for the first height

        for (int height : maximumHeight) {
            // Assign the height as the minimum of the current height and lastHeight - 1
            // This ensures that we are assigning unique heights
            if (height < lastHeight) {
                lastHeight = height; // Assign current height if it's less than last assigned height
            } else {
                lastHeight--; // Decrease to maintain uniqueness
            }
            
            // If the last assigned height goes below 1, it's impossible to assign heights
            if (lastHeight <= 0) {
                return -1; // Return -1 if we can't assign a valid height
            }
            
            // Add this height to the total sum
            totalSum += lastHeight;
        }
        
        return totalSum; // Return the maximum total sum of heights
    }
};
