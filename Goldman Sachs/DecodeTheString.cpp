// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
string recur(string s,int &index)
{
    string ans="";
    while(index < s.length() && s[index]!=']')
    {
        if(!isdigit(s[index]))
            ans+=s[index++];
        else
        {
            int temp = 0;
            while(index < s.length() && isdigit(s[index]))
            temp = temp*10 + (s[index++]-'0');
                
            index++;
            
            string str = recur(s,index);
            
            index++;
            while(temp--)
            ans+=str;
        }
    }
        
    return ans;
}
    string decodedString(string s){
        int index=0;
        return recur(s,index);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends