class Solution {
  public:
  //---------C++ Stl to find the lower bound element in an array-------//
    int lowerBound(vector<int>& arr, int target) {
        int lb = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
        return lb;
    }
};
