class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // Method 1: Better Solution
        int n = nums.size();
        k = k % n; // Ensure k is within bounds
        vector<int> temp;

        // Store the last k elements in the temp vector
        for (int i = n - k; i < n; i++) {
            temp.push_back(nums[i]);
        }

        // Shift the first n - k elements to the right
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        // Move elements from temp to the beginning of nums
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
        
        
        // Method 2: Optimal Solution
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};
