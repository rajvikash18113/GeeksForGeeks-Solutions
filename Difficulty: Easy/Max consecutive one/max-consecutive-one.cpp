// User function Template for C++
class Solution {
  public:
    int maxConsecutiveCount(vector<int> &arr) {
        // code here
        int count_0 = 0;
        int count_1 = 0; 
        int maxi_0 = 0;
        int maxi_1 = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] == 1){
                count_0 = 0;
                count_1++;
                maxi_1 = max(maxi_1, count_1);
            }
            else{
                count_1 = 0;
                count_0++;
                maxi_0 = max(count_0, maxi_0);
            }
        }
        return max(maxi_0, maxi_1);
    }
};