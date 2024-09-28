class Solution {
public:
    int minElement(vector<int>& nums) {
        int min=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int sum=0;
            int num=nums[i];
            while(num!=0){
                sum=sum+(num%10);
                num=num/10;
            }
            nums[i]=sum;
            if(sum<min){
                min=sum;
            }
        }
        return min;
    }
};