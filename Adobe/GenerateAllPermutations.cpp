
#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n);

// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    void recur(vector<string> &v, int n, int i, int j, string str)
    {
        if (i == n && j == n)
        {
            v.push_back(str);
            return;
        }
        if (j < i)
        {
            str.push_back(')');
            recur(v, n, i, j + 1, str);
            str.pop_back();
        }
        if (i < n)
        {
            str.push_back('(');
            recur(v, n, i + 1, j, str);
            str.pop_back();
        }
    }

public:
    vector<string> AllParenthesis(int n)
    {
        vector<string> v;
        string str = "";
        recur(v, n, 0, 0, str);
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
        int n;
        cin >> n;
        Solution ob;
        vector<string> result = ob.AllParenthesis(n);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << "\n";
    }
    return 0;
}
// } Driver Code Ends