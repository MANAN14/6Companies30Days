// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    int recur(string str, int n,vector<long long> &dp)
    {
        if(n==0)
        return dp[n]=1;
        
        if(dp[n]!=-1)
        return dp[n];
        
        int temp1=0;  
        if(str[n-1]!='0')
        temp1=recur(str,n-1,dp)%1000000007;
        int temp2=0;
        if(n>=2 && ((str[n-2]=='1') || (str[n-2]=='2' && str[n-1]<='6')))
        temp2=recur(str,n-2,dp)%1000000007;
        
        return dp[n]=(temp1+temp2)%1000000007;
    }
	public:
		int CountWays(string str){
		    int n=str.size();
		    vector<long long> dp(n+1,-1);
		    recur(str,n,dp);
		    return dp[n];
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends