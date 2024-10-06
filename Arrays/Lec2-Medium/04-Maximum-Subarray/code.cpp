class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Method 1: Brute force solution TC:O(N^3) SC:O(1)
        // Time Limit Exceeded
        int n=nums.size();
        int largest=INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int sum=0;
                for(int k=i; k<=j; k++){
                    sum=sum+nums[k];
                }
                if(sum>largest) largest=sum;
            }
        }
        return largest;
        
        // Method 2: Better Soln TC:O(N^2) SC:O(1)
        // Time Limit Exceeded
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                sum+=nums[j];
                maxi=max(sum,maxi);
            }
        }
        return maxi;
        
        // Method 3: Optimal Solution TC:O(N) SC:O(1)
        int sum=0;
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            maxi=max(maxi,sum);
            if(sum<0) sum=0;
        }
        return maxi;
    }
};