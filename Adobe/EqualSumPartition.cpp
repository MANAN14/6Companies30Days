// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int equalPartition(int n, int arr[])
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += arr[i];
        int sum1 = sum;
        if (sum % 2)
            return 0;
        sum = sum / 2;
        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                    continue;
                }
                if (arr[i - 1] <= j)
                {
                    dp[i][j] = max(dp[i - 1][j], arr[i - 1] + dp[i - 1][j - arr[i - 1]]);
                }
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        if (sum1 - 2 * dp[n][sum] == 0)
            return 1;
        return 0;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        if (ob.equalPartition(N, arr))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
} // } Driver Code Ends