### Linked List (LL)

A **Linked List (LL)** is a linear data structure consisting of nodes. Each node contains two parts: 
1. **Data**: Stores the value of the element.
2. **Next**: A pointer/reference to the next node in the sequence.

### Where is it Used?

- **Stacks and Queues**: Linked lists are commonly used to implement stacks and queues because they allow dynamic memory allocation and easy insertion/deletion operations.
- **Browser History**: Browsers use linked lists to manage tabs. You can go back and forth in your browsing history using a doubly linked list where each node points to the next and previous pages.

### Linked List in C++

**Structure of a Node:**
```cpp
#include <iostream>
using namespace std;

struct Node {
    public:
    int data; 
    Node* next;  
    
    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

int main(){
    vector<int> arr=[2,5,8,7];
    Node* y= new Node(arr[0], nullptr);
    cout<<y->data;
}
```

### Memory Space Used

- **Node**: Each node uses memory space for the data and a pointer (in C++, `Node*`) to the next node.
- **Difference Between `Node` and `Node*`**:
  - `Node`: An actual node structure containing data and a pointer.
  - `Node*`: A pointer that points to a node. Used to traverse or link nodes.

### Conversion of Array to Linked List

```cpp
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

Node* convertArray2LL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next; // OR mover = temp; (same thing)
    }
    return head;
} // TC: O(n)

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArray2LL(arr);
    cout << head->data;
}
```

### Traversing a Linked List

```cpp
Node* temp = head;
while(temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
}
```

### Length of a Linked List

```cpp
int lengthofLL(Node* head) {
    int count = 0;
    Node* temp = head;
    while(temp) {
        count++;
        temp = temp->next;
    }
    return count;
}
```

### Searching for an Element in a Linked List

```cpp
int searchLL(Node* head, int num) {
    Node* temp = head;
    while(temp != nullptr) {
        if(temp->data == num) 
            return 1; 
        temp = temp->next;
    }
    return 0;
}
// Time Complexity: 
// - Best Case: O(1)
// - Average Case: O(n/2)
// - Worst Case: O(n)
```