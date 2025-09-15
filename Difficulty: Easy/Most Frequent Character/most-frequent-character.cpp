class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        int n = s.length();
        vector<int> freq(256, 0);
        for(int i = 0;i < n; i++){
            freq[s[i]]++;
        }
        char c;
        int maxi = 0;
        for(int i = 0; i < freq.size(); i++){
            if(freq[i] > maxi){
                maxi = freq[i];
                c  = (char)i;
            }
        }
        return c;
    }
};