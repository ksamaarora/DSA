/// Method 1: Brute force 
// TC: O(N^2 x log M)
// SC: In the worst case, all substrings generated are distinct
// Average length of substrings = O(N/2)
// Assuming O(N^2) substrings in the set
// SC: O(N^2 * N/2) ? O(N^3) (very large)

#include <bits/stdc++.h>
int countDistinctSubstrings(string &s)
{
    //    Write your code here.
    string str;
    set<string> st;
    for(int i=0; i<s.size(); i++){ // O(N)
        str="";
        for(int j=i; j<s.size(); j++){ // O(N)
            str=str+s[j];
            st.insert(str); // O(log M ) where M are number of elements in the set 
        }
    }
    return st.size()+1; // +1 to add empty string 
}