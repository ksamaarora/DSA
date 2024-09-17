class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Better solution - my method 
        int n=nums.size();
        int index=0; // keeps track where to place next zero element
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                nums[index]=nums[i];//move non zero element to the beginning of nums
                index++;
            }
        }
        while(index!=n){ // fill remaining posititons with zero
            nums[index]=0;
            index++;
        }
        
        // Optimal Solution - Strivers method
        int j=-1;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1) return;
        
        for(int i=j+1; i<n; i++){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
            }
        }
    }
};