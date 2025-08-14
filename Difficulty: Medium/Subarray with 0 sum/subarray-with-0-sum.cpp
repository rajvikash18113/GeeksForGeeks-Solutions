class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        int n = arr.size();
        map<int, int> mpp;
        int sum = 0;
        mpp[0] = 1;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                return true;
            }
            sum += arr[i];
            if(mpp.find(sum) != mpp.end()){
                return true;
            }
            mpp[sum] = i;
        }
        return false;
    }
};