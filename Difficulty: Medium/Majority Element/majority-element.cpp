class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        int element = INT_MIN;
        for(int i = 0; i < n; i++){
            if(count == 0){
                count++;
                element = arr[i];
            }
            else if(arr[i] == element){
                count++;
            }
            else if(arr[i] != element){
                count--;
            }
        }
        int count2 = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == element){
                count2++;
            }
        }
        if(count2 > (n/2)){
            return element;
        }else{
            return -1;
        }
        
    }
};