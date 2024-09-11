### Insertion Sort

**Difficulty:** Easy  
**Accuracy:** 66.61%  
**Submissions:** 168K+  
**Points:** 2

#### Problem Statement:

The task is to complete the `insert()` function which is used to implement Insertion Sort.

#### Examples:

**Input:**  
`n = 5`  
`arr[] = {4, 1, 3, 9, 7}`

**Output:**  
`1 3 4 7 9`

**Input:**  
`n = 10`  
`arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}`

**Output:**  
`1 2 3 4 5 6 7 8 9 10`

#### Your Task:

You don't have to read input or print anything. Your task is to complete the following functions:

1. `void insert(int arr[], int size, int i);`
2. `void insertionSort(int arr[], int n);`

- **`insert(int arr[], int size, int i)`**: This function takes the array `arr`, its size `size`, and an index `i`, and inserts the element at index `i` into its correct position in the sorted portion of the array.

- **`insertionSort(int arr[], int n)`**: This function uses the `insert` function to sort the array `arr` of size `n` in ascending order using the Insertion Sort algorithm.

#### Expected Time Complexity:

- `O(n*n)`

#### Expected Auxiliary Space:

- `O(1)`

#### Constraints:

- `1 <= n <= 1000`
- `1 <= arr[i] <= 1000`
