// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int minSteps(int A)
    {
        A = abs(A);
        int sum = 0, step = 0;
        while (sum < A || (sum - A) % 2 != 0)
        {
            step++;
            sum += step;
        }
        return step;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int D;
        cin >> D;

        Solution ob;
        cout << ob.minSteps(D) << "\n";
    }
    return 0;
} // } Driver Code Ends