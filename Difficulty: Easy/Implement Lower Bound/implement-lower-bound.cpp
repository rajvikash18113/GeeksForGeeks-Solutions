class Solution {
  public:
  
    int lowerBound(vector<int>& arr, int target) {
        //----C++ STL to find Lower Bound of an Array----//
        // int lb = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
        // return lb;
        
        //----Internal working of C++ STL to find Lower Bound----//
        int n = arr.size();
        int low = 0, high = n - 1;
        int ans = n;
        
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] >= target){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
