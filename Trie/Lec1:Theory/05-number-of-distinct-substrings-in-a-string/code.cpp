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
    set<string> st; // set counts only distinct elements
    for(int i=0; i<s.size(); i++){ // O(N)
        str="";
        for(int j=i; j<s.size(); j++){ // near O(N)
            str=str+s[j];
            st.insert(str); // O(log M ) where M are number of elements in the set 
        }
    }
    return st.size()+1; // +1 to add empty string 
}

// OR Optimal Method 

#include<set>

struct Node{
    Node* links[26];
    bool containsKey(char ch){
        return links[ch-'a']!=NULL;
    }
    void put(char ch, Node* node){
        links[ch-'a']=node;
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
};

int countDistinctSubstrings(string &s)
{
    int count=0;
    Node* root=new Node();
    for(int i=0; i<s.size(); i++){
        Node* node=root;
        for(int j=i; j<s.size(); j++){
            if(!node->containsKey(s[j])){
                count++;
                node->put(s[j],new Node());
            }
            node=node->get(s[j]);
        }
    }
    return count+1;
}