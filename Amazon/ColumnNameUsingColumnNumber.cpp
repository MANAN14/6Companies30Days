// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string colName (long long int A)
    {
        string s="";
        int i=0;
        while(A)
        {
            int temp=A%(int)26;
            if(temp==0)
            {
                s+='Z';
                A/=26;
                A--;
            }
            else
            {
                s+=char((temp-1)+'A');
                A/=26;
            }
            i++;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}
  // } Driver Code Ends