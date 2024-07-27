#include<iostream>
using namespace std;
void f(int i, int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    f(i,n-1);
}
int main(){
    int n;
    cin>>n;
    f(1,n);
}

// METHOD 2

#include<iostream>
using namespace std;
void f(int i,int n){
    if(i<1){
        return;
    }
    cout<<i<<" ";
    f(i-1,n);
}
int main(){
    int n;
    cin>>n;
    f(n,n);
}