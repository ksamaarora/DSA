// Method 2 - Optimal solution 
// TC = O(N) 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int largest=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"largest element is "<<largest;
    return 0;
}


// Method 2 - Brute force solution (most generic/normal solution)
// Sort the array and then return the last element 