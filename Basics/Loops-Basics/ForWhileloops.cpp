#include<iostream>
using namespace std;
int main(){
    // For loops
    for(int i=1; i<=25; i=i+5){
        cout<<"Hey"<<endl;
    }
    
    // While loops
    int j=1;
    while(j<=25){
        cout<<"hey"<<endl;
        j=j+5;
    }
    
    // Do While loops
    int k=1;
    do{
        cout<<"Hhey"<<endl;
        k=k+5;
    } while(k<=25);
    return 0;
}