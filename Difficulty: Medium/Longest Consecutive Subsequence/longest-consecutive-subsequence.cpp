class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    bool ls(vector<int> &arr, int num){
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == num){
                return true;
            }
        }
        return false;
    }
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int maxi = 0;
        for(int i = 0; i < arr.size(); i++){
            int x = arr[i];
            int cnt = 1;
            while(ls(arr, x+1) == true){
                x++;
                cnt++;
            }
            maxi = max(cnt, maxi);
        }
        return maxi;
    }
};