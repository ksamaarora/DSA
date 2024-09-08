// Method 1
class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;
        for (char c : s) {
            if (isalnum(c)){ 
                cleaned += tolower(c);
            }
        }
        int left = 0;
        int right = cleaned.size() - 1;
        while (left < right){
            if (cleaned[left] != cleaned[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

// Method 2 : Traverses half length and checks 
class Solution{
public:
    bool isPalindrome(string s){
        string cleaned;
        for(char c:s){
            if(isalnum(c)){
                cleaned+=tolower(c);
            }
            else{continue;}
        }
        int n=cleaned.size();
        for(int i=0; i<n/2; i++){
            if(cleaned[i]!=cleaned[n-i-1]){return false;}
            else{continue;}
        }
        return true;
    }
};