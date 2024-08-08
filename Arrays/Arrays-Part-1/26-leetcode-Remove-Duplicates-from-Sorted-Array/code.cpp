// Brute force approach 
#include<iostream>
using namespace std;
int removeDuplicates(int arr[], int n){
    int k=1; // intitialize counter for unique elements
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[k-1]){
            arr[k]=arr[i]; // place unique element in next postn
            k++;
        }
    }
    return k;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k=removeDuplicates(arr,n);
    cout<<"Number of unique elements"<<k<<endl;
    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// TC - O(N)
// SC - O(1)


// Optimal Solution
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0; 
        int n=nums.size();
    
        for(int j=1; j<n; j++){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1; // gives number of unique elements
    }
};


