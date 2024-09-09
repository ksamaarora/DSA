// Method 1: Using hash (Cross check this)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){cin>>arr[i];}
    vector <int> hash(n+1,-0);
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }
    int p;
    cin>>p;
    for(int i=1; i<=n; i++){
        cout<<hash[i]<<" ";
    }
    return 0;
}


// Method 2 Using maps
#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int p; // p is max value of element that array can take
    cin >> p;
    for(int i = 0; i < n; i++){cin >> arr[i];}
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
