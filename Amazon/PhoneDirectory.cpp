// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        set<string> ms;
        vector<vector<string>> ans;
        for(int i=0;i<n;i++)
        ms.insert(contact[i]);
        for(int i=0;i<s.size();i++)
        {
            set<string> newms;
            vector<string> v;
            for(auto &x:ms)
            {
                if(x.size() > i && s[i]==x[i])
                {
                    newms.insert(x);
                    v.push_back(x);
                }
            }
            ms=newms;
            if(v.empty()) v.push_back("0");
            ans.push_back(v);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends