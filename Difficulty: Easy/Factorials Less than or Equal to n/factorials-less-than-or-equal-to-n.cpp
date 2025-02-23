//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  long long number = 1;
  long long  multiply = 1;
    vector<long long> factorialNumbers(long long n) {
        vector<long long> result;
        while(number <= n)
        {
            if(number <= n)
            {
                result.push_back(number);
            }
            multiply++;
            number *= multiply;
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends