#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string amendSentence (string s)
    {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<='Z' && s[i]>='A')
            {
                int cnt=1;
                int temp=i;
                s[i]=s[i]+32;
                i++;
                while(i<s.size() && s[i]>='a' && s[i]<='z')
                {
                    i++;
                    cnt++;
                }
                i--;
                ans+=s.substr(temp,cnt);
                ans.push_back(' ');
            }
            else
            {
                int cnt=1;
                int temp=i;
                //s[i]=s[i]+32;
                i++;
                while(i<s.size() && s[i]>='a' && s[i]<='z')
                {
                    i++;
                    cnt++;
                }
                i--;
                ans+=s.substr(temp,cnt);
                ans.push_back(' ');
            }
        }
        ans.pop_back();
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}  // } Driver Code Ends