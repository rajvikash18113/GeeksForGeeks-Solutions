class Solution {
  public:
    bool findTriplets(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        // int left = 0, right = n - 1;
        // map<int, int> mpp;
        
        for(int i = 0; i < n; i++){
            int j = i + 1, k = n - 1;
            while(j < k){
                long long sum = arr[i] + arr[j] + arr[k];
                if(sum == 0){
                    return true;
                }
                else if(sum > 0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return false;
    }
};