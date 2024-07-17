#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    arr[3]=16;
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    // 2D Array
    int arr2d[1][2];
    for(int i=0; i<1; i++){
        for(int j=0; j<2; j++){
            cin>>arr2d[i][j];
        }
    }
    for(int i=0; i<1; i++){
        for(int j=0; j<2; j++){
            cout<<arr2d[i][j];
        }
    }
}
