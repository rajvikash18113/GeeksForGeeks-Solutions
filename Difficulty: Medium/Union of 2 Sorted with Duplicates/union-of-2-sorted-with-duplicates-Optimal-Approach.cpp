class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        //---------------3rd Approach - Optimal -------------- //
        int n = a.size();
        int m = b.size();
        int i = 0;
        int j = 0;
        vector<int> unionArr;
        while(i < n && j < m)
        {
            if(a[i] <= b[j])
            {
                if(unionArr.size() == 0 || unionArr.back() != a[i])
                {
                    unionArr.push_back(a[i]);
                }
                i++;
            }
            else
            {
                if(unionArr.size() == 0 || unionArr.back() != b[j])
                {
                    unionArr.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(i < n)
        {
            if(unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        
        while(j < m)
        {
            if(unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }
        
        return unionArr;
        
        // return vector with correct order of elements
    }
};
