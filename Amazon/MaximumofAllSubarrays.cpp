// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> v(n-k+1,0);
        deque<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            while(!q.empty() && arr[i]>=q.back().first)
            {
                q.pop_back();
            }
            q.push_back({arr[i],i});
            if(q.front().second==(i-k)) q.pop_front();
            if(i>=k-1)
            {
                v[i-k+1]=q.front().first;
            }
        }
        return v;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends