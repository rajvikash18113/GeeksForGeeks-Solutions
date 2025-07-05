int missingNum(int *arr, int size) {
    int xor1 = 0;
    for(int i = 0; i < size; i++){
        xor1 = xor1 ^ arr[i];
    }
    int xor2 = 0;
    for(int i = 1; i <= size + 1; i++){
        xor2 = xor2 ^ i;
    }
    return xor1 ^ xor2;
    
}
