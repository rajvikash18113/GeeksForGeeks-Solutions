class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == k){
                return i;
            }
        }
        return -1;
    }
};