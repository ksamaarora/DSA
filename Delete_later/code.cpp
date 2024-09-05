#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count_of_digits=0;
    while(n!=0){
        int lastdigit=n%10;
        n=n/10;
        count_of_digits++;
    }
    cout<<count_of_digits<<endl;
    return 0;
}