// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
    vector<string> v;
    for (int i = 1; i <= N; i++)
    {
        string str = "";
        int temp = i;
        int itr = 0;
        while (temp >= (1 << itr))
        {
            if (temp & (1 << itr))
                str.push_back('1');
            else
                str.push_back('0');
            itr++;
        }
        reverse(str.begin(), str.end());
        v.push_back(str);
    }
    return v;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> ans = generate(n);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends