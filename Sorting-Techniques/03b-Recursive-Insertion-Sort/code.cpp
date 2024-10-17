void insertionSort(int arr[], int i, int n){
    if(i==n) return;
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
    insertionSort(arr,i+1,n);
}