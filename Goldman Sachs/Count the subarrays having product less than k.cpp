// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& A, int n, long long k) {
        int i=0,j=0;
        long long prod=1;
        int ans=0;
        if (k == 0) return 0;
        while(i<A.size() && j<A.size())
        {
            if(prod<k)
            {
                prod*=A[j];
            }
            if(prod>=k)
            {
                while(prod>=k && i<=j)
                {
                    prod/=A[i];
                    i++;
                }
            }
            ans+=(j-i+1);
            j++;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends