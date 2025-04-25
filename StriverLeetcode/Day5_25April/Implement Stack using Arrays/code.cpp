#include<iostream>
using namespace std;
class Stack{
    int size;
    int *arr;
    int top;

    public:
        Stack(){
            top=-1;
            size=10; // SC: would depend based on the size of the array u choose.. so it is fixed and not dynamic in nature as u are using arrays
            arr=new int[size];
        }

    void push(int x){ // O(1)
        top++;
        arr[top]=x;
    }

    int pop(){ // O(1)
        int x=arr[top];
        top--;
        return x;
    }

    int Top(){ // O(1)
        return arr[top];
    }

    int Size(){ // O(1)
        return top+1;
    }
};

int main(){
    Stack s;
    s.push(6);
    s.push(5);
    cout<<s.Top();
    cout<<s.pop();
    s.push(10);
    cout<<s.Top();
    cout<<s.Size();
}