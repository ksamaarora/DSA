#include<iostream>
using namespace std;
void f(int i, int n, int sum){
    if(i>n){
        cout<<sum;
        return;
    }
    sum=sum+pow(i,3);
    f(i+1,n,sum);
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    f(1,n,sum);
    return 0;
}