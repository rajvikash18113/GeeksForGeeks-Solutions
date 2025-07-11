class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int sum = arr[0];
        int maxi = arr[0];
        for(int i = 1; i < arr.size(); i++){
            sum += arr[i];
            sum = max(sum, arr[i]);
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};