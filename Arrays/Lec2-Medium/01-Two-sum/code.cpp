class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Method 1: Brute force solution
        int n=nums.size();
        int i,j;
        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                if((nums[i]+nums[j])==target){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
        
        // Method 2: Using Hashing (Most optimal solution for this leetcode qs-2nd variety)
        map<int,int> mpp;
        int n=nums.size();
        for(int i=0; i<n; i++){
            int a=nums[i];
            int moreRequired=target-a;
            if(mpp.find(moreRequired)!=mpp.end()){
                return {mpp[moreRequired], i};
            }
            mpp[a]=i;
        }
        return {-1,-1};
        
        // Method 3: Using 2 pointer approach - only valid for variety 1 qs
        // Not an optimal solution for this variety question where index has to be returned
        int left=0;
        int n=nums.size();
        int right=n-1;
        sort(nums.begin(), nums.end());
        while(left<right){
            int sum=nums[left]+nums[right];
            if(sum==target){
                return "YES";
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return "NO";
    }
};