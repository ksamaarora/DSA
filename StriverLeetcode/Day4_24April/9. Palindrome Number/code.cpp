// Method 1
// TC:O(log10(x))
// SC:O(1)
class Solution {
    public:
        bool isPalindrome(int x) {
            long long rev_num=0;
            int x_copy=x;
            if(x<0) return false;
            while(x!=0){
                int rem=x%10;
                rev_num=(rev_num*10)+rem;
                x=x/10;
            }
            if(rev_num==x_copy) return true;
            else return false;
        }
    };
    