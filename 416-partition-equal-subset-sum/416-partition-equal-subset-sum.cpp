class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size(); i++) //calculating total sum
        {
            sum+=nums[i]; 
        }
        
        if(sum%2 != 0) return false;
        sum/=2;

        
        vector<bool> dp(sum+1, false); // sum+1 for 0 also
        dp[0] = true; 
        for (auto num : nums)
            for (int i=sum; i>0; --i)  
            if (num<=i) 
                    dp[i] = dp[i-num] || dp[i];
        return dp[sum];

    }
};