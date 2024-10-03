class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        // Method 1: Brute force solution
        int n=nums.size();
        for(int i=0; i<n; i++){
            int cnt=0;
            for(int j=0; j<n; j++){
                if(nums[j]==nums[i]){
                    cnt++;
                }
            }
            if(cnt==1) return nums[i];
        }
        return -1;
        
        
        // Method 2: using hashing - (DONT USE THIS METHOD)
        int maxi=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            maxi=max(maxi,nums[i]);
        }
        vector<int> hash(maxi+1,0); // maxi+1 is size since array has 0-based indexing
        for(int i=0; i<n; i++){
            hash[nums[i]]++;
        }
        for(int i=0; i<n; i++){
            if(hash[nums[i]]==1) return nums[i];
        }
        return -1;
        // NOTE: (IMPORTANT)
        // The above method will not work when values are negative or numbers are very big i.e. to the order of 10^9 or 10^12 etc
        
        // Method 2: Better solution using maps
        map<int, int> mpp;
        int n=nums.size();
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second==1) return it.first;
        }
        return -1;
        
        
        // Method 3: Using XOR
        int xor1 = 0; // xor is a reserved keyword in c++
        for(int i=0; i<nums.size(); i++){
            xor1=xor1^nums[i];
        }
        return xor1;
    }
};