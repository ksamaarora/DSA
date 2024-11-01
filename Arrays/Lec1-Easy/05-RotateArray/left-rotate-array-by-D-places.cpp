// Method 1: Brute Force Solution 
// TC of function: O(d x (n-1)) = O(d x n)
// SC: O(1)
#include<iostream>
using namespace std;
void leftRotateDplaces(int arr[], int n, int d){
    while(d!=0){
        int temp=arr[0];
        for(int i=1; i<n; i++){
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
        d--;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftRotateDplaces(arr,n,d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Better Brute Force 
int d=d%n; 
// Why use d % n?:

// - When d > n, rotating the array n times brings it back to its original form.
// - To avoid unnecessary full rotations, use d % n, which directly computes the effective number of rotations.
// - This prevents extra rotations and keeps time complexity optimal for larger values of d.

// Time Complexity (TC):
// O(d * n) (without optimization), but if d > n, it will reduce to O((d % n) * n).

// Space Complexity (SC):
// O(1) since no additional space is used apart from variables.


// //Better Solution
#include<iostream>
#include<vector>
using namespace std;

void leftRotate(int arr[], int n, int d){
    d=d%n;
    vector<int> temp;
    for(int i=0; i<d; i++){
        temp.push_back(arr[i]);
    } // O(d)
    
    for(int i=d; i<n; i++){
        arr[i-d]=arr[i];
    } // O(n-d)

    for(int i=n-d; i<n; i++){
        arr[i]=temp[i-(n-d)];
    } // O(d)
}
// // TC=O(n+d) SC=O(d)

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){cin>>arr[i];}
    int d;
    cin>>d;
    leftRotate(arr, n, d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


// // MOST OPTIMAL SOLUTION
#include<iostream>
using namespace std;
void leftRotate(int arr[], int n, int d){
    reverse(arr, arr+d); // O(d)
    reverse(arr+d, arr+n); // O(n-d)
    reverse(arr, arr+n); // O(n)
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){cin>>arr[i];}
    int d;
    cin>>d;
    leftRotate(arr, n, d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// // TC: O(2n)
// // SC: O(1)