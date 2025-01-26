//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int evenlyDivides(int n) {
        int n1 = n;
        int count = 0;
        while(n1 > 0)
        {
            int digit = n1 % 10;
            if(digit != 0 && n % digit == 0)
            {
                count++;
            }
            n1 /= 10;
            
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends