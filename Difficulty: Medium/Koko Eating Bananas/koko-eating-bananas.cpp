class Solution {
  public:
    int findMax(vector<int> &arr){
        int biggest = INT_MIN;
        for(int i = 0; i < arr.size(); i++){
            biggest = max(biggest, arr[i]);
        }
        return biggest;
    }
    
    int totalHour(vector<int> arr, int hour){
        int total = 0;
        for(int i = 0; i < arr.size(); i++){
            total += ceil((double)arr[i] / (double)hour);
        }
        return total;
    }
    int kokoEat(vector<int>& arr, int k) {
        int ans = -1;
        int low = 1, high = findMax(arr);
        while(low <= high){
            int mid = low + (high - low) / 2;
            int total_hour = totalHour(arr, mid);
            if(total_hour <= k){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};