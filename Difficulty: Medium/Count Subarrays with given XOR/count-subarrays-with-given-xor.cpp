class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        map<int, int> mpp;
        int count = 0;
        int Xor = 0;
        mpp[Xor]++;
        for(int i = 0; i < arr.size(); i++){
            Xor = Xor ^ arr[i];
            int x = Xor ^ k;
            count += mpp[x];
            mpp[Xor]++;
        }
        return count;
    }
};