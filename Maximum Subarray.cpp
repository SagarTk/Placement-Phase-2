class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    
        int sum=0 , msum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(sum < nums[i])    sum=nums[i];
            if(msum < sum)       msum=sum;
        }
        return msum;
    }
};