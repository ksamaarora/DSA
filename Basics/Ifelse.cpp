#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks<25){
        cout<<"F";
    }
    //Nested if else
    else if(marks<44){
        if(marks<30){
            cout<<"E but marks less than 30";
        }
        else{
            cout<<"E but marks less than 44 and greater than 30";
        }
    }
    else if(marks<49){
        cout<<"D";
    }
    else if(marks<59){
        cout<<"C";
    }
    else if(marks<79){
        cout<<"B";
    }
    else if(marks<100){
        cout<<"A";
    }
    else{
        cout<<"A";
    }
}