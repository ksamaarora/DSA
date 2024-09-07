#include<iostream>
using namespace std;
int f(int i, int n, int sum){
    if(i>n){return sum;}
    sum=sum+i;
    f(i+1,n,sum);
}
int main(){
    cout<<f(1,7, 0);
    return 0;
}