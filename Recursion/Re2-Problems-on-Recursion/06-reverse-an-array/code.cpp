#include<iostream>
using namespace std;
void reverse_array(int i, int n, int arr[]){
    if(i>=n/2){return;}
    int temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
    reverse_array(i+1,n,arr);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){cin>>arr[i];}
    reverse_array(0,n,arr);
    for(int i=0; i<n; i++){cout<<arr[i]<<" ";}
    return 0;
}