## C++ Standard Template Library (STL)

The C++ STL is divided into four main components:
- Algorithms
- Containers
- Functions
- Iterators

### Pairs

```c++
void explainPair(){
    pair<int, int> p = {1, 3}; // p is a pair storing {1, 3}
    cout << p.first << " " << p.second; // Outputs: 1 3
    
    // Nested Pairs
    pair<int, pair<int, int>> np = {1, {3, 4}};
    cout << np.first << " " << np.second.second << " " << np.second.first; // Outputs: 1 4 3
    
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second; // Outputs: 5
}
```

### Vectors

A vector is a dynamic array that can resize itself automatically when an element is added or removed.

```c++
void explainVector(){
    vector<int> v; // Empty vector of integers

    v.push_back(1); // v: {1}
    v.emplace_back(2); // v: {1, 2}

    vector<pair<int, int>> vec; // Vector of pairs
    vec.push_back({1, 2}); // vec: {{1, 2}}
    vec.emplace_back(1, 2); // vec: {{1, 2}, {1, 2}}

    vector<int> v1(5, 100); // v1: {100, 100, 100, 100, 100}
    vector<int> v2(5); // v2: {0, 0, 0, 0, 0}

    vector<int> v3(5, 20); // v3: {20, 20, 20, 20, 20}
    vector<int> v4(v3); // Copy of v3: {20, 20, 20, 20, 20}
}
```

Accessing elements in a vector:

```c++
vector<int> v = {20, 10, 15, 6, 7};

// Method 1
cout << v[0]; // Outputs: 20

// Method 2 - Using iterators
vector<int>::iterator it = v.begin();
cout << *(it); // Outputs: 20

it += 2;
cout << *(it); // Outputs: 15

// Other iterators apart from v.begin()
// say vector {10, 20, 30, 40}
vector<int>::itertor it = v.end(); 
// Note end will not point to 40. It will point to the memory location after 40. If it would have been it--, then it would have point to 40

cout<<v.back()<<" "; // prints 40
```

Printing the entire vector using loops:

```c++
// Using iterator
// v.begin() starts from 10, then goes till it is not equal to number after 40 i.e. till it reaches 40
for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
    cout << *(it) << " ";
}

// Using auto (Shortcut Method)
for(auto it = v.begin(); it != v.end(); ++it) {
    cout << *(it) << " ";
}

// Using range-based for loop
for(auto value : v) {
    cout << value << " ";
}
```

Deletion in a vector:

```c++
vector<int> v = {10, 20, 12, 23};

v.erase(v.begin() + 1); // v: {10, 12, 23} .. begin()+1 is 20

v = {10, 20, 12, 23, 35};
v.erase(v.begin() + 2, v.begin() + 4); // v: {10, 20, 35}
// [start,end] end is the address after the element you want to delete i.e. this end element wouldnt be deleted
```

Insertion in a vector:

```c++
vector<int> v(2, 100); // v: {100, 100}

v.insert(v.begin(), 300); // v: {300, 100, 100}
v.insert(v.begin() + 1, 2, 10); // v: {300, 10, 10, 100, 100}

vector<int> copy(2, 50); // copy: {50, 50}
v.insert(v.begin(), copy.begin(), copy.end()); // v: {50, 50, 300, 10, 10, 100, 100}
```

Other vector operations:

```c++
// {10, 20}
// Size of the vector
cout << v.size(); // Outputs: 2

// Remove the last element
v.pop_back(); // v: {10}

// Swap contents of two vectors
vector<int> v1 = {10, 20}, v2 = {30, 40};
v1.swap(v2); // v1: {30, 40}, v2: {10, 20}

// Clear the vector
v.clear(); // erases the entire vector
```

### List

```c++
void explainList(){
    list<int> ls;

    ls.push_back(2); // ls: {2}
    ls.emplace_back(4); // ls: {2, 4}
    ls.push_front(5); // ls: {5, 2, 4}
    ls.emplace_front(3); // ls: {3, 5, 2, 4}

    // Other functions same as vector: begin, end, clear, insert, size, swap
}
```

### Deque

```c++
void explainDeque(){
    deque<int> dq;

    dq.push_back(1); // dq: {1}
    dq.emplace_back(2); // dq: {1, 2}
    dq.push_front(4); // dq: {4, 1, 2}
    dq.emplace_front(3); // dq: {3, 4, 1, 2}

    dq.pop_back(); // dq: {3, 4, 1}
    dq.pop_front(); // dq: {4, 1}

    cout << dq.back(); // Outputs: 1
    cout << dq.front(); // Outputs: 4

    // Other functions same as vector: begin, end, clear, insert, size, swap
}
```

### Stack (LIFO)

```c++
void explainStack(){
    stack<int> st;
    st.push(1); // st: {1}
    st.push(2); // st: {2, 1}
    st.push(3); // st: {3, 2, 1}
    st.push(3); // st: {3, 3, 2, 1}
    st.emplace(5); // st: {5, 3, 3, 2, 1}

    cout << st.top(); // Outputs: 5 "** st[2] is invalid **"
    st.pop(); // st: {3, 3, 2, 1}

    cout << st.top(); // Outputs: 3
    cout << st.size(); // Outputs: 4
    cout << st.empty(); // Outputs: 0 (false)

    stack<int> st1, st2;
    st1.swap(st2);
}
```

### Queue (FIFO)

```c++
void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2); // q: {1, 2}
    q.emplace(4); // q: {1, 2, 4}

    q.back() += 5;

    cout << q.back(); // Outputs: 9 {1,2,9}
    cout << q.front(); // Outputs: 1

    q.pop(); // q: {2, 9}

    // Other functions same as stack: size, swap 
}
```

### Priority Queue

Element having largest value will stay at the top

```c++
void explainPQ() {
    // Max Heap
    priority_queue<int>pq;

    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout<<pq.top(); // prints 10

    pq.pop(); // {8,5,2}

    cout<<pq.top(); // prints 8

    // size swap empty function same as other

    // Minimum Heap: priority queue that stores minimum element at the top
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2,5}
    pq.push(8); //{2,5,8}

    cout<<pq.top(); // prints 2
}
```

### Sets

Sorted | Unique

```c++
set<int>st;
st.insert(1); // {1}
st.emplace(2); // {1,2}
st.insert(2); // {1,2}
st.insert(4); // {1,2,4}
st.insert(3); // {1,2,3,4}

// begin(), end(), size(), empty(), swap() are same as those of above

// {1,2,3,4,5}
auto it = st.find(3); // returns an iterator which points to the address 3

// {1,2,3,4,5}
auto it = st.find(6); // 6 not present in the set, thus returns set.end() i.e. an iterator that points after 5 (last element)

set.erase(5); // erases 5

int cnt = st.count(1); // return 1
```

