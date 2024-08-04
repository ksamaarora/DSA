#include<iostream>
#include<map>
using namespace std;
int main(){
    // make array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // pre-computation
    unordered_map<int,int>mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    // print 
    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch 
        cout<<mpp[num]<<endl;
    }
    return 0;
}