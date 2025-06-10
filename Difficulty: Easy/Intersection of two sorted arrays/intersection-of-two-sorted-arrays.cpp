class Solution {
  public:
    // Function to return a list containing the intersection of two arrays.
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // Your code here
        //----------------Optimal Approach -------------------//
        int i = 0, j = 0;
        int n = arr1.size();
        int m = arr2.size();
        vector<int> add;
        while(i < n && j < m)
        {
            if(arr1[i] < arr2[j])
            {
                i++;
            }
            else if(arr2[j] < arr1[i])
            {
                j++;
            }
            else 
            {
                if(add.empty() || add.back() != arr1[i])
                {
                    add.push_back(arr1[i]);
                }
                
                int val = arr1[i];
                while(i < n && arr1[i] == val)
                i++;
                while(j < m && arr2[j] == val)
                j++;
            }
        }
        return add;
    }
};