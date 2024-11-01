class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        
        // Method 1: Brute force
        set<int> st;
        int n1=a.size();
        int n2=b.size();
        for(int i=0; i<n1; i++){
            st.insert(a[i]);
        }
        for(int i=0; i<n2; i++){
            st.insert(b[i]);
        }
        vector<int> Union;
        for(auto it:st){
            Union.push_back(it);
        }
        return Union;
        
        // Method 2: Optimal Soln - 2 pointer Approach
        int n1=a.size();
        int n2=b.size();
        int i=0; 
        int j=0;
        vector<int> Union;
        while(i<n1 && j<n2){
            if(a[i]<=b[j]){
                if(Union.size()==0 || Union.back()!=a[i]){
                    Union.push_back(a[i]);
                }
                i++;
            }
            else{
                if(Union.size()==0 || Union.back()!=b[j]){
                    Union.push_back(b[j]);
                }
                j++;
            }
        }
        while(i<n1){
            if(Union.size()==0 || Union.back()!=a[i]){
                    Union.push_back(a[i]);
            }
            i++;
        }
        while(j<n2){
            if(Union.size()==0 || Union.back()!=b[j]){
                    Union.push_back(b[j]);
            }
            j++;
        }
        return Union;
    }
};