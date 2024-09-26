```cpp
struct Node{
    int data;
    Node* next;
    Node* back;
    Node(int val, Node* next1=nullptr, Node* back1=nullptr){
        data=val;
        next=next1;
        back=back1;
    }
}
```