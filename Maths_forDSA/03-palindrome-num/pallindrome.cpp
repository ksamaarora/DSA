// Method 1 Reverse number and compare
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        int xcopy=x;
        long long revnum=0; // to avoid overflow condition change int to long long
        while(xcopy!=0){
            int lastdigit=xcopy%10;
            revnum=revnum*10 + lastdigit;
            xcopy=xcopy/10;
        }
        if(revnum==x){return true;}
        else{ return false;}
    }
};

// Method 2: Comparing digits from left and right
// ERROR - TIME LIMIT EXCEEDED
class Solution{
public:
    bool isPalindrome(int x){
        if(x<0){return false;}
        int n=(int)log10(x)+1; // number of digits -> log10(1234)=3.09(int)=3 -> +1 = 4 
        int i=0;
        while(i<n/2){
            int left=(x/(int)pow(10,n-i-1))%10;
            int right=(x/(int)pow(10,i))%10;
            if(left!=right) return false;
        }
        return true;
    }
};