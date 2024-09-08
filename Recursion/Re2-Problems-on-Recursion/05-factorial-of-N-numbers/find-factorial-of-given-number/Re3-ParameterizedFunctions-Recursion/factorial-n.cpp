// Recursive code
#include<iostream>
using namespace std;
int f(int n){
    if(n==1){
        return 1;
    }
    return n*f(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
}

// Time complexity O(N)
// Space complexity O(N) Auxilliary space as the functions wait in the stack till the further one gets completed and then backtracks 