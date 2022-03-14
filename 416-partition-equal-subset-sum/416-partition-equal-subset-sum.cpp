class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++) //calculating total sum
        {
            sum+=nums[i]; 
        }
        
        if(sum%2 != 0) return false;
        
        vector<int> dp(sum + 1, 0);
        dp[0] = 1;
        for (auto num : nums) {
            for (int i = sum; i >=0; --i)
                if (dp[i]) dp[i + num] = 1;
            if (dp[sum / 2]) return true;
        }
        return false;

    }
};