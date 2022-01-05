// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    vector<ull> v(n+1);
	    v[0]=1;
	    ull i=0,j=0,k=0;
	    for(ull x=1;x<=n;x++)
	    {
	        v[x]=min({v[i]*2,v[j]*3,v[k]*5});
	        if(v[x]==v[i]*2)
	        i++;
	        if(v[x]==v[j]*3)
	        j++;
	        if(v[x]==v[k]*5)
	        k++;
	    }
	    
	    return v[n-1];
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends