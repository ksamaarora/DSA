// Brute force -> Better -> Optimal solution
// Sort and then iterate backwards and find the element less than the largest

// Method 2 - my solution (Better Solution)
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
        if(arr[i]>largest) largest=arr[i];
    }
    int second_largest=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>second_largest && arr[i]<largest){
            second_largest=arr[i];
        }
    }
    cout<<endl;
    cout<<"second largest element is "<<second_largest;
    return 0;
}

// TC = O(n+n)= O(2n) 

// Method 3: Optimal Solution 
// Explanation: Iterate over the array elements one by one. Make two variables - largest and slargest. Assign the greater numbers to largest when arr[i]>largest and then simultaneously assign the value of largest in slargest. As the value that would be changed in largest would become the slargest element.

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
    int slargest=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            int temp=largest;
            largest=arr[i];
            slargest=temp;
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }

    cout<<"Largest element is "<<largest;
    cout<<"Second largest element is "<<slargest;
    return 0;
}





