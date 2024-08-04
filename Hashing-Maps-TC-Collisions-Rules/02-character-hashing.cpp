// METHOD 1: If only lower case letters present in the string
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    int hash[26]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        // fetch 
        cout<<hash[c-'a']<<" ";
    }
    return 0;
}


// METHOD 2: If string has any character
#include<isotream>
using namespace std;
int main(){
    string s;
    cin>>s;

    int hash[256]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        // fetch
        cout<<hash[c]<<" ";
    }
    return 0;
}


// METHOD 3: Using MAPS (Very Good Method) - used in 03-freq-counter with explanantion
#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    cin>>s;

    map<char,int>mpp;
    for(int i=0; i<s.size(); i++){
        mpp[s[i]]++;
    }

    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<mpp[c]<<endl;
    }
    return 0;
}