//Better Solution
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
// TC=O(n+d) SC=O(d)

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


// MOST OPTIMAL SOLUTION
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
// TC: O(2n)
// SC: O(1)