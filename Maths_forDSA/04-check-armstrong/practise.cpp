#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n_copy=n;
    int sum=0;
    int k=(int)log10(n)+1; // k digits
    while(n!=0){
        int lastdigit=n%10;
        sum=sum+pow(lastdigit,k);
        n=n/10;
    }
    if(n_copy==sum)cout<<"true";
    else{cout<<"false";}
    return 0;
}