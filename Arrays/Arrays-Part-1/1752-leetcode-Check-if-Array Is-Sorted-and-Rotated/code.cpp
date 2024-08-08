class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            if (nums[(i + 1) % n] < nums[i]) {
                count++;
            }
        }
        
        return count <= 1;
    }
};


// Same thing but full code
#include<iostream>
using namespace std;
bool isSorted(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[(i+1)%n]<arr[i]){
            count++;
        }
    }
    if(count==0 || count==1){
        return true;
    }
    else{return false;}
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    printf(isSorted(arr, n) ? "True" : "False");
}