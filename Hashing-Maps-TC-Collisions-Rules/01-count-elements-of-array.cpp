#include<iostream>
using namespace std;
int main(){
    // Array intitialization
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Pre-computation
    int hash[10000000]={0}; // initialize hash array size 13 and all elements 0
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1; // increment the count in the hash array for each element in the input array
    }

    int q; // read number of queries
    cin>>q; 
    while(q--){
        int number;
        cin>>number; // read each query number 
        //fetch
        cout<<hash[number]<<endl; // output the count of the query number from the hash array
    }
    return 0;
}