class Solution {
  public:
//------------Optimal Aproach : Using Set--------------//
    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        if(arr.empty()){
            return 0;
        }
        unordered_set<int> st(arr.begin(), arr.end());
        int maxi = 1;
        for(auto it : st){
            int x = it;
            int cnt = 1;
            if(st.find(x-1) == st.end()){
                while(st.find(x+1) != st.end()){
                    cnt++;
                    x++;
                }
            }
            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};