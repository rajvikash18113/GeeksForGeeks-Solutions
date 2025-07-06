// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        int maxi = *max_element(arr.begin(), arr.end());
        vector<int> temp(maxi + 1, 0);
        for(int i = 0; i < arr.size(); i++){
            temp[arr[i]]++;
        }
        int count = 0;
        for(int i = 0; i <= maxi; i++){
            count += temp[i];
            if(count >= k){
                return i;
            }
        }
        return -1;
    }
};