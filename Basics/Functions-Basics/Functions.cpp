// Functions are a set of code which performs something for you.
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> does not return anything
// return
// parametarized
// non parametraized

#include<iostream>
using namespace std;

// void without parameter
void printName(){
    cout<<"hey Striver";
}

// void with parameter
void printName1(string name){
    cout<<"hey "<<name;
}

// return function
int sum(int num1, int num2){
    return num1+num2;
}

int main(){
    printName();
    
    string name;
    cin>>name;
    printName1(name);

    int num1, num2;
    cin>>num1>>num2;
    int res=sum(num1, num2);
    cout<<res<<endl;

    // Inbuilt min max function
    cout<<min(num1, num2)<<endl;
    cout<<max(num1, num2)<<endl;
    return 0;
}