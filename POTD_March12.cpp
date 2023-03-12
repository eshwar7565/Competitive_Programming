//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int n) {
        //code here
        vector<int>ans;
        vector<int>freq;
        for(int i=0;i<n;i++)
        {
           int coun= count(mat[i].begin(), mat[i].end(), 1);
           freq.push_back(coun);
            
            
        }
        vector<int>freq1 = freq;
        sort(freq1.begin(),freq1.end());
        std::vector<int>::iterator it;
        int maxcount = freq1[n-1];
        it = std::find(freq.begin(),
                 freq.end(), maxcount);
                 ans.push_back(it - freq.begin());
                 ans.push_back(maxcount);
                 return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends
