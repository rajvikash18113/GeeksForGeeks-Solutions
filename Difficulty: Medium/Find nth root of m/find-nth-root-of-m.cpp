class Solution {
  public:
    int nthRoot(int n, int m) {
        int low = 1, high = m;
        while(low <= high){
            int mid = low + (high - low) /2;
            long long root = 1;
            for(int i = 1; i <= n; i++){
                root *= mid;
            } 
            if(root == m){
                return mid;
            }
            else if(root > m){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return -1;
    }
};