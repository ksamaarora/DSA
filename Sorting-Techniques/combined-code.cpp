#include <iostream>
#include <vector>
using namespace std;

// Get the minimum element and swap it with the first element of the unsorted part
void selection_sort(int n, vector<int>& arr) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Push the max to the last by adjacent swaps
void bubble_sort(int n, vector<int>& arr){
    for(int i=n-1; i>=0; i--){
        int didswap=0;
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didswap=1;
            }
        }
        if(didswap==0) break;
    }
    for(int i=0; i<n; i++){cout<<arr[i]<<" ";}
    cout<<endl;
}

// Takes an element and places it in correct order
void insertion_sort(int n, vector<int>& arr){
    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 &&arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // selection_sort(n, arr);
    // bubble_sort(n,arr);
    insertion_sort(n,arr);
    return 0;
}
