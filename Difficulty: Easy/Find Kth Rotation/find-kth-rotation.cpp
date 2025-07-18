class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int index = -1;
        int min_ele = INT_MAX;
        int low = 0, high = arr.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[low] <= arr[mid]){
                if(arr[low] < min_ele){
                    index = low;
                    min_ele = arr[low];
                }
                low = mid + 1;
            }else{
                if(arr[mid] < min_ele){
                    index = mid;
                    min_ele = arr[mid];
                }
                high = mid - 1;
            }
        }
        return index;
    }
};
