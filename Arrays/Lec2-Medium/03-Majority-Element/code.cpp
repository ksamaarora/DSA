class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Method 1: Brute force soln TC:O(N^2) SC:O(1)
        int n=nums.size();
        for(int i=0; i<n; i++){
            int cnt=0;
            for(int j=0; j<n; j++){
                if(nums[i]==nums[j]){
                    cnt++;
                }
            }
            if(cnt>(n/2)){
                return nums[i];
            }
        }
        return -1;
        
        // Method 2: Better soln: Using map 
        // TC:O(N log N) + O(N) and SC:O(N) in worst case
        map<int, int> mpp; // element,count
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(mpp.find(nums[i])!=mpp.end()){
                mpp[nums[i]]++;
            }
            else{ mpp[nums[i]]=1; }
        }
        for(auto &it:mpp){
            if(it.second>(n/2)){
                return it.first;
            }
        }
        return -1;
        
        // Method 3: Optimal Solution
        // MOORE's VOTING ALGORITHM
        int n=nums.size();
        int cnt=0;
        int el;
        for(int i=0; i<n; i++){
            if(cnt==0){
                el=nums[i];
                cnt=1;
            }
            else if(nums[i]==el){
                cnt++;
            }
            else{ cnt--; }
        }
        int cnt1=0;
        for(int i=0; i<n; i++){
            if(nums[i]==el){
                cnt1++;
            }
        }
        if(cnt1>(n/2)){return el;}
        return -1;
    }
};