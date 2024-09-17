#include<iostream>
using namespace std;
int linearSearch(int arr[], int num, int n){
    for(int i=0; i<n; i++){
        if(arr[i]==num) return i;
    }
    return -1;
}
int main(){
    int n, num;
    cin>>n>>num;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans=linearSearch(arr,num,n);
    cout<<ans;
    return 0;
}