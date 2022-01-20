//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int recur(vector<vector<int>> &dp, int i, int j, vector<int> &a)
    {
        if (i > j)
            return dp[i][j] = 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        if (i == j)
            return dp[i][j] = a[i];

        int temp1 = a[i] + min(recur(dp, i + 2, j, a), recur(dp, i + 1, j - 1, a));
        int temp2 = a[j] + min(recur(dp, i, j - 2, a), recur(dp, i + 1, j - 1, a));

        return dp[i][j] = max(temp1, temp2);
    }
    int maxCoins(vector<int> &a, int n)
    {
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return recur(dp, 0, n - 1, a);
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
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.maxCoins(A, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends