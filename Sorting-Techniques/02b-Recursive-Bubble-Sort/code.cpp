class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n) {
        // Your code here
        if(n==1) return;
        int didSwap=0;
        for(int i=0; i<=n-2; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                didSwap=1;
            }
        }
        if(didSwap==0) return;
        bubbleSort(arr,n-1);
    }
};