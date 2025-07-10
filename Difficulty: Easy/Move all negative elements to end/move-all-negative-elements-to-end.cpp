class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int> pos;
        vector<int> neg;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] < 0){
                neg.push_back(arr[i]);
            }
            else{
                pos.push_back(arr[i]);
            }
        }
        int p = pos.size();
        int n = neg.size();
        for(int i = 0; i < p; i++){
            arr[i] = pos[i];
        }
        for(int i = 0; i < n; i++){
            arr[p+i] = neg[i];
        }
    }
};