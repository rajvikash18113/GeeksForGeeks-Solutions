class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // ------------------ 2nd Approach----------------------------//
        vector<int> unionArr;
        map<int, int> mpp;
        
        for(int i = 0; i < a.size(); i++)
        {
            mpp[a[i]]++;
        }
        
        for(int i = 0; i < b.size(); i++)
        {
            mpp[b[i]]++;
        }
        
        for(auto i : mpp)
        {
            unionArr.push_back(i.first);
        }
        
        return unionArr;
        // return vector with correct order of elements
    }
};