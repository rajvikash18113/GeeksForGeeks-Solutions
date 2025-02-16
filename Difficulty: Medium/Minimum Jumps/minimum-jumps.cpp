//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        int maxi = 0, choice = 0, jump = 0;
        for(int  i = 0; i < n; i++)
        {
            // arr[i] + 1 will give us th evalue that till how much index we will jump from here
            maxi = max(maxi, arr[i] + i);
            if(i == choice)
            {
                choice = maxi;
                jump++;
            }
            // if we reached the last element of array or goes out from the last element then return jump
            if(choice >= n - 1)
            return jump;
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends
