// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        // code here
        int sum = 0;
        int maxi = INT_MIN;
        int tempstart = 0;
        int start = -1, end = -1;
        for(int i = 0; i < arr.size(); i++){
        if(arr[i] >= 0){
            sum += arr[i];
            if(sum > maxi){
                maxi = sum;
                start = tempstart;
                end = i;
            }
            else if(sum == maxi){
                if(i - tempstart > end - start){
                    start = tempstart;
                    end = i;
                }
            }
        }
        else{
            sum = 0;
            tempstart = i + 1;
        }
        }
        if(start == -1){
            return {-1};
        }
        vector<int> result;
        for(int i = start; i <= end; i++){
            result.push_back(arr[i]);
        }
        return result;
    }
};