class Solution{
public:
    vector<int> findArrayIntersection(vector<int>& A, vector<int>& B){
        // Method 1: Brute Force
        // TC: O(n1 x n2)  SC:O(n2 + k) k is number of elements in ans vector
        int n1=A.size();
        int n2=B.size();
        vector<int> ans;
        vector<int> vis(n2,0); // Use vector to initialize with 0
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(A[i]==B[j] && vis[j]!=1){
                    ans.push_back(A[i]);
                    vis[j]=1;
                    break;
                }
                if(B[j]>A[i]) break; //  dont use this in case of unsorted arrays
            }
        }
        return ans;

        // Method 2: Optimized method 
        // TC: O(n1+n2)  SC:O(1) excluding the result vector to print which is O(k)
        int n1=A.size();
        int n2=B.size();
        int i=0; int j=0;
        vector<int> result;
        while(i<n1 && j<n2){
            if(A[i]==B[j]){
                result.push_back(A[i]);
                i++;
                j++;
            }
            else if(A[i]<B[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return result;
    }
};