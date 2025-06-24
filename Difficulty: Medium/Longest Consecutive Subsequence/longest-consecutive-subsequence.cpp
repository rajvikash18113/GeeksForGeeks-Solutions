class Solution {
  public:
//-------------Better Approach : Using Sort ------------//
    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        if(arr.size() == 0){
            return 0;
        }
        sort(arr.begin(), arr.end());
        int maxi = 0;
        int count = 1;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] == arr[i-1]){
                continue;
            }
            else if(arr[i] == arr[i-1] + 1){
                count++;
            }
            else{
                count = 1;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};