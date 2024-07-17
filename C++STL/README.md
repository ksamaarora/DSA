> ### C++ STL

- Algorithms
- Containers
- Functions
- Iterators

> #### Pairs

```c++
void explainPair(){
    pair<int,int> p={1,3} // p is a pair storing {1,3}
    cout<<p.first<<" "<<p.second; // p.first to access 1, p.second to access 3
    
    // Nested Pairs
    pair<int, pair<int,int>> p = {1,{3,4}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first; // prints 1 4 3
    

    pair<int, int> arr[]={{1,2}, {2,5}, {5,1}};
    cout<<arr[1].second; // prints 5
}
```

> #### Vectors

Vector is a container which is dynamic in nature. You can always increase the size of the vector whenever you wish to, unlike that in arrays. It stores elements in a similar fashion as array does. 

```c++
void explainVector(){
    vector<int> v; // vector declaration of int datatype

    v.push_back(1); // push_back creates an empty container and stores 1 in it {} -> {1}
    v.emplace_back(2); // emplace_back dynamically increases the vector size and thus becomes {1,2}

    vector<pair<int, int>>vec; // vector declaration of pair datatype
    v.push_back({1,2}); // inserts {1,2}
    v.emplace_back(1,2); // emplace back automatically assumes it to be a pair and inserts into the vector you have defined

    vector<int> v(5,100); // vector defined as 5 instances of 100 {100, 100, 100, 100, 100}

    vector<int> v(5); // container of 5 size consisting of any 5 garbage values is declared {0,0,0,0,0}

    vector<int> v1(5,20); // declares a container of 5 instances of 20 i.e. {20, 20, 20, 20, 20}
    vector<int> v2(v1); // copy this v1 into v2 i.e. v2 is a copy of v1 {20, 20, 20, 20, 20}

    // ACCESS ELEMENTS IN A VECTOR

}
```



