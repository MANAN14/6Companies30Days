//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    string nextPalin(string N)
    {
        multiset<char> st;
        for (int i = N.size() / 2 - 1; i >= 0; i--)
        {
            st.insert(N[i]);
            if (st.upper_bound(N[i]) != st.end())
            {
                N[i] = *st.upper_bound(N[i]);
                N[N.size() - 1 - i] = N[i];
                st.erase(st.find(N[i]));
                for (int j = i + 1; j < N.size() / 2; j++)
                {
                    N[j] = *st.begin();
                    st.erase(st.begin());
                    N[N.size() - 1 - j] = N[j];
                }
                return N;
            }
        }
        return "-1";
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.nextPalin(s) << endl;
    }
    return 0;
} // } Driver Code Ends