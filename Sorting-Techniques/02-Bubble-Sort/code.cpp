#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=n-1; i>=0; i--){
        int didSwap=0;
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didSwap=1;
            }
        }
        if(didSwap==0){
            break;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}