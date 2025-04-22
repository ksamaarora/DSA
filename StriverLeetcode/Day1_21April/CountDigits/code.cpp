// TC~~log base 10 (n) SC:O(1)
class Solution {
    public:
        int countDigit(int n) {
            if(n==0) return 1;
            int digits=0;
            while(n!=0){
                digits++;
                n=n/10;
            }
            return digits;
        }
    };
    // if divion happening by 5, it will be log base 5 n 
    // if number of iterations depends on divion, then TC would be logarathmic
    
    // TC and SC: 0(1)
    #include<bits/stdc++.h>
    class Solution {
    public:
        int count=(int) (log10(n) +1);
        return count;
    };
    