#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    switch(num){
        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesday";
        break;

        case 3:
        cout<<"Wed";
        break;

        case 4:
        cout<<"Thur";
        break;

        case 5:
        cout<<"Fri";
        break;

        case 6:
        cout<<"Sat";
        break;

        case 7:
        cout<<"Sun";
        break;

        default:
        cout<<"Invalid";
    }
}