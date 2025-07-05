class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        unordered_map<int, int> mpp;
        vector<int> ans;
        for(int i = 0; i < arr.size(); i++){
            mpp[arr[i]]++;
        }
        for(auto it : mpp){
            if(it.second == 2){
                ans.push_back(it.first);
            }
        }
        if(mpp.size() == 0){
            return {};
        }
        else{
            return ans;
        }
    }
};