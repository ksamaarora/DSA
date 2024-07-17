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





