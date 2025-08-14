class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
    int n = a.size();
    int maxi = *max_element(a.begin(), a.end());
    vector<int> hash(maxi + 1, 0);
    for(int i = 0; i < a.size(); i++){
        hash[a[i]]++;
    }
    for(int i = 0; i < b.size(); i++){
        hash[b[i]]--;
    }
    for(int i = 0; i < hash.size(); i++){
        if(hash[i] > 0){
            return false;
        }
    }
    return true;
    }
};