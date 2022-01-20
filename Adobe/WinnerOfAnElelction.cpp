#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[], int n)
    {
        map<string, int> mp;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
            ans = max(ans, mp[arr[i]]);
        }
        for (auto &x : mp)
        {
            if (x.second == ans)
            {
                vector<string> s;
                s.push_back(x.first);
                s.push_back(to_string(x.second));
                return s;
            }
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int n;
        cin >> n;

        string arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr, n);

        cout << result[0] << " " << result[1] << endl;
    }
    return 0;
}
// } Driver Code Ends