// Method 1: Brute force approach
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxFreq=0; int maxEl=arr[0]; int minFreq=n+1; int minEl=arr[0];
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count>maxFreq){
            maxFreq=count;
            maxEl=arr[i];
        }
        else if(count<minFreq){
            minFreq=count;
            minEl=arr[i];
        }
    }
    cout<<"Largest freq element is "<<maxEl<<endl;
    cout<<"Smallest freq element is "<<minEl<<endl;
    return 0;
}
// TC: O(N)+O(N*N) ~~ O(N*N)
// SC: O(N)


// Method 2: Optimised Code
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    map<int, int> mpp;//<element,freq>
    for(int i=0; i<n; i++){
        mpp[arr[i]]++; // k elements
    }

    // find elements with highest and lowest freq
    int largestFreqElement=arr[0];
    int smallestFreqElement=arr[0];
    for(auto it:mpp){
        if(it.second>mpp[largestFreqElement]) largestFreqElement=it.first;
        else if(it.second<mpp[smallestFreqElement]) smallestFreqElement=it.first;
    }
    cout<<"Largest freq element is "<<largestFreqElement;
    cout<<"Smallest freq element is "<<smallestFreqElement;
    return 0;
}

// TC: O(N)+O(k*logk)+O(k*logk)
// SC:O(N)+O(k)