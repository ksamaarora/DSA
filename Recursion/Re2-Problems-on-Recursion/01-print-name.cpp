#include<iostream>
using namespace std;
void f(int i,int n){
    if(i>n){ // Base case
        return;
    }
    cout<<"ksama"<<endl;
    f(i+1,n);
}
int main(){
    int n;
    cin>>n;
    f(1,n);
    return 0;
}

// Time complexity O(N)
// Space Complexity O(N) // internal memeory using stack space 