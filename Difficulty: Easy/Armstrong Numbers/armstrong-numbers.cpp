// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int sum = 0;
        int N = n;
        while(N != 0){
            int num = N%10;
            int cube = num*num*num;
            sum += cube;
            N = N/10;
        }
        if(sum == n){
            return true;
        }
        else{
            return false;
        }
        
    }
};