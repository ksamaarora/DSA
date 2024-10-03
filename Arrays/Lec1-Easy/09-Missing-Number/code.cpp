class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Method 1: Brute force TC:O(NxN) SC:O(1)
        int n=nums.size();
        for(int i=0; i<=n; i++){
            bool found=false;
            for(int j=0; j<n; j++){ // iterate over nums array to check if nums[j]==i somewhere or not 
                if(nums[j]==i){
                    found=true;
                    break;
                }
            }
            if(found==false){
                return i;
            }
        }
        return -1; // input is invalid
        
        
        // Method 2: Better soln
        int n=nums.size();
        vector<int> hash(n+1,0); // declare hash of size n with all values 0
        for(int i=0; i<n; i++){ // // Count occurrences of each number in nums
            hash[nums[i]]++;
        }
        for(int i=0; i<=n; i++){ // loop till n (incl n)
            if(hash[i]==0){
                return i;
            }
        }
        return -1;
        

        // Method 3: Optimal method TC:O(N) SC:O(1)
        sum of first n natural numbers: n(n+1)/2
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int sum_arr=0;
        for(int i=0; i<n; i++){
            sum_arr=sum_arr+nums[i];
        }
        return sum-sum_arr; // missing element
        

        // Method 4: Most Optimal solution (IMP) TC:O(2N) SC:O(1)
        int n=nums.size();
        int xor1=0, xor2=0;
        for(int i=1; i<=n; i++){
            xor1=xor1^i;
        }
        for(int i=0; i<n; i++){
            xor2=xor2^nums[i];
        }
        return xor1^xor2;


        // Method 5: XOR can be done in O(N) also .. see striver video / notes
    }
};