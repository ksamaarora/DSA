// Left Rotate an Array by One
class Solution {
public:
    void rotate(vector<int>& nums, int k){
        int n=nums.size();
        int temp=nums[0];
        for(int i=1; i<n; i++){
            nums[i-1]=nums[i];
        }
        nums[n-1]=temp;
    }
};

// Your input
// [1,2,3,4,5,6,7]
// 1
// Output
// [2,3,4,5,6,7,1]

