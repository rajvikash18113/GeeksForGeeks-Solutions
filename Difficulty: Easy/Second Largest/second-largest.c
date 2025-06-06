int getSecondLargest(int *arr, int n) {
    // code here
    int largest = arr[0];
    
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];
    }
    
    int secondlargest = -1;
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > secondlargest && arr[i] < largest)
            secondlargest = arr[i];
    }
    
    return secondlargest;
}
