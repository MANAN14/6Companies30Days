// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string A)
{     
    string ans="";
  for(int i=0;i<A.size();i++)
  {
    int j=i;
    while(j<A.size() && A[i]==A[j])
    {
        j++;
    }
    ans.push_back(A[i]);
    int temp=j-i;
    ans+=to_string(temp);
    j--;
    i=j;
  }
  return ans;
}     
 
