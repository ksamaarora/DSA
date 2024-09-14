## Merge Sort 

> ### Refer to this video for detailed explanation
https://www.youtube.com/watch?v=ogjf7ORKfd8&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=15


### Pseudo code

Play around with indexes (index starts from 0): Passing on indexes and sorting based on that
Relate it with recursive back tracking 

```c++
mergeSorrt(arr,low,high){
    if(low>=high){return;}
    mid=(low+high)/2;
    mergerSort(arr,low,mid); // do sort of left part of array - this is recursively called till the left array divides into single single elements
    mergeSort(arr,mid,high); // do sort of right part of array
    merge(arr,low,mid,high); // merge the left and right array
}
```

#### Merge Pseudo Code

- Left array from low to mid 
- Right array from mid+1 to high

```c++
merge(arr,low,mid,high){
    temp->[];
    left=low;
    right=mid+1;
    while(left<=mid && right<=high){ // while there are elements in the left and right array
        if(arr[left]<=arr[right]){
            temp.add(arr[left]);
            left++;
        }
        else{
            temp.add(arr[right]);
            right++;
        }
    }
    // if rest elements are on left, copy them 
    while(left<=mid){
        temp.add(arr[left]);
        left++;
    }
    while(right<=high){
        temp.add(arr[right]);
        right++;
    }
    
    // stored values now in arr from index 0 to end
    for(int i=low; i<high; i++){
        arr[i]=temp[i-low];
    }
}
```

### Merge Sort code360 Question

## Problem Statement
Given a sequence of numbers `ARR`, your task is to return a sorted sequence of `ARR` in non-descending order using the merge sort algorithm.

### Example

**Merge Sort Algorithm**:

Merge sort is a Divide and Conquer algorithm. It divides the input array into two parts, continues to divide each part until the size of each part is 1, and then merges the two sorted parts back together to form a single sorted array.

The following illustration shows how merge sort works.

### Note
You must use the merge sort algorithm.

### Input/Output Format

**Input:**
- The first line contains an integer `T`, the number of test cases.
- For each test case:
  - The first line contains an integer `N`, the number of elements in the array `ARR`.
  - The second line contains `N` space-separated integers, the elements of `ARR`.

**Output:**
- For each test case, print the sorted array in non-descending order on a new line.

### Constraints
- \(1 \leq T \leq 50\)
- \(1 \leq N \leq 10^4\)
- \(-10^9 \leq arr[i] \leq 10^9\)

### Time Limit
1 second

### Sample Input 1
```
2
7
3 4 1 6 2 5 7
4
4 3 1 2
```

### Sample Output 1
```
1 2 3 4 5 6 7
1 2 3 4
```

### Explanation for Sample Input 1

**Test Case 1:**

Given `ARR`: {3, 4, 1, 6, 2, 5, 7}

Sorted `ARR` in non-descending order: {1, 2, 3, 4, 5, 6, 7}

Non-descending order means every element must be greater than or equal to the previous element.

**Test Case 2:**

Given `ARR`: {4, 3, 1, 2}

Sorted `ARR` in non-descending order: {1, 2, 3, 4}

### Sample Input 2
```
2
4
5 4 6 7
3
2 1 1
```

### Sample Output 2
```
4 5 6 7
1 1 2
```