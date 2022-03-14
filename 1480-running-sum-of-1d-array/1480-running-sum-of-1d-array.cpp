class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       for(int i=1; i<nums.size(); i++)
           nums[i] += nums[i-1]; //we aer not calculating everytime from 0, we are simply adding the percalculated value.
        return nums;
    }
};