class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans=0;
        for(int i=1;i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                int cnt=1;
                int j=i;
                while(j>0 && arr[j]>arr[j-1])
                {
                    j--;
                    cnt++;
                }
                while(i<arr.size()-1 && arr[i]>arr[i+1])
                {
                    i++;
                    cnt++;
                }
                ans=max(cnt,ans);
                i--;
            }
        }
        return ans;
    }
};