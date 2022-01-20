#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int>> fourSum(vector<int> &arr, int k)
    {
        vector<vector<int>> v;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size() - 3; i++)
        {
            for (int j = i + 1; j < arr.size() - 2; j++)
            {
                int l = j + 1;
                int r = arr.size() - 1;
                while (l < r)
                {
                    if (arr[l] + arr[r] == (k - arr[i] - arr[j]))
                    {
                        vector<int> temp;
                        temp.push_back(arr[i]);
                        temp.push_back(arr[j]);
                        temp.push_back(arr[l]);
                        temp.push_back(arr[r]);
                        v.push_back(temp);
                        l++;
                        r--;
                    }
                    else if (arr[l] + arr[r] < (k - arr[i] - arr[j]))
                    {
                        l++;
                    }
                    else
                        r--;
                }
            }
        }
        sort(v.begin(), v.end());
        auto ip = std::unique(v.begin(), v.end());
        v.resize(std::distance(v.begin(), ip));
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int>> ans = ob.fourSum(a, k);
        for (auto &v : ans)
        {
            for (int &u : v)
            {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty())
        {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
} // } Driver Code Ends