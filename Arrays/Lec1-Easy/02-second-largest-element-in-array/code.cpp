// Brute force -> Better -> Optimal solution
// Sort and then iterate backwards and find the element less than the largest

// Method 2 - Optimal 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]; // Space complexity O(n)
    for(int i=0; i<n; i++){cin>>arr[i];}
    int largest_element=-1;
    int second_largest=-1;
    for(int i=0; i<n; i++){
        if(arr[i]>largest_element){
            second_largest=largest_element;
            largest_element=arr[i];
        }
        if(arr[i]>second_largest&&arr[i]!=largest_element){
            second_largest=arr[i];
        }
    }
    cout<<"The largest element of given array is "<<largest_element<<" and the second largest is "<<second_largest;
    return 0;
}

// TC = O(n)





