#include<iostream>
using namespace std;
int unionSortedArrays(int n, int m, int arr1[], int arr2[]){
    int j=arr2[0];
    for(int i=0; i<n; i++){
        if(arr1[i]==arr2[j]){
            j++;
            continue;
        }
        else{
            
        }
    }
}
int main(){
    int n, m;
    int arr1[n];
    int arr2[m];
    for(int i=0; i<n; i++){cin>>arr1[i];}
    for(int i=0; i<m; i++){cin>>arr2[m];}

    unionSortedArrays(n,m,arr1,arr2);
    return 0;
}