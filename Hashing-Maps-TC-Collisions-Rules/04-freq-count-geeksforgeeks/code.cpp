// tricky condtitions (?)
#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int p; // p is max value of element that array can take
    cin >> p;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    map<int, int> mpp;
    for(int i = 1; i <= n; i++){
        mpp[i] = 0; // Initialize the map with keys 1 to n and values 0
    }

    for(int i = 0; i < n; i++){
        if(arr[i] <= n) {
            mpp[arr[i]]++;
        }
    }

    for(int i = 1; i <= n; i++){
        cout << mpp[i] << " ";
    }
    cout << endl;

    return 0;
}
