// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    //Function to find list of all words possible by pressing given numbers.
    void recur(vector<string> &v, int a[], int N, int i, map<int, vector<char>> &mp, string &str)
    {
        if (i == N)
        {
            v.push_back(str);
            return;
        }
        for (auto &it : mp[a[i]])
        {
            str.push_back(it);
            recur(v, a, N, i + 1, mp, str);
            str.pop_back();
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        map<int, vector<char>> mp;
        vector<string> v;
        mp[2] = {'a', 'b', 'c'};
        mp[3] = {'d', 'e', 'f'};
        mp[4] = {'g', 'h', 'i'};
        mp[5] = {'j', 'k', 'l'};
        mp[6] = {'m', 'n', 'o'};
        mp[7] = {'p', 'q', 'r', 's'};
        mp[8] = {'t', 'u', 'v'};
        mp[9] = {'w', 'x', 'y', 'z'};
        string str = "";
        recur(v, a, N, 0, mp, str);
        return v;
    }
};

// { Driver Code Starts.

int main()
{

    int T;

    cin >> T; //testcases

    while (T--)
    { //while testcases exist
        int N;

        cin >> N; //input size of array

        int a[N]; //declare the array

        for (int i = 0; i < N; i++)
        {
            cin >> a[i]; //input the elements of array that are keys to be pressed
        }

        Solution obj;

        vector<string> res = obj.possibleWords(a, N);
        for (string i : res)
            cout << i << " ";
        cout << endl;
    }

    return 0;
} // } Driver Code Ends