What is LL

Where is it used - in Stacks/Queues
- Used in browser: Open a tab and go ahead or back using LL

Struct/class in C++ Java
```c++
#include<iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
};

int main(){
    vector<int> arr=[2,5,8,7];
    Node* y= new Node(arr[0], nullptr);
    cout<<y->data;
}
```

Memory Space used
Difference between node and node*
Array->LL
Traverse in LL
Length of a LL
Search an element in LL