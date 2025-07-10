// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i = 0; i < arr.size(); i++){
            maxi = max(maxi, arr[i]);
            mini = min(mini, arr[i]);
        }
        return {mini, maxi};
    }
};