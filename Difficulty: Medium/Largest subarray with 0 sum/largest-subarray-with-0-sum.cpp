class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int sum = 0;
        int maxLen = 0;
        map<int, int> mpp;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
            if(sum == 0){
                maxLen =  i + 1;
            }
            else if(mpp.find(sum) != mpp.end()){
                int len = i - mpp[sum];
                maxLen = max(len, maxLen);
            }
            else{
                mpp[sum] = i;
            }
            
        }
        return maxLen;
        
    }
};