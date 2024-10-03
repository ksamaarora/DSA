// Brute force solution

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        set<int> st;
        for(int i=0; i<n; i++){
            st.insert(arr1[i]);
        }
        for(int i=0; i<m; i++){
            st.insert(arr2[i]);
        }
        vector<int> temp;
        for(auto it:st){
            temp.push_back(it);
        }
        return temp;
    }
};

// Optimal Solution 

class Solution{
    public:
    // arr1, arr2: the arrays
    // n, m: size of arrays
    // Function to return a list containing the union of the two arrays.         
    vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
        int i = 0, j = 0; 
        vector<int> unionarr;

        // Traverse both arrays
        while (i < n && j < m) {
            // If element in arr1 is smaller, add it to the union
            if (arr1[i] < arr2[j]) {
                if (unionarr.empty() || arr1[i] != unionarr.back()) {
                    unionarr.push_back(arr1[i]);
                }
                i++;
            }
            // If element in arr2 is smaller, add it to the union
            else if (arr2[j] < arr1[i]) {
                if (unionarr.empty() || arr2[j] != unionarr.back()) {
                    unionarr.push_back(arr2[j]);
                }
                j++;
            }
            // If elements are equal, add any one and move both pointers
            else {
                if (unionarr.empty() || arr1[i] != unionarr.back()) {
                    unionarr.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }

        // Store remaining elements of arr1
        while (i < n) {
            if (unionarr.empty() || arr1[i] != unionarr.back()) {
                unionarr.push_back(arr1[i]);
            }
            i++;
        }

        // Store remaining elements of arr2
        while (j < m) {
            if (unionarr.empty() || arr2[j] != unionarr.back()) {
                unionarr.push_back(arr2[j]);
            }
            j++;
        }

        return unionarr;
    }
};
