#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int hash[13]={0}; // precompute of hash // 13 is written assuming array max element is 12
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q!=0){
        int number;
        cin>>number; // fetch 
        cout<<hash[number]<<endl;
        q--;
    }
    return 0;
}

// If you want to declare max of hash 
// Inside main -> int hash[1000000]={0} // only till 10^6
// Globally -> int hashh[100000000]={0} // only till 10^8
