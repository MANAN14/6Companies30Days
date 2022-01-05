class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,ans=INT_MAX;
        while(j<=nums.size())
        {
            if(j==nums.size())
            {
                while(target<=0 && i<j)
                {
                    ans=min(ans,j-i+1);
                    target+=nums[i];
                    i++;
                }
                break;
            }
            if(j<nums.size() && target>0)
            {
                target-=nums[j];
            }
            if(target<=0)
            {
                while(target<=0 && i<=j)
                {
                    ans=min(ans,j-i+1);
                    target+=nums[i];
                    i++;
                }
            }
            j++;
        }
        if(ans==INT_MAX) return 0;
        return ans;
    }
};