// Method 2 - Optimal solution 
// TC = O(N) 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
    
//     int largest=INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     cout<<"largest element is "<<largest;
//     return 0;
// }


// Method 2 - Brute force solution (most generic/normal solution)
// Sort the array and then return the last element 

// Method 1: Check element
//TC:O(N), SC:O(1)
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int max_element=INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i]>max_element){
//             max_element=arr[i];
//         }
//     }
//     cout<<max_element;
// }

// Bubble sort
// TC: O(N^2), SC:O(1)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     // Bubble sort
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
//     cout<<arr[n-1];
// }

// Selection Sort
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n-1; i++){
//         int minIndex=i;
//         for(int j=i+1; j<n; j++){
//             if(arr[j]<arr[minIndex]){
//                 minIndex=j;
//             }
//         }
//         swap(arr[i],arr[minIndex]);
//     }
// }

// Insertion Sort
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

}



































